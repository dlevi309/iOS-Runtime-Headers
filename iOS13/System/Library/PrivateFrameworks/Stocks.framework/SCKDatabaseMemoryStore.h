/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKDatabaseStore.h>

@class NSDate, CKServerChangeToken, NSMutableDictionary;

@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore> {

	BOOL _cloudBackupEnabled;
	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSMutableDictionary* _zoneStoresByName;

}

@property (nonatomic,copy) NSMutableDictionary * zoneStoresByName;                             //@synthesize zoneStoresByName=_zoneStoresByName - In the implementation block
@property (nonatomic,copy) NSDate * lastSyncDate;                                              //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                                             //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;                            //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
-(id)init;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)isCloudBackupEnabled;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)zoneStoresByName;
-(id)zoneStoreForSchema:(id)arg1 ;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(void)setZoneStoresByName:(NSMutableDictionary *)arg1 ;
@end

