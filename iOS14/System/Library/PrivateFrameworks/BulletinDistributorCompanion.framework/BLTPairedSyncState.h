/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isInitialSyncComplete;
-(unsigned long long)state;
-(void)setInitialSyncComplete:(BOOL)arg1 ;
-(void)leaveState:(unsigned long long)arg1 ;
-(BOOL)becameTrafficUnrestricted:(id)arg1 ;
-(BOOL)isTrafficRestricted;
-(BOOL)isSyncRestricted;
-(BOOL)becameSyncUnrestricted:(id)arg1 ;
@end

