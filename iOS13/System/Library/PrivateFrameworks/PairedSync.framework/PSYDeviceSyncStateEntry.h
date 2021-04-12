/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasCompletedInitialOrMigrationSync;
-(BOOL)hasCompletedSync;
-(id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2 ;
-(BOOL)hasCompletedInitialSync;
-(NSUUID *)pairingID;
-(void)setPairingID:(NSUUID *)arg1 ;
-(unsigned long long)initialSyncState;
-(void)setInitialSyncState:(unsigned long long)arg1 ;
-(unsigned)syncSwitchIndex;
-(void)setSyncSwitchIndex:(unsigned)arg1 ;
-(unsigned)migrationIndex;
-(void)setMigrationIndex:(unsigned)arg1 ;
@end

