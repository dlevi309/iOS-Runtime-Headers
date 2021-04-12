/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView, NSTimer, NSDate;

@interface CAMElapsedTimeView : UIView {

	BOOL _usingBadgeAppearance;
	long long _layoutStyle;
	long long _backgroundStyle;
	NSString* _contentSizeCategory;
	UILabel* __timeLabel;
	UIImageView* __recordingImageView;
	UIImageView* __backgroundView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                                         //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _recordingImageView;                            //@synthesize _recordingImageView=__recordingImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundView;                                //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                                       //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                                          //@synthesize _startTime=__startTime - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) BOOL usingBadgeAppearance;                                    //@synthesize usingBadgeAppearance=_usingBadgeAppearance - In the implementation block
@property (assign,getter=isShowingBackground,nonatomic) BOOL showingBackground; 
@property (assign,nonatomic) long long backgroundStyle;                                      //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                   //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
-(void)dealloc;
-(NSDate *)_startTime;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(UIImageView *)_backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)_updateText;
-(long long)backgroundStyle;
-(void)startTimer;
-(void)resetTimer;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(NSTimer *)_updateTimer;
-(void)_updateFont;
-(UILabel *)_timeLabel;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_setStartTime:(id)arg1 ;
-(id)initWithBadgeAppearance;
-(id)_backgroundRedColor;
-(void)_updateBackgroundViewAnimated:(BOOL)arg1 ;
-(void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 usingBadgeAppearance:(BOOL)arg2 ;
-(BOOL)usingBadgeAppearance;
-(UIImageView *)_recordingImageView;
-(void)_updateForTimer:(id)arg1 ;
-(void)setShowingBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingBackground;
-(void)setShowingBackground:(BOOL)arg1 ;
@end

