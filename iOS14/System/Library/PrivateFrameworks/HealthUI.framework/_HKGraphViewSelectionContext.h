/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSArray, HKGraphSeries;

@interface _HKGraphViewSelectionContext : NSObject {

	long long _selectionState;
	NSArray* _touchPoints;
	NSArray* _selectionAreaMapping;
	NSArray* _selectedRangeBoundariesXValue;
	HKGraphSeries* _closestSeriesToSelection;
	CGRect _seriesSelectionRect;

}

@property (assign,nonatomic) long long selectionState;                              //@synthesize selectionState=_selectionState - In the implementation block
@property (nonatomic,readonly) double minimumSelectionDistance; 
@property (assign,nonatomic) CGRect seriesSelectionRect;                            //@synthesize seriesSelectionRect=_seriesSelectionRect - In the implementation block
@property (nonatomic,retain) NSArray * touchPoints;                                 //@synthesize touchPoints=_touchPoints - In the implementation block
@property (nonatomic,retain) NSArray * selectionAreaMapping;                        //@synthesize selectionAreaMapping=_selectionAreaMapping - In the implementation block
@property (nonatomic,retain) NSArray * selectedRangeBoundariesXValue;               //@synthesize selectedRangeBoundariesXValue=_selectedRangeBoundariesXValue - In the implementation block
@property (nonatomic,retain) HKGraphSeries * closestSeriesToSelection;              //@synthesize closestSeriesToSelection=_closestSeriesToSelection - In the implementation block
-(void)setSelectionState:(long long)arg1 ;
-(long long)selectionState;
-(HKGraphSeries *)closestSeriesToSelection;
-(NSArray *)selectedRangeBoundariesXValue;
-(NSArray *)touchPoints;
-(CGRect)seriesSelectionRect;
-(NSArray *)selectionAreaMapping;
-(void)setSeriesSelectionRect:(CGRect)arg1 ;
-(void)setSelectionAreaMapping:(NSArray *)arg1 ;
-(void)setClosestSeriesToSelection:(HKGraphSeries *)arg1 ;
-(void)setSelectedRangeBoundariesXValue:(NSArray *)arg1 ;
-(double)minimumSelectionDistance;
-(void)setTouchPoints:(NSArray *)arg1 ;
@end

