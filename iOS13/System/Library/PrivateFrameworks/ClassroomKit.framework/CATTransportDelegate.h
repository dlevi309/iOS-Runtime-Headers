/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CATTransportDelegate <NSObject>
@optional
-(void)transportDidResume:(id)arg1;
-(void)transportDidInvalidate:(id)arg1;
-(void)transportDidConnect:(id)arg1;
-(void)transport:(id)arg1 didSendMessage:(id)arg2;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2;

@end

