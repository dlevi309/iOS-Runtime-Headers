/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase
+(id)sharedLogger;
+(void)nukeCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(void)_logSqliteErrorLine:(int)arg1 ;
-(void)startOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)stopOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)discardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(/*^block*/id)arg3 ;
@end

