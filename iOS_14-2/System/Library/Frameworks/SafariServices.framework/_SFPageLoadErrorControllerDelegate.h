/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFPageLoadErrorControllerDelegate <NSObject>
@optional
-(void)pageLoadErrorControllerDidAddAlert:(id)arg1;

@required
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
-(id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg1;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
-(BOOL)pageLoadErrorControllerShouldReloadAfterError:(id)arg1;
-(void)pageLoadErrorControllerClosePage:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
-(void)pageLoadErrorController:(id)arg1 allowLegacyTLSConnectionForURL:(id)arg2 navigateToURL:(id)arg3;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2;

@end

