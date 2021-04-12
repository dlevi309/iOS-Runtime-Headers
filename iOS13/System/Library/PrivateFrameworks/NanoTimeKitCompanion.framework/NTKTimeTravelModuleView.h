/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModuleView.h>

@protocol NTKTimeTravelModuleViewTapClient;
@class UIView, UILabel, NSDate, NSDateComponentsFormatter, NSCalendar, CALayer;

@interface NTKTimeTravelModuleView : NTKModuleView {

	UIView* _backgroundView;
	UILabel* _timeScrubDifferenceLabel;
	UILabel* _timeScrubNowLabel;
	NSDate* _date;
	NSDateComponentsFormatter* _offsetDateFormatter;
	BOOL _is24HourMode;
	BOOL _shouldUseNowText;
	NSCalendar* _cal;
	CALayer* _borderLayer;
	double _nowLabelCenterY;
	id<NTKTimeTravelModuleViewTapClient> _tapDelegate;

}

@property (assign,nonatomic,__weak) id<NTKTimeTravelModuleViewTapClient> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
+(double)cornerRadius;
+(id)timeTravelColor;
+(double)_actualCornerRadiusForDevice:(id)arg1 ;
+(double)_defaultHeightForDevice:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)prepareToAppear;
-(void)_layoutContentView;
-(id<NTKTimeTravelModuleViewTapClient>)tapDelegate;
-(void)setTapDelegate:(id<NTKTimeTravelModuleViewTapClient>)arg1 ;
-(void)scrubToDate:(id)arg1 ;
-(void)_setupBorder;
-(id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2 ;
-(id)initWithMaximumWidth:(double)arg1 ;
@end

