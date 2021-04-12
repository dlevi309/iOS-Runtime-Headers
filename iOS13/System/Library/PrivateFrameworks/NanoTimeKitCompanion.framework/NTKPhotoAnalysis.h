/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NT25 _data;
	unsigned _version;

}

@property (getter=isComplexBackground,nonatomic,readonly) BOOL complexBackground; 
@property (getter=isColoredText,nonatomic,readonly) BOOL coloredText; 
@property (nonatomic,readonly) float textHue; 
@property (nonatomic,readonly) float textSaturation; 
@property (nonatomic,readonly) float textBrightness; 
@property (nonatomic,readonly) float bgHue; 
@property (nonatomic,readonly) float bgSaturation; 
@property (nonatomic,readonly) float bgBrightness; 
@property (nonatomic,readonly) float shadowHue; 
@property (nonatomic,readonly) float shadowSaturation; 
@property (nonatomic,readonly) float shadowBrightness; 
@property (nonatomic,readonly) SCD_Struct_NT25 structure; 
@property (nonatomic,readonly) unsigned version;                                               //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)analysisWithImage:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3 ;
+(id)defaultAnalysis;
+(id)analysisWithImage:(id)arg1 alignment:(id)arg2 ;
+(id)invalidAnalysis;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(SCD_Struct_NT25)structure;
-(id)initFromDictionary:(id)arg1 ;
-(id)encodeAsDictionary;
-(BOOL)isComplexBackground;
-(BOOL)isColoredText;
-(float)textHue;
-(float)textSaturation;
-(float)textBrightness;
-(float)bgHue;
-(float)bgSaturation;
-(float)bgBrightness;
-(float)shadowHue;
-(float)shadowSaturation;
-(float)shadowBrightness;
-(id)initWithStructure:(SCD_Struct_NT25)arg1 ;
@end

