/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol CSIndexExtensionDelegate <NSObject>
@required
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

