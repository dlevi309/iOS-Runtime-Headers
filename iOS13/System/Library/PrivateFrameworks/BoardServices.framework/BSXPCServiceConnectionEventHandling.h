/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol BSXPCServiceConnectionEventHandling <NSObject>
@required
-(void)connection:(id)arg1 handleConnection:(id)arg2;
-(void)connectionHandleNoMoreChildren:(id)arg1;
-(void)connection:(id)arg1 handleError:(id)arg2;
-(void)connection:(id)arg1 handleMessage:(id)arg2;
-(void)connectionActivated:(id)arg1;
-(void)connectionInterrupted:(id)arg1;
-(void)connectionInvalidated:(id)arg1;

@end

