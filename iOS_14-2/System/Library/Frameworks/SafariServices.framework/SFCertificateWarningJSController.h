/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFCertificateWarningJSControllerMethods.h>

@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {

	SFWebProcessPlugInCertificateWarningController* _certificateWarningController;

}
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)showCertificateInformation;
-(void)openClockSettings;
-(void)visitInsecureWebsite;
-(void)pageLoaded;
-(id)initWithCertificateWarningController:(id)arg1 ;
-(void)goBackSelected;
@end

