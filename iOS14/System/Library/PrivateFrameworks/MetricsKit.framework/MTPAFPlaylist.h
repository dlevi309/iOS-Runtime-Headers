/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject {

	NSArray* _metricsData;
	NSMutableArray* _items;

}

@property (copy) NSArray * metricsData;                           //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)items;
-(id)currentItems;
-(void)updateEventData:(id)arg1 ;
-(NSArray *)metricsData;
-(void)setMetricsData:(NSArray *)arg1 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(id)initWithSharedMetricsData:(id)arg1 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3 ;
@end

