/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <IOAccessoryManager/ACCSQLite.h>

@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray * allEvents; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(NSDate *)uploadDate;
-(id)summaryCounts;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(long long)successCount;
-(BOOL)tryToOpenDatabase;
-(NSArray *)allEvents;
-(void)setUploadDate:(NSDate *)arg1 ;
-(void)dealloc;
-(void)clearAllData;
-(void)incrementSuccessCount;
-(void)incrementWrapFailureCount;
-(long long)wrapFailureCount;
@end

