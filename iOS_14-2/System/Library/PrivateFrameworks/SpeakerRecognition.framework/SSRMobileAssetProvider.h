/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/SSRAssetProviding.h>

@class NSString;

@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(unsigned long long)getAssetProviderType;
-(id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)_installedMobileAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)_buildAssetQueryForAssetType:(unsigned long long)arg1 ;
-(id)_filteredAssets:(id)arg1 forLanguage:(id)arg2 ;
-(id)_getSSRAssetTypeString;
-(unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
-(id)_getVoiceTriggerAssetTypeString;
-(unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
-(id)_getEndpointAssetTypeString;
-(unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;
@end

