/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class CPSLabeledValueView, CPSTravelEstimatesStringFormatter, NSTimeZone;

@interface CPSRouteEstimatesView : UIView {

	CPSLabeledValueView* _timeRemainingView;
	unsigned long long _tripEstimateStyle;
	CPSLabeledValueView* _arrivalTimeView;
	CPSLabeledValueView* _distanceRemainingView;
	CPSTravelEstimatesStringFormatter* _travelEstimatesStringFormatter;
	unsigned long long _timeRemainingColor;

}

@property (nonatomic,readonly) CPSLabeledValueView * arrivalTimeView;                                           //@synthesize arrivalTimeView=_arrivalTimeView - In the implementation block
@property (nonatomic,readonly) CPSLabeledValueView * distanceRemainingView;                                     //@synthesize distanceRemainingView=_distanceRemainingView - In the implementation block
@property (nonatomic,readonly) CPSTravelEstimatesStringFormatter * travelEstimatesStringFormatter;              //@synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long timeRemainingColor;                                             //@synthesize timeRemainingColor=_timeRemainingColor - In the implementation block
@property (nonatomic,copy) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) CPSLabeledValueView * timeRemainingView;                                         //@synthesize timeRemainingView=_timeRemainingView - In the implementation block
@property (assign,nonatomic) unsigned long long tripEstimateStyle;                                              //@synthesize tripEstimateStyle=_tripEstimateStyle - In the implementation block
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_updateTextColors;
-(id)_defaultColorForStyle:(unsigned long long)arg1 ;
-(NSTimeZone *)arrivalTimeZone;
-(unsigned long long)timeRemainingColor;
-(void)setTimeRemainingColor:(unsigned long long)arg1 ;
-(unsigned long long)tripEstimateStyle;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(void)setCurrentTravelEstimates:(id)arg1 ;
-(id)_timeRemainingColorForColor:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(CPSLabeledValueView *)timeRemainingView;
-(CPSLabeledValueView *)distanceRemainingView;
-(CPSLabeledValueView *)arrivalTimeView;
-(CPSTravelEstimatesStringFormatter *)travelEstimatesStringFormatter;
-(id)_greenColorForStyle:(unsigned long long)arg1 ;
-(id)_orangeColorForStyle:(unsigned long long)arg1 ;
-(id)_redColorForStyle:(unsigned long long)arg1 ;
-(void)setArrivalTimeZone:(NSTimeZone *)arg1 ;
@end

