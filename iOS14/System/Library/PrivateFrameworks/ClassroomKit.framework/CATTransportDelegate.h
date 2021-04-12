/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CATTransportDelegate <NSObject>
@optional
-(void)transportDidInvalidate:(id)arg1;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didSendMessage:(id)arg2;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2;
-(void)transportDidResume:(id)arg1;
-(void)transportDidConnect:(id)arg1;

@end

