/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKCircularAnalogDialColorPalette.h>

@class CLKDevice, UIColor, NSString;

@interface NTKOlympusColorPalette : NSObject <NTKCircularAnalogDialColorPalette> {

	unsigned long long _color;
	unsigned long long _style;
	unsigned long long _dial;
	CLKDevice* _device;
	UIColor* _mainColor;
	UIColor* _darkMainColor;
	UIColor* _accentColor;
	UIColor* _blackColor;
	UIColor* _softWhiteColor;
	UIColor* _softBlackColor;
	UIColor* _lightMainColor;
	UIColor* _primaryBackgroundColor;
	UIColor* _primaryTextColor;
	UIColor* _primaryLogoColor;
	UIColor* _secondaryBackgroundColor;
	UIColor* _secondaryTextColor;
	UIColor* _secondaryLogoColor;
	UIColor* _largeHandsColor;
	UIColor* _secondHandColor;
	UIColor* _cornerComplicationsAccentColor;
	UIColor* _circularDialSubtickColor;

}

@property (assign,nonatomic) unsigned long long color;                              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long dial;                               //@synthesize dial=_dial - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIColor * mainColor;                                   //@synthesize mainColor=_mainColor - In the implementation block
@property (nonatomic,retain) UIColor * darkMainColor;                               //@synthesize darkMainColor=_darkMainColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                 //@synthesize accentColor=_accentColor - In the implementation block
@property (nonatomic,retain) UIColor * blackColor;                                  //@synthesize blackColor=_blackColor - In the implementation block
@property (nonatomic,retain) UIColor * softWhiteColor;                              //@synthesize softWhiteColor=_softWhiteColor - In the implementation block
@property (nonatomic,retain) UIColor * softBlackColor;                              //@synthesize softBlackColor=_softBlackColor - In the implementation block
@property (nonatomic,retain) UIColor * lightMainColor;                              //@synthesize lightMainColor=_lightMainColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryBackgroundColor;                      //@synthesize primaryBackgroundColor=_primaryBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor;                            //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryLogoColor;                            //@synthesize primaryLogoColor=_primaryLogoColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryBackgroundColor;                    //@synthesize secondaryBackgroundColor=_secondaryBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                          //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryLogoColor;                          //@synthesize secondaryLogoColor=_secondaryLogoColor - In the implementation block
@property (nonatomic,retain) UIColor * largeHandsColor;                             //@synthesize largeHandsColor=_largeHandsColor - In the implementation block
@property (nonatomic,retain) UIColor * secondHandColor;                             //@synthesize secondHandColor=_secondHandColor - In the implementation block
@property (nonatomic,retain) UIColor * cornerComplicationsAccentColor;              //@synthesize cornerComplicationsAccentColor=_cornerComplicationsAccentColor - In the implementation block
@property (nonatomic,retain) UIColor * circularDialSubtickColor;                    //@synthesize circularDialSubtickColor=_circularDialSubtickColor - In the implementation block
@property (nonatomic,readonly) UIColor * primaryOutlineTextColor; 
@property (nonatomic,readonly) BOOL isBlackBackground; 
@property (nonatomic,readonly) UIColor * secondaryOutlineTextColor; 
@property (nonatomic,readonly) UIColor * bezelComplicationColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForDevice:(id)arg1 color:(unsigned long long)arg2 dial:(unsigned long long)arg3 style:(unsigned long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CLKDevice *)device;
-(unsigned long long)color;
-(UIColor *)blackColor;
-(void)setColor:(unsigned long long)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)secondaryBackgroundColor;
-(UIColor *)accentColor;
-(void)setDial:(unsigned long long)arg1 ;
-(UIColor *)secondHandColor;
-(void)setAccentColor:(UIColor *)arg1 ;
-(UIColor *)cornerComplicationsAccentColor;
-(UIColor *)primaryBackgroundColor;
-(UIColor *)primaryLogoColor;
-(UIColor *)secondaryLogoColor;
-(unsigned long long)dial;
-(BOOL)isBlackBackground;
-(UIColor *)bezelComplicationColor;
-(id)circularDialFillColor;
-(UIColor *)circularDialSubtickColor;
-(id)circularDialTickColor;
-(UIColor *)largeHandsColor;
-(id)initWithDevice:(id)arg1 color:(unsigned long long)arg2 dial:(unsigned long long)arg3 style:(unsigned long long)arg4 ;
-(UIColor *)mainColor;
-(UIColor *)softBlackColor;
-(UIColor *)darkMainColor;
-(UIColor *)lightMainColor;
-(UIColor *)softWhiteColor;
-(UIColor *)primaryOutlineTextColor;
-(UIColor *)secondaryOutlineTextColor;
-(void)setMainColor:(UIColor *)arg1 ;
-(void)setDarkMainColor:(UIColor *)arg1 ;
-(void)setBlackColor:(UIColor *)arg1 ;
-(void)setSoftWhiteColor:(UIColor *)arg1 ;
-(void)setSoftBlackColor:(UIColor *)arg1 ;
-(void)setLightMainColor:(UIColor *)arg1 ;
-(void)setPrimaryBackgroundColor:(UIColor *)arg1 ;
-(void)setPrimaryLogoColor:(UIColor *)arg1 ;
-(void)setSecondaryLogoColor:(UIColor *)arg1 ;
-(void)setLargeHandsColor:(UIColor *)arg1 ;
-(void)setSecondHandColor:(UIColor *)arg1 ;
-(void)setCornerComplicationsAccentColor:(UIColor *)arg1 ;
-(void)setCircularDialSubtickColor:(UIColor *)arg1 ;
@end

