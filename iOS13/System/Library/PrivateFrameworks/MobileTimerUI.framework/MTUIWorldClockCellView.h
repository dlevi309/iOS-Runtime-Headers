/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTClock.h>

@protocol MTUIWorldClockCellViewDelegate;
@class NSTimeZone, MTUIDigitalClockLabel, UILabel;

@interface MTUIWorldClockCellView : UIView <MTClock> {

	NSTimeZone* _timeZone;
	long long _nowInMinutes;
	BOOL _editing;
	BOOL _started;
	BOOL _shouldStackViews;
	id<MTUIWorldClockCellViewDelegate> _delegate;
	MTUIDigitalClockLabel* _digitalClock;
	UILabel* _nameLabel;
	UILabel* _combinedLabel;

}

@property (assign,nonatomic,__weak) id<MTUIWorldClockCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) MTUIDigitalClockLabel * digitalClock;                          //@synthesize digitalClock=_digitalClock - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * combinedLabel;                                       //@synthesize combinedLabel=_combinedLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldStackViews;                                           //@synthesize shouldStackViews=_shouldStackViews - In the implementation block
@property (nonatomic,readonly) long long runMode; 
+(double)defaultHeight;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(BOOL)arg4 ;
-(id<MTUIWorldClockCellViewDelegate>)delegate;
-(void)setDelegate:(id<MTUIWorldClockCellViewDelegate>)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)started;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)updateInterval;
-(UILabel *)nameLabel;
-(void)updateTime;
-(long long)runMode;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChange:(id)arg1 ;
-(void)_configureFonts;
-(void)handleTextSizeChange:(id)arg1 ;
-(void)updateLabelAdjustFontSize;
-(void)updateTimeContinuously:(long long)arg1 ;
-(double)coarseUpdateInterval;
-(MTUIDigitalClockLabel *)digitalClock;
-(UILabel *)combinedLabel;
-(BOOL)shouldStackViews;
-(void)setShouldStackViews:(BOOL)arg1 ;
@end

