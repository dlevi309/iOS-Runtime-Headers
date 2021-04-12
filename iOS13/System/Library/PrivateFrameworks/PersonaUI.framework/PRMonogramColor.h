/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/


@class NSString, UIColor, NSBundle;

@interface PRMonogramColor : NSObject {

	NSString* _colorName;
	UIColor* _color;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	UIColor* _selectedActiveColor;
	UIColor* _selectedInactiveColor;
	UIColor* _selectedActiveTextColor;
	NSBundle* _bundle;

}

@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                   //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                     //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedActiveColor;                  //@synthesize selectedActiveColor=_selectedActiveColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedInactiveColor;                //@synthesize selectedInactiveColor=_selectedInactiveColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedActiveTextColor;              //@synthesize selectedActiveTextColor=_selectedActiveTextColor - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * colorName;                         //@synthesize colorName=_colorName - In the implementation block
+(id)gradientStartColor:(id)arg1 ;
+(id)availableColors;
+(id)defaultGradientStartColor;
+(id)defaultGradientEndColor;
+(id)defaultSelectedActiveColor;
+(id)defaultSelectedInactiveColor;
+(id)defaultSelectedActiveTextColor;
+(id)gradientStartName:(id)arg1 ;
+(id)gradientEndName:(id)arg1 ;
+(id)generateMonogramGradientColorsByNameDictionary;
+(id)monogramGradientColorNamed:(id)arg1 ;
+(id)defaultBundle;
+(id)colorWithName:(id)arg1 inBundle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSBundle *)bundle;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)colorName;
-(id)initWithColorName:(id)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientEndColor;
-(void)setColorName:(NSString *)arg1 ;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)selectedActiveColor;
-(UIColor *)selectedInactiveColor;
-(UIColor *)selectedActiveTextColor;
-(id)initWithColorName:(id)arg1 inBundle:(id)arg2 ;
-(void)setSelectedActiveColor:(UIColor *)arg1 ;
-(void)setSelectedInactiveColor:(UIColor *)arg1 ;
-(void)setSelectedActiveTextColor:(UIColor *)arg1 ;
@end

