/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICAnalyticsReporterBase.h>

@interface ICUsageAnalyticsReporter : ICAnalyticsReporterBase
+(id)sharedReporter;
+(void)clearSharedCollector;
+(double)percentileOfValue:(double)arg1 givenMaximum:(double)arg2 ;
-(void)incrementCountForKey:(id)arg1 withSignature:(id)arg2 ;
-(void)incrementCountForKey:(id)arg1 ;
-(void)logChecklistLengthFromTrackedToDoParagraphs:(id)arg1 ;
@end

