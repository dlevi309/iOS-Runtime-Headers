/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSString;

@interface SFSSVoiceAsset : NSObject {

	NSString* _assetPath;
	NSString* _name;
	NSString* _language;
	long long _gender;
	long long _footprint;
	long long _type;
	long long _contentVersion;

}

@property (nonatomic,copy) NSString * assetPath;                      //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long gender;                      //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;                   //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long contentVersion;              //@synthesize contentVersion=_contentVersion - In the implementation block
+(id)generateVoiceAssetFromVoiceKeyString:(id)arg1 ;
-(NSString *)name;
-(id)key;
-(long long)type;
-(long long)contentVersion;
-(NSString *)assetPath;
-(long long)gender;
-(void)setAssetPath:(NSString *)arg1 ;
-(long long)footprint;
-(NSString *)language;
-(id)init:(id)arg1 gender:(long long)arg2 name:(id)arg3 type:(long long)arg4 footprint:(long long)arg5 contentVersion:(long long)arg6 ;
@end

