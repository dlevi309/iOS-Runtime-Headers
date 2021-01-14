/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	NSArray* _middleLocations;
	double _opacity;
	BOOL _horizontal;
	BOOL _usesRGBColors;
	BOOL _didQueryRGBColors;

}

@property (assign,nonatomic) double opacity;                          //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                         //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) NSString * flatColorName; 
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
+(id)gradientWithColors:(id)arg1 middleLocations:(id)arg2 ;
+(id)gradientWithName:(id)arg1 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(BOOL)horizontal;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)usesRGBColors;
-(CGGradientRef)CGGradient;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
-(id)initWithColors:(id)arg1 middleLocations:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)flatColorName;
@end

