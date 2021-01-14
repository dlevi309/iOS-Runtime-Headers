/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSContinuity;

@interface IDSContinuity : NSObject {

	_IDSContinuity* _internal;

}

@property (readonly) long long state; 
-(void)disconnectFromPeer:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(BOOL)arg6 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(BOOL)arg6 duplicates:(BOOL)arg7 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 ;
-(long long)state;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)connectToPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)dealloc;
@end

