/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NT28 _data;
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
@property (nonatomic,readonly) SCD_Struct_NT28 structure; 
@property (nonatomic,readonly) unsigned version;                                               //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultAnalysis;
+(id)invalidAnalysis;
+(id)analysisWithImage:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3 ;
+(BOOL)isValidDictionary:(id)arg1 ;
+(BOOL)_dictionaryPassesBasicCheck:(id)arg1 ;
+(BOOL)_dictionaryHasValidValues:(id)arg1 ;
+(id)analysisWithImage:(id)arg1 alignment:(id)arg2 ;
-(id)initFromDictionary:(id)arg1 ;
-(float)bgHue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)textHue;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NT28)structure;
-(id)encodeAsDictionary;
-(BOOL)isComplexBackground;
-(BOOL)isColoredText;
-(float)textSaturation;
-(float)textBrightness;
-(float)bgSaturation;
-(float)bgBrightness;
-(float)shadowHue;
-(float)shadowSaturation;
-(float)shadowBrightness;
-(id)initWithStructure:(SCD_Struct_NT28)arg1 ;
@end

