/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <AppSupportUI/NUIContainerGridView.h>

@class MTUIDigitalClockLabel, NSString, UILabel, UIFont, UISwitch, NSDictionary, NSArray;

@interface MTUIAlarmView : NUIContainerGridView {

	id _contentSizeFontAdjustObserver;
	BOOL _shouldAddLayoutConstraints;
	long long _style;
	MTUIDigitalClockLabel* _timeLabel;
	NSString* _name;
	NSString* _repeatText;
	UILabel* _detailLabel;
	UIFont* _nameFont;
	UIFont* _repeatFont;
	UISwitch* _enabledSwitch;
	NSDictionary* _viewsByIdentifier;
	NSArray* _currentConstraints;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * repeatText;                                    //@synthesize repeatText=_repeatText - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                           //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (assign,nonatomic) long long style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) MTUIDigitalClockLabel * timeLabel;                    //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                                      //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,retain) UIFont * repeatFont;                                    //@synthesize repeatFont=_repeatFont - In the implementation block
@property (nonatomic,readonly) UISwitch * enabledSwitch;                             //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,readonly) NSDictionary * viewsByIdentifier;                     //@synthesize viewsByIdentifier=_viewsByIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldAddLayoutConstraints;                        //@synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints - In the implementation block
@property (assign,getter=isSwitchVisible,nonatomic) BOOL switchVisible; 
-(MTUIDigitalClockLabel *)timeLabel;
-(void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIFont *)repeatFont;
-(void)tearDownContentSizeChangeObserver;
-(void)setShouldAddLayoutConstraints:(BOOL)arg1 ;
-(UISwitch *)enabledSwitch;
-(NSString *)repeatText;
-(void)setRepeatFont:(UIFont *)arg1 ;
-(NSArray *)currentConstraints;
-(NSString *)name;
-(void)_loadFontsWithTextStyles;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(BOOL)shouldAddLayoutConstraints;
-(void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3 ;
-(NSDictionary *)viewsByIdentifier;
-(void)setName:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setRepeatText:(NSString *)arg1 ;
-(void)setSwitchVisible:(BOOL)arg1 ;
-(void)setNameFont:(UIFont *)arg1 ;
-(BOOL)isSwitchVisible;
-(UILabel *)detailLabel;
-(long long)style;
-(UIFont *)nameFont;
@end

