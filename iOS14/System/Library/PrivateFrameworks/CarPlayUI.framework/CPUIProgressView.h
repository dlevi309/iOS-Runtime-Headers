/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CPUIProgressBarView, CADisplayLink, NSArray;

@interface CPUIProgressView : UIView {

	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _liveLabel;
	CPUIProgressBarView* _progressBarView;
	CADisplayLink* _displayLink;
	double _lastTargetTimestamp;
	NSArray* _constraints;
	BOOL _showsProgressLabels;
	SCD_Struct_CP1 _durationSnapshot;

}

@property (assign,nonatomic) SCD_Struct_CP1 durationSnapshot;              //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (assign,nonatomic) BOOL showsProgressLabels;                     //@synthesize showsProgressLabels=_showsProgressLabels - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDurationSnapshot:(SCD_Struct_CP1)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_displayLinkTick:(id)arg1 ;
-(SCD_Struct_CP1)durationSnapshot;
-(void)setupConstraints;
-(void)setShowsProgressLabels:(BOOL)arg1 ;
-(BOOL)showsProgressLabels;
-(void)_updateLabelsForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)_updateProgressForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)runUntilNextDisplayLinkEvent;
-(void)pauseDisplayLinkIfNeeded;
@end

