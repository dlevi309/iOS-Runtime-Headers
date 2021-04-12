/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol ACCConnectionInfoDelegateProtocol <NSObject>
@optional
-(void)accessoryConnectionAttached:(id)arg1 type:(int)arg2;
-(void)accessoryConnectionDetached:(id)arg1;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 forConnection:(id)arg4;
-(void)accessoryEndpointUpdate:(id)arg1 protocol:(int)arg2 forConnection:(id)arg3;
-(void)accessoryConnectionInfoPropertyChanged:(id)arg1;
-(void)accessoryEndpointInfoPropertyChanged:(id)arg1 forConnection:(id)arg2;
-(void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4;
-(void)accessoryEndpointUpdate:(id)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5;
-(void)accessoryConnectionInfoPropertyChanged:(id)arg1 properties:(id)arg2;
-(void)accessoryEndpointInfoPropertyChanged:(id)arg1 properties:(id)arg2 forConnection:(id)arg3;
-(void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2;

@end

