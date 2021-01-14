/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(NSDate *)lastDirtyDate;
-(id)init;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setZoneStoresByName:(NSMutableDictionary *)arg1 ;
-(BOOL)isCloudBackupEnabled;
-(NSMutableDictionary *)zoneStoresByName;
-(NSDate *)lastSyncDate;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(id)zoneStoreForSchema:(id)arg1 ;
@end

