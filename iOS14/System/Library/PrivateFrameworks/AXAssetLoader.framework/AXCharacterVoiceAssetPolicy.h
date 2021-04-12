/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/

#import <AXAssetLoader/AXAssetPolicy.h>

@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy {

	NSString* _language;

}

@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
+(id)characterVoiceAssetPolicyWithLanguage:(id)arg1 ;
-(id)assetType;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)language;
-(id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg1 ;
@end

