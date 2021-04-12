/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneStore.h>

@class NSDate, CKServerChangeToken, NSArray;

@interface SCKZoneMemoryStore : NSObject <SCKZoneStore> {

	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSArray* _serverRecords;
	NSArray* _pendingCommands;

}

@property (nonatomic,copy) NSDate * lastSyncDate;                                //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                               //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,copy) NSArray * serverRecords;                              //@synthesize serverRecords=_serverRecords - In the implementation block
@property (nonatomic,copy) NSArray * pendingCommands;                            //@synthesize pendingCommands=_pendingCommands - In the implementation block
-(id)init;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(NSArray *)serverRecords;
-(NSArray *)pendingCommands;
-(void)applyServerRecordsDiff:(id)arg1 ;
-(void)addPendingCommands:(id)arg1 ;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1 ;
-(void)setServerRecords:(NSArray *)arg1 ;
-(void)setPendingCommands:(NSArray *)arg1 ;
@end

