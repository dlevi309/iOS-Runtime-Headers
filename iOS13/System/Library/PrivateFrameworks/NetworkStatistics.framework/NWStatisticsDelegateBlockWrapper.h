/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <libobjc.A.dylib/NWStatisticsSourceDelegate.h>
#import <libobjc.A.dylib/NWStatisticsManagerDelegate.h>

@class NSString;

@interface NWStatisticsDelegateBlockWrapper : NSObject <NWStatisticsSourceDelegate, NWStatisticsManagerDelegate> {

	/*^block*/id _addedBlock;
	/*^block*/id _countsBlock;
	/*^block*/id _descriptionBlock;
	/*^block*/id _removedBlock;
	/*^block*/id _eventsBlock;

}

@property (copy) id addedBlock;                                     //@synthesize addedBlock=_addedBlock - In the implementation block
@property (copy) id countsBlock;                                    //@synthesize countsBlock=_countsBlock - In the implementation block
@property (copy) id descriptionBlock;                               //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
@property (copy) id removedBlock;                                   //@synthesize removedBlock=_removedBlock - In the implementation block
@property (copy) id eventsBlock;                                    //@synthesize eventsBlock=_eventsBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)addedBlock;
-(id)eventsBlock;
-(id)removedBlock;
-(id)countsBlock;
-(id)descriptionBlock;
-(void)sourceDidReceiveCounts:(id)arg1 ;
-(void)sourceDidReceiveDescription:(id)arg1 ;
-(void)statisticsManager:(id)arg1 didAddSource:(id)arg2 ;
-(void)statisticsManager:(id)arg1 didRemoveSource:(id)arg2 ;
-(void)setAddedBlock:(id)arg1 ;
-(void)setCountsBlock:(id)arg1 ;
-(void)setDescriptionBlock:(id)arg1 ;
-(void)setRemovedBlock:(id)arg1 ;
-(void)setEventsBlock:(id)arg1 ;
@end

