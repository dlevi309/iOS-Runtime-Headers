/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(NSDate *)lastDirtyDate;
-(id)init;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1 ;
-(void)setServerRecords:(NSArray *)arg1 ;
-(NSDate *)lastSyncDate;
-(void)setPendingCommands:(NSArray *)arg1 ;
-(NSArray *)pendingCommands;
-(void)addPendingCommands:(id)arg1 ;
-(void)applyServerRecordsDiff:(id)arg1 ;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(NSArray *)serverRecords;
-(CKServerChangeToken *)serverChangeToken;
@end

