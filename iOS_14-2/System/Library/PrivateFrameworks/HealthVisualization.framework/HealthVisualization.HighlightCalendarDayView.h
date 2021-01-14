/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
*/

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDate, NSString;

@interface HealthVisualization.HighlightCalendarDayView : UIView {

	 dayLabel;
	 todayIndicatorLayer;
	 ringsRenderer;
	 activityRingsView;

}

@property (readonly,nonatomic) NSDate * axDate; 
@property (readonly,nonatomic) long long axProbability; 
@property (readonly,nonatomic) NSString * axProjectionKind; 
@property (readonly,nonatomic) long long axCircleState; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDate *)axDate;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(long long)axProbability;
-(NSString *)axProjectionKind;
-(long long)axCircleState;
@end

