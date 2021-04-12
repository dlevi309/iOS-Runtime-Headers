/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)statisticsManager:(id)arg1 didRemoveSource:(id)arg2 ;
-(void)setEventsBlock:(id)arg1 ;
-(void)setAddedBlock:(id)arg1 ;
-(void)setDescriptionBlock:(id)arg1 ;
-(id)eventsBlock;
-(id)descriptionBlock;
-(void)statisticsManager:(id)arg1 didAddSource:(id)arg2 ;
-(void)sourceDidReceiveCounts:(id)arg1 ;
-(void)setCountsBlock:(id)arg1 ;
-(void)setRemovedBlock:(id)arg1 ;
-(id)removedBlock;
-(void)sourceDidReceiveDescription:(id)arg1 ;
-(id)addedBlock;
-(id)countsBlock;
@end

