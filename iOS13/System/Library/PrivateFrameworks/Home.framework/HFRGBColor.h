/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFColorPrimitive.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface HFRGBColor : NSObject <HFColorPrimitive, NSCopying> {

	float _red;
	float _green;
	float _blue;

}

@property (nonatomic,readonly) float red;                           //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) float green;                         //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) float blue;                          //@synthesize blue=_blue - In the implementation block
@property (nonatomic,copy,readonly) UIColor * UIColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithUIColor:(id)arg1 ;
-(UIColor *)UIColor;
-(id)hf_RGBColorRepresentation;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 ;
-(void)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 ;
@end

