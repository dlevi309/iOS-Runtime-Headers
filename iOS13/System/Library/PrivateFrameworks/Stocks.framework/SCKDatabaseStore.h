/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

@class NSDate, CKServerChangeToken;


@protocol SCKDatabaseStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled; 
@required
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(id)arg1;
-(void)setLastSyncDate:(id)arg1;
-(BOOL)isCloudBackupEnabled;
-(void)setCloudBackupEnabled:(BOOL)arg1;
-(id)zoneStoreForSchema:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;

@end

