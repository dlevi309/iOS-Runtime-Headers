/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSystemServiceServerHardwareButtonDelegate <SBSystemServiceServerDelegate>
@required
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 requestsHIDEvents:(BOOL)arg3 token:(id)arg4 forButtonKind:(long long)arg5;
-(void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;

@end

