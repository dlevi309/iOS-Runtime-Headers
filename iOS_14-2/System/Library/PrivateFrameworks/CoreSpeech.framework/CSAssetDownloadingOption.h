/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSAssetDownloadingOption : NSObject {

	BOOL _allowVoiceTriggerAssetDownloading;
	BOOL _allowEndpointAssetDownloading;
	BOOL _allowLanguageDetectorAssetDownloading;
	BOOL _allowAdBlockerAssetDownloading;
	BOOL _allowSpeakerRecognitionAssetDownloading;

}

@property (assign,nonatomic) BOOL allowVoiceTriggerAssetDownloading;                    //@synthesize allowVoiceTriggerAssetDownloading=_allowVoiceTriggerAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowEndpointAssetDownloading;                        //@synthesize allowEndpointAssetDownloading=_allowEndpointAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowLanguageDetectorAssetDownloading;                //@synthesize allowLanguageDetectorAssetDownloading=_allowLanguageDetectorAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowAdBlockerAssetDownloading;                       //@synthesize allowAdBlockerAssetDownloading=_allowAdBlockerAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowSpeakerRecognitionAssetDownloading;              //@synthesize allowSpeakerRecognitionAssetDownloading=_allowSpeakerRecognitionAssetDownloading - In the implementation block
-(id)init;
-(BOOL)allowVoiceTriggerAssetDownloading;
-(BOOL)allowLanguageDetectorAssetDownloading;
-(BOOL)allowAdBlockerAssetDownloading;
-(id)description;
-(void)setAllowLanguageDetectorAssetDownloading:(BOOL)arg1 ;
-(void)setAllowVoiceTriggerAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowSpeakerRecognitionAssetDownloading;
-(void)setAllowSpeakerRecognitionAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowEndpointAssetDownloading;
-(void)setAllowAdBlockerAssetDownloading:(BOOL)arg1 ;
-(void)setAllowEndpointAssetDownloading:(BOOL)arg1 ;
@end

