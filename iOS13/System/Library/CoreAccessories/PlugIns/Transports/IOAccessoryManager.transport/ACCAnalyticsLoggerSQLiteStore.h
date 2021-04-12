/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <IOAccessoryManager/ACCSQLite.h>

@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray * allEvents; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(void)dealloc;
-(BOOL)tryToOpenDatabase;
-(id)summaryCounts;
-(NSArray *)allEvents;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(NSDate *)uploadDate;
-(void)setUploadDate:(NSDate *)arg1 ;
-(void)clearAllData;
-(long long)successCount;
-(void)incrementSuccessCount;
-(void)incrementWrapFailureCount;
-(long long)wrapFailureCount;
@end

