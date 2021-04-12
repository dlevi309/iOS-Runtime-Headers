/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)stackCountForGraphView:(id)arg1 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(HKValueRange *)fixedRange;
-(id)initWithFixedRange:(id)arg1 ;
-(void)addStackedSeries:(id)arg1 ;
-(NSMutableArray *)allStackedSeries;
-(void)setAllStackedSeries:(NSMutableArray *)arg1 ;
@end

