/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class SSUIServiceClient;

@interface SSUIService : NSObject {

	SSUIServiceClient* _client;

}
-(id)init;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 ;
-(void)_runPPTNamed:(id)arg1 ;
@end

