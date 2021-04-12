/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSAssetDownloadingOption : NSObject {

	BOOL _allowVoiceTriggerAssetDownloading;
	BOOL _allowEndpointAssetDownloading;
	BOOL _allowLanguageDetectorAssetDownloading;

}

@property (assign,nonatomic) BOOL allowVoiceTriggerAssetDownloading;                  //@synthesize allowVoiceTriggerAssetDownloading=_allowVoiceTriggerAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowEndpointAssetDownloading;                      //@synthesize allowEndpointAssetDownloading=_allowEndpointAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowLanguageDetectorAssetDownloading;              //@synthesize allowLanguageDetectorAssetDownloading=_allowLanguageDetectorAssetDownloading - In the implementation block
-(id)init;
-(BOOL)allowVoiceTriggerAssetDownloading;
-(void)setAllowVoiceTriggerAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowEndpointAssetDownloading;
-(void)setAllowEndpointAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowLanguageDetectorAssetDownloading;
-(void)setAllowLanguageDetectorAssetDownloading:(BOOL)arg1 ;
@end

