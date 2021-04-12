/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

@class NSDate, CKServerChangeToken, NSArray;


@protocol SCKZoneStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSArray * serverRecords; 
@property (nonatomic,copy) NSArray * pendingCommands; 
@required
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(id)arg1;
-(void)setLastSyncDate:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;
-(NSArray *)serverRecords;
-(NSArray *)pendingCommands;
-(void)applyServerRecordsDiff:(id)arg1;
-(void)addPendingCommands:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(void)setServerRecords:(id)arg1;
-(void)setPendingCommands:(id)arg1;

@end

