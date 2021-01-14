/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)monogramGradientColorNamed:(id)arg1 ;
+(id)gradientStartName:(id)arg1 ;
+(id)defaultSelectedActiveTextColor;
+(id)availableColors;
+(id)defaultSelectedInactiveColor;
+(id)generateMonogramGradientColorsByNameDictionary;
+(id)defaultSelectedActiveColor;
+(id)gradientEndName:(id)arg1 ;
+(id)defaultGradientStartColor;
+(id)colorWithName:(id)arg1 inBundle:(id)arg2 ;
+(id)availableColorNames;
+(id)gradientStartColor:(id)arg1 ;
+(id)defaultBundle;
+(id)defaultGradientEndColor;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(UIColor *)color;
-(id)initWithRandomColor;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)colorName;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(unsigned long long)hash;
-(id)initWithColorName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setColorName:(NSString *)arg1 ;
-(UIColor *)selectedActiveColor;
-(UIColor *)selectedInactiveColor;
-(UIColor *)selectedActiveTextColor;
-(id)initWithColorName:(id)arg1 inBundle:(id)arg2 ;
-(void)setSelectedActiveColor:(UIColor *)arg1 ;
-(void)setSelectedInactiveColor:(UIColor *)arg1 ;
-(void)setSelectedActiveTextColor:(UIColor *)arg1 ;
@end

