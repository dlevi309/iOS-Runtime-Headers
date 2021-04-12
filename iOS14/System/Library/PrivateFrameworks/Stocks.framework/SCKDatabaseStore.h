/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

@class NSDate, CKServerChangeToken;


@protocol SCKDatabaseStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled; 
@required
-(void)setServerChangeToken:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastSyncDate:(id)arg1;
-(BOOL)isCloudBackupEnabled;
-(NSDate *)lastSyncDate;
-(void)setCloudBackupEnabled:(BOOL)arg1;
-(void)setLastDirtyDate:(id)arg1;
-(CKServerChangeToken *)serverChangeToken;
-(id)zoneStoreForSchema:(id)arg1;

@end

