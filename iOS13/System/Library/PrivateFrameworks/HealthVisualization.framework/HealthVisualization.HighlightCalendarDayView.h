/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
*/

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDate, NSString;

@interface HealthVisualization.HighlightCalendarDayView : UIView {

	??? model;
	 dayLabel;
	 todayIndicatorLayer;
	 ringsRenderer;
	 activityRingsView;

}

@property (readonly,nonatomic) NSDate * axDate; 
@property (readonly,nonatomic) long long axProbability; 
@property (readonly,nonatomic) NSString * axProjectionKind; 
@property (readonly,nonatomic) long long axCircleState; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(NSDate *)axDate;
-(long long)axProbability;
-(NSString *)axProjectionKind;
-(long long)axCircleState;
@end

