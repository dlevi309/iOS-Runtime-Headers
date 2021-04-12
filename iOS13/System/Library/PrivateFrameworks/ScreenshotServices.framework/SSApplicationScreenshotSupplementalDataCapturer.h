/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class FBSOpenApplicationService;

@interface SSApplicationScreenshotSupplementalDataCapturer : NSObject {

	FBSOpenApplicationService* _openAppService;

}
+(id)settingsForDocumentCapture:(BOOL)arg1 elementIdentifier:(id)arg2 ;
-(id)init;
-(void)_sendRequestForEnvironmentElement:(id)arg1 info:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)captureMetadataForEnvironmentElement:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)captureDocumentForEnvironmentElement:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

