/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/SFSQLite.h>

@class NSArray, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray * hardFailures; 
@property (readonly) NSArray * softFailures; 
@property (readonly) NSArray * allEvents; 
@property (readonly) NSArray * samples; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(NSArray *)samples;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 timestampBucket:(unsigned)arg3 ;
-(long long)successCountForEventType:(id)arg1 ;
-(NSDate *)uploadDate;
-(id)deserializedRecords:(id)arg1 ;
-(NSArray *)softFailures;
-(void)incrementSuccessCountForEventType:(id)arg1 ;
-(id)summaryCounts;
-(void)removeAllSamplesForName:(id)arg1 ;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(void)incrementSoftFailureCountForEventType:(id)arg1 ;
-(NSArray *)hardFailures;
-(BOOL)tryToOpenDatabase;
-(void)incrementHardFailureCountForEventType:(id)arg1 ;
-(long long)softFailureCountForEventType:(id)arg1 ;
-(NSArray *)allEvents;
-(void)setUploadDate:(NSDate *)arg1 ;
-(long long)hardFailureCountForEventType:(id)arg1 ;
-(void)dealloc;
-(void)addSample:(id)arg1 forName:(id)arg2 ;
-(void)clearAllData;
@end

