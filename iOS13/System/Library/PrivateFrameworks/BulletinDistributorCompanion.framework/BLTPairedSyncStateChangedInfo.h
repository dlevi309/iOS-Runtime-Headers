/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTPairedSyncStateChangedInfo : NSObject {

	unsigned long long _oldState;
	unsigned long long _newState;

}

@property (assign,nonatomic) unsigned long long oldState;              //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) unsigned long long newState;              //@synthesize newState=_newState - In the implementation block
-(unsigned long long)oldState;
-(void)setOldState:(unsigned long long)arg1 ;
-(unsigned long long)newState;
-(void)setNewState:(unsigned long long)arg1 ;
@end

