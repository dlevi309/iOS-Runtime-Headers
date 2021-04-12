/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UILabel *)detailLabel;
-(UISwitch *)enabledSwitch;
-(MTUIDigitalClockLabel *)timeLabel;
-(void)setNameFont:(UIFont *)arg1 ;
-(UIFont *)nameFont;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3 ;
-(void)setSwitchVisible:(BOOL)arg1 ;
-(void)_loadFontsWithTextStyles;
-(void)tearDownContentSizeChangeObserver;
-(void)setRepeatText:(NSString *)arg1 ;
-(void)setShouldAddLayoutConstraints:(BOOL)arg1 ;
-(BOOL)isSwitchVisible;
-(void)setRepeatFont:(UIFont *)arg1 ;
-(void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
-(NSString *)repeatText;
-(UIFont *)repeatFont;
-(NSDictionary *)viewsByIdentifier;
-(BOOL)shouldAddLayoutConstraints;
@end

