/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MPRequestResponseControllerDelegate <NSObject>
@optional
-(void)didFinishLoadingRequestForController:(id)arg1;
-(void)willBeginLoadingRequestForController:(id)arg1;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;

@end

