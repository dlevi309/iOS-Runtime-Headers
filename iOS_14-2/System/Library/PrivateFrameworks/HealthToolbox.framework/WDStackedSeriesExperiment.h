/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProfile:(id)arg1 ;
-(NSArray *)series;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(long long)stackCountForGraphView:(id)arg1 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)setSeries:(NSArray *)arg1 ;
-(void)_buildSeries;
-(id)testSeries:(long long)arg1 color:(id)arg2 hourOffset:(double)arg3 yAxis:(id)arg4 annotateLastValue:(BOOL)arg5 ;
-(void)_alignYAxes;
@end

