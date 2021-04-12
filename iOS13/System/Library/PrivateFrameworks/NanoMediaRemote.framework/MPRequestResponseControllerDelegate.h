/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@protocol MPRequestResponseControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
-(void)didFinishLoadingRequestForController:(id)arg1;
-(void)willBeginLoadingRequestForController:(id)arg1;

@end

