/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)selectionState;
-(void)setSelectionState:(long long)arg1 ;
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

