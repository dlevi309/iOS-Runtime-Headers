/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView, NSTimer, NSDate;

@interface CAMElapsedTimeView : UIView {

	long long _layoutStyle;
	long long _backgroundStyle;
	NSString* _contentSizeCategory;
	UILabel* __timeLabel;
	UIImageView* __backgroundView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                                         //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundView;                                //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                                       //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                                          //@synthesize _startTime=__startTime - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,getter=isShowingBackground,nonatomic) BOOL showingBackground; 
@property (assign,nonatomic) long long backgroundStyle;                                      //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                   //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
-(UILabel *)_timeLabel;
-(void)_setStartTime:(id)arg1 ;
-(NSDate *)_startTime;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)layoutStyle;
-(UIImageView *)_backgroundView;
-(void)startTimer;
-(void)resetTimer;
-(void)endTimer;
-(void)setShowingBackground:(BOOL)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(void)_updateForTimer:(id)arg1 ;
-(NSString *)contentSizeCategory;
-(BOOL)isShowingBackground;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateBackgroundViewAnimated:(BOOL)arg1 ;
-(void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)setShowingBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSTimer *)_updateTimer;
-(id)initWithBadgeAppearance;
-(void)_updateFont;
-(void)dealloc;
@end

