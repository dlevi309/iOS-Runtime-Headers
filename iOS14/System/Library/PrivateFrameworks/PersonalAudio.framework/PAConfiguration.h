/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/

#import <PersonalAudio/PersonalAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PAConfiguration : NSObject <NSSecureCoding> {

	unsigned long long _level;
	unsigned long long _shape;
	NSDictionary* _preset;
	NSDictionary* _presetAdjustments;
	NSDictionary* _audiogramSettings;

}

@property (nonatomic,retain) NSDictionary * preset;                         //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) NSDictionary * presetAdjustments;              //@synthesize presetAdjustments=_presetAdjustments - In the implementation block
@property (nonatomic,retain) NSDictionary * audiogramSettings;              //@synthesize audiogramSettings=_audiogramSettings - In the implementation block
@property (assign,nonatomic) unsigned long long level;                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                      //@synthesize shape=_shape - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationFromType:(unsigned long long)arg1 ;
+(id)configurationWithRawAdjustment:(unsigned long long)arg1 ;
+(id)configurationWithLevel:(unsigned long long)arg1 andShape:(unsigned long long)arg2 ;
+(id)configurationWithPreset:(id)arg1 andAdjustments:(id)arg2 ;
+(id)dataFromPreset:(SCD_Struct_PA1*)arg1 ;
+(id)paramDataWithValue:(float)arg1 andOffset:(int)arg2 ;
+(id)configurationWithAudiogram:(id)arg1 ;
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)level;
-(void)setPreset:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)preset;
-(void)setLevel:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)presetAdjustments;
-(SCD_Struct_PA3*)transparencySettingsForAddress:(id)arg1 ;
-(void)setPresetAdjustments:(NSDictionary *)arg1 ;
-(SCD_Struct_PA1*)settingsFromConfiguration:(BOOL)arg1 ;
-(void)setAudiogramSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)audiogramSettings;
-(SCD_Struct_PA1*)readSettingsFromPreset:(id)arg1 ;
@end

