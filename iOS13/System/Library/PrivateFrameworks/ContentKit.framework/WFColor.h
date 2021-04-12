/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSColor, WFGradient, NSString;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _platformColor;
	CGColorRef _CGColor;
	NSColor* _NSColor;

}

@property (nonatomic,readonly) WFGradient * paletteGradient; 
@property (nonatomic,readonly) unsigned RGBAValue; 
@property (nonatomic,readonly) NSString * hexValue; 
@property (nonatomic,readonly) CGColorRef CGColor;                        //@synthesize CGColor=_CGColor - In the implementation block
@property (nonatomic,readonly) UIColor * platformColor; 
@property (nonatomic,readonly) UIColor * UIColor; 
@property (nonatomic,readonly) NSColor * NSColor;                         //@synthesize NSColor=_NSColor - In the implementation block
+(id)colorWithRGBAValue:(unsigned)arg1 ;
+(id)workflowGradientPalette;
+(id)workflowPalette;
+(id)workflowPaletteNames;
+(id)colorWithPaletteColor:(unsigned long long)arg1 ;
+(id)colorWithP3RGBAValue:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)whiteColor;
+(id)clearColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)hexValue;
-(unsigned)RGBAValue;
-(WFGradient *)paletteGradient;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(UIColor *)UIColor;
-(UIColor *)platformColor;
-(id)initWithPlatformColor:(id)arg1 ;
-(NSColor *)NSColor;
@end

