/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDateGraphViewController.h>

@class NSMutableArray, HKValueRange;

@interface _HKStaticDateGraphViewController : HKDateGraphViewController {

	NSMutableArray* _allStackedSeries;
	HKValueRange* _fixedRange;

}

@property (nonatomic,retain) NSMutableArray * allStackedSeries;              //@synthesize allStackedSeries=_allStackedSeries - In the implementation block
@property (nonatomic,readonly) HKValueRange * fixedRange;                    //@synthesize fixedRange=_fixedRange - In the implementation block
-(void)viewDidLoad;
-(id)initWithFixedRange:(id)arg1 ;
-(void)addStackedSeries:(id)arg1 ;
-(HKValueRange *)fixedRange;
-(NSMutableArray *)allStackedSeries;
-(long long)stackCountForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)setAllStackedSeries:(NSMutableArray *)arg1 ;
@end

