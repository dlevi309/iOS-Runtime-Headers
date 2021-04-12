/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@class NSMutableArray;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource> {

	NSMutableArray* _sortedEvents;

}

@property (nonatomic,retain) NSMutableArray * sortedEvents;              //@synthesize sortedEvents=_sortedEvents - In the implementation block
-(void)cancel;
-(id)initWithEvents:(id)arg1 ;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)sortedEvents;
-(void)setSortedEvents:(NSMutableArray *)arg1 ;
@end

