/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHLegibility.h>

@protocol SBFDateProviding;
@class _UILegibilitySettings, SBUILegibilityLabel, UIView, NSLayoutConstraint;

@interface SBHDateHeaderViewController : UIViewController <SBHLegibility> {

	id _timerToken;
	unsigned long long _updateDisabledCount;
	_UILegibilitySettings* _legibilitySettings;
	id<SBFDateProviding> _dateProvider;
	SBUILegibilityLabel* _timeLabel;
	UIView* _timeContainer;
	SBUILegibilityLabel* _dateLabel;
	NSLayoutConstraint* _timeLeadingConstraint;

}

@property (nonatomic,readonly) SBUILegibilityLabel * timeLabel;                         //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) UIView * timeContainer;                                  //@synthesize timeContainer=_timeContainer - In the implementation block
@property (nonatomic,readonly) SBUILegibilityLabel * dateLabel;                         //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * timeLeadingConstraint;              //@synthesize timeLeadingConstraint=_timeLeadingConstraint - In the implementation block
@property (nonatomic,retain) id<SBFDateProviding> dateProvider;                         //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(id)timeFont;
+(UIEdgeInsets)timeFontMetrics;
+(id)dateFont;
+(double)_topMarginFromTimeFont;
+(UIEdgeInsets)dateFontMetrics;
-(void)dealloc;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBUILegibilityLabel *)dateLabel;
-(SBUILegibilityLabel *)timeLabel;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(id<SBFDateProviding>)dateProvider;
-(void)_updateLabels;
-(UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1 ;
-(UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1 ;
-(void)setDateProvider:(id<SBFDateProviding>)arg1 ;
-(void)_updateFormat;
-(void)_handleTimeZoneChange;
-(void)_updateTimeLeadingConstraint;
-(UIView *)timeContainer;
-(NSLayoutConstraint *)timeLeadingConstraint;
@end

