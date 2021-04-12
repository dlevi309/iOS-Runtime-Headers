/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKXPCServiceDelegate <NSObject>
@optional
-(void)remoteServiceDidResume:(id)arg1;
-(void)remoteServiceDidSuspend:(id)arg1;

@required
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;

@end

