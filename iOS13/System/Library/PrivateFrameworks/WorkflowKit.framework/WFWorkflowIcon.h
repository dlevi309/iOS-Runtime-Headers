/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned short)defaultGlyphCharacter;
+(long long)randomBackgroundColor;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFColor *)backgroundColor;
-(long long)backgroundColorValue;
-(id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
-(unsigned short)glyphCharacter;
-(NSData *)customImageData;
@end

