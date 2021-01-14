/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _glyphCharacter;
	long long _backgroundColorValue;
	NSData* _customImageData;

}

@property (nonatomic,readonly) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;               //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSData * customImageData;               //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,readonly) WFColor * backgroundColor; 
+(BOOL)supportsSecureCoding;
+(long long)randomBackgroundColor;
+(unsigned short)defaultGlyphCharacter;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(WFColor *)backgroundColor;
-(unsigned long long)hash;
-(long long)backgroundColorValue;
-(unsigned short)glyphCharacter;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
-(NSData *)customImageData;
-(id)initWithPaletteColor:(unsigned long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
@end

