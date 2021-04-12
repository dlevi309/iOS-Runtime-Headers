/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTPairedSyncState : NSObject {

	BOOL _initialSyncComplete;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isTrafficRestricted,nonatomic,readonly) BOOL trafficRestricted; 
@property (getter=isSyncRestricted,nonatomic,readonly) BOOL syncRestricted; 
@property (getter=isInitialSyncComplete,nonatomic,readonly) BOOL initialSyncComplete;              //@synthesize initialSyncComplete=_initialSyncComplete - In the implementation block
+(id)sharedInstance;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isInitialSyncComplete;
-(void)setInitialSyncComplete:(BOOL)arg1 ;
-(void)leaveState:(unsigned long long)arg1 ;
-(BOOL)becameTrafficUnrestricted:(id)arg1 ;
-(BOOL)isTrafficRestricted;
-(BOOL)isSyncRestricted;
-(BOOL)becameSyncUnrestricted:(id)arg1 ;
@end

