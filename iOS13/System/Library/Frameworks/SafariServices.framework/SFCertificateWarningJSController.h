/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFCertificateWarningJSControllerMethods.h>

@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {

	SFWebProcessPlugInCertificateWarningController* _certificateWarningController;

}
-(void)visitInsecureWebsite;
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)showCertificateInformation;
-(void)openClockSettings;
-(id)initWithCertificateWarningController:(id)arg1 ;
-(void)goBackSelected;
-(void)pageLoaded;
@end

