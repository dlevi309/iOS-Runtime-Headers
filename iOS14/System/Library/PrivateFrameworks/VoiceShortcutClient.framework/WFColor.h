/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSColor, NSString, WFGradient;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _platformColor;
	CGColorRef _CGColor;
	NSColor* _NSColor;

}

@property (nonatomic,readonly) unsigned RGBAValue; 
@property (nonatomic,readonly) NSString * hexValue; 
@property (nonatomic,readonly) WFGradient * paletteGradient; 
@property (nonatomic,readonly) CGColorRef CGColor;                        //@synthesize CGColor=_CGColor - In the implementation block
@property (nonatomic,readonly) UIColor * platformColor; 
@property (nonatomic,readonly) UIColor * UIColor; 
@property (nonatomic,readonly) NSColor * NSColor;                         //@synthesize NSColor=_NSColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)clearColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithRGBAValue:(unsigned)arg1 ;
+(id)colorWithP3RGBAValue:(unsigned)arg1 ;
+(id)whiteColor;
+(id)workflowGradientPalette;
+(id)workflowPalette;
+(id)workflowPaletteNames;
+(id)colorWithPaletteColor:(unsigned long long)arg1 ;
-(CGColorRef)CGColor;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)UIColor;
-(NSColor *)NSColor;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)hexValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(WFGradient *)paletteGradient;
-(id)initWithPlatformColor:(id)arg1 ;
-(UIColor *)platformColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)RGBAValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

