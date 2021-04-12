/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class SSUIServiceClient;

@interface SSUIService : NSObject {

	SSUIServiceClient* _client;

}
-(id)init;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 ;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showScreenshotUI;
-(void)_runPPTNamed:(id)arg1 numberOfRequiredScreenshots:(unsigned long long)arg2 ;
@end

