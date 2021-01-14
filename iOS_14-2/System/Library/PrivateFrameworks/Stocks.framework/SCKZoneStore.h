/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerChangeToken:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastSyncDate:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(void)setServerRecords:(id)arg1;
-(NSDate *)lastSyncDate;
-(void)setPendingCommands:(id)arg1;
-(NSArray *)pendingCommands;
-(void)addPendingCommands:(id)arg1;
-(void)applyServerRecordsDiff:(id)arg1;
-(void)setLastDirtyDate:(id)arg1;
-(NSArray *)serverRecords;
-(CKServerChangeToken *)serverChangeToken;

@end

