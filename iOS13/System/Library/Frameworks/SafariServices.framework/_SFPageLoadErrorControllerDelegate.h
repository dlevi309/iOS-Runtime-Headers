/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
-(void)pageLoadErrorControllerClosePage:(id)arg1;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2;

@end

