/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)key;
-(unsigned long long)size;
-(BOOL)isInstalled;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(BOOL)isDownloading;
-(VSVoiceAsset *)voiceData;
-(id)descriptiveKey;
-(NSString *)voicePath;
-(double)preferenceScore;
-(void)setVoiceData:(VSVoiceAsset *)arg1 ;
-(NSString *)builtInVoicePath;
-(void)setBuiltInVoicePath:(NSString *)arg1 ;
-(void)setVoicePath:(NSString *)arg1 ;
@end

