/*
 * Internal header for the s3eAndroidGooglePlayBilling extension.
 *
 * This file should be used for any common function definitions etc that need to
 * be shared between the platform-dependent and platform-indepdendent parts of
 * this extension.
 */

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#ifndef S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H
#define S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H

#include "s3eTypes.h"
#include "s3eAndroidGooglePlayBilling.h"
#include "s3eAndroidGooglePlayBilling_autodefs.h"


/**
 * Initialise the extension.  This is called once then the extension is first
 * accessed by s3eregister.  If this function returns S3E_RESULT_ERROR the
 * extension will be reported as not-existing on the device.
 */
s3eResult s3eAndroidGooglePlayBillingInit();

/**
 * Platform-specific initialisation, implemented on each platform
 */
s3eResult s3eAndroidGooglePlayBillingInit_platform();

/**
 * Terminate the extension.  This is called once on shutdown, but only if the
 * extension was loader and Init() was successful.
 */
void s3eAndroidGooglePlayBillingTerminate();

/**
 * Platform-specific termination, implemented on each platform
 */
void s3eAndroidGooglePlayBillingTerminate_platform();
void s3eAndroidGooglePlayBillingStart_platform(const char* base64PublicKey);

void s3eAndroidGooglePlayBillingStop_platform();

s3eResult s3eAndroidGooglePlayBillingIsSupported_platform();

void s3eAndroidGooglePlayBillingRequestPurchase_platform(const char* productID, bool inApp, const char* developerPayLoad);

void s3eAndroidGooglePlayBillingRequestProductInformation_platform(const char** inAppProducts, int numInAppProducts, const char** subProducts, int numSubProducts);

void s3eAndroidGooglePlayBillingRestoreTransactions_platform();

void s3eAndroidGooglePlayBillingConsumeItem_platform(const char* purchaseToken);


#endif /* !S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H */