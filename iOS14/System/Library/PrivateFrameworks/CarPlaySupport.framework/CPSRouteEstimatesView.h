/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class CPSLabeledValueView, CPSTravelEstimatesStringFormatter, NSTimeZone;

@interface CPSRouteEstimatesView : UIView {

	CPSLabeledValueView* _timeRemainingView;
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
-(NSTimeZone *)arrivalTimeZone;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_updateTextColors;
-(unsigned long long)timeRemainingColor;
-(void)setTimeRemainingColor:(unsigned long long)arg1 ;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(void)setCurrentTravelEstimates:(id)arg1 ;
-(CPSLabeledValueView *)timeRemainingView;
-(CPSLabeledValueView *)distanceRemainingView;
-(CPSLabeledValueView *)arrivalTimeView;
-(CPSTravelEstimatesStringFormatter *)travelEstimatesStringFormatter;
-(void)setArrivalTimeZone:(NSTimeZone *)arg1 ;
@end

