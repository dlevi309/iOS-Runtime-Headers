/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSArray, NSString;

@interface IKColor : NSObject <NSCopying> {

	UIColor* _color;
	NSArray* _gradientColors;
	long long _colorType;
	long long _gradientType;
	long long _gradientDirectionType;
	NSString* _colorMapKey;
	NSArray* _gradientPoints;

}

@property (nonatomic,copy) NSString * colorMapKey;                         //@synthesize colorMapKey=_colorMapKey - In the implementation block
@property (nonatomic,retain) UIColor * color;                              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorType;                          //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gradientPoints;              //@synthesize gradientPoints=_gradientPoints - In the implementation block
@property (nonatomic,copy) NSArray * gradientColors;                       //@synthesize gradientColors=_gradientColors - In the implementation block
@property (assign,nonatomic) long long gradientDirectionType;              //@synthesize gradientDirectionType=_gradientDirectionType - In the implementation block
@property (assign,nonatomic) long long gradientType;                       //@synthesize gradientType=_gradientType - In the implementation block
+(id)colorMap;
+(void)registerColorNameMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(long long)gradientType;
-(void)setGradientType:(long long)arg1 ;
-(long long)colorType;
-(void)setColorType:(long long)arg1 ;
-(void)setGradientDirectionType:(long long)arg1 ;
-(void)setGradientColors:(id)arg1 andPoints:(id)arg2 ;
-(id)initWithColorMapKey:(id)arg1 ;
-(NSString *)colorMapKey;
-(long long)gradientDirectionType;
-(void)setColorMapKey:(NSString *)arg1 ;
-(NSArray *)gradientPoints;
@end

