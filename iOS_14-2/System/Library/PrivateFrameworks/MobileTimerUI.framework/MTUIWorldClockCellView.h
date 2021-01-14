/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(BOOL)arg4 hoursOnly:(BOOL)arg5 ;
-(void)updateTime;
-(double)updateInterval;
-(double)coarseUpdateInterval;
-(void)setTimeZone:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MTUIWorldClockCellViewDelegate>)delegate;
-(void)start;
-(long long)runMode;
-(BOOL)started;
-(void)localeChange:(id)arg1 ;
-(void)stop;
-(void)_configureFonts;
-(void)setDelegate:(id<MTUIWorldClockCellViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldStackViews;
-(UILabel *)combinedLabel;
-(void)significantTimeChange:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateLabelAdjustFontSize;
-(void)setShouldStackViews:(BOOL)arg1 ;
-(void)updateTimeContinuously:(long long)arg1 ;
-(UILabel *)nameLabel;
-(void)handleTextSizeChange:(id)arg1 ;
-(MTUIDigitalClockLabel *)digitalClock;
@end

