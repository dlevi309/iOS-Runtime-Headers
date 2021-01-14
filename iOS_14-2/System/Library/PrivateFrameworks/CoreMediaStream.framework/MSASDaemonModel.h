/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
+(id)defaultModel;
-(id)init;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(id)earliestNextActivityDate;
-(id)nextActivityDateByPersonID;
-(void)clearAllNextActivityDates;
@end

