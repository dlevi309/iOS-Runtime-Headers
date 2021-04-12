/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKDateGraphViewController.h>

@class WDProfile, NSArray;

@interface WDStackedSeriesExperiment : HKDateGraphViewController {

	WDProfile* _profile;
	NSArray* _series;

}

@property (nonatomic,readonly) WDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSArray * series;                   //@synthesize series=_series - In the implementation block
-(WDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(void)viewDidLoad;
-(void)setSeries:(NSArray *)arg1 ;
-(NSArray *)series;
-(long long)stackCountForGraphView:(id)arg1 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)_buildSeries;
-(id)testSeries:(long long)arg1 color:(id)arg2 hourOffset:(double)arg3 yAxis:(id)arg4 annotateLastValue:(BOOL)arg5 ;
-(void)_alignYAxes;
@end

