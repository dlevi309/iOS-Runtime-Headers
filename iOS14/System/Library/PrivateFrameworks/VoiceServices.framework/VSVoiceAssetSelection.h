/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class VSVoiceAsset, MAAsset, NSString;

@interface VSVoiceAssetSelection : NSObject {

	VSVoiceAsset* _voiceData;
	MAAsset* _asset;
	NSString* _builtInVoicePath;
	NSString* _voicePath;

}

@property (retain) VSVoiceAsset * voiceData;                    //@synthesize voiceData=_voiceData - In the implementation block
@property (retain) MAAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (retain) NSString * builtInVoicePath;                 //@synthesize builtInVoicePath=_builtInVoicePath - In the implementation block
@property (nonatomic,retain) NSString * voicePath;              //@synthesize voicePath=_voicePath - In the implementation block
-(void)setAsset:(MAAsset *)arg1 ;
-(MAAsset *)asset;
-(unsigned long long)size;
-(BOOL)isInstalled;
-(VSVoiceAsset *)voiceData;
-(NSString *)voicePath;
-(id)descriptiveKey;
-(double)preferenceScore;
-(void)setVoiceData:(VSVoiceAsset *)arg1 ;
-(NSString *)builtInVoicePath;
-(void)setBuiltInVoicePath:(NSString *)arg1 ;
-(void)setVoicePath:(NSString *)arg1 ;
-(id)key;
-(BOOL)isDownloading;
@end

