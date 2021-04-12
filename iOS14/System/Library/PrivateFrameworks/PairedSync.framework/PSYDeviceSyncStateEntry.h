/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding> {

	unsigned _syncSwitchIndex;
	unsigned _migrationIndex;
	NSUUID* _pairingID;
	unsigned long long _initialSyncState;

}

@property (nonatomic,retain) NSUUID * pairingID;                               //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncState;              //@synthesize initialSyncState=_initialSyncState - In the implementation block
@property (assign,nonatomic) unsigned syncSwitchIndex;                         //@synthesize syncSwitchIndex=_syncSwitchIndex - In the implementation block
@property (assign,nonatomic) unsigned migrationIndex;                          //@synthesize migrationIndex=_migrationIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedInitialSync; 
@property (nonatomic,readonly) BOOL hasCompletedSync; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)pairingID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasCompletedInitialSync;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPairingID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCompletedInitialOrMigrationSync;
-(BOOL)hasCompletedSync;
-(id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2 ;
-(unsigned long long)initialSyncState;
-(void)setInitialSyncState:(unsigned long long)arg1 ;
-(unsigned)syncSwitchIndex;
-(void)setSyncSwitchIndex:(unsigned)arg1 ;
-(unsigned)migrationIndex;
-(void)setMigrationIndex:(unsigned)arg1 ;
@end

