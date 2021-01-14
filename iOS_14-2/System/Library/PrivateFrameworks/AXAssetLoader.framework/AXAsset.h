/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, MAAsset, AXImageCaptionModel, NSNumber;

@interface AXAsset : NSObject <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isDownloading;
	NSString* _assetId;
	NSString* _assetType;
	unsigned long long _contentVersion;
	unsigned long long _compatibilityVersion;
	unsigned long long _formatVersion;
	NSDictionary* _properties;
	NSURL* _originalURL;
	NSURL* _localCopyURL;
	MAAsset* _maAsset;

}

@property (nonatomic,readonly) NSString * characterVoiceLanguage; 
@property (nonatomic,readonly) NSString * characterVoiceName; 
@property (nonatomic,readonly) AXImageCaptionModel * imageCaptionModel; 
@property (nonatomic,retain) NSURL * originalURL;                                    //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,retain) NSURL * localCopyURL;                                   //@synthesize localCopyURL=_localCopyURL - In the implementation block
@property (nonatomic,readonly) MAAsset * maAsset;                                    //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                                     //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL isDownloading;                                   //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) NSString * assetId;                                   //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) unsigned long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSNumber * downloadSize; 
@property (nonatomic,readonly) NSNumber * unarchivedFileSize; 
+(BOOL)supportsSecureCoding;
+(id)newsestCompatibleImageCaptionModelAssetFromAssets:(id)arg1 withStage:(id)arg2 language:(id)arg3 isInstalled:(BOOL)arg4 isDownloadable:(BOOL)arg5 ;
+(id)assetsFromMAAssets:(id)arg1 ;
+(id)archivedAssets:(id)arg1 error:(id*)arg2 ;
+(id)unarchivedAssets:(id)arg1 error:(id*)arg2 ;
+(id)installedAssets:(id)arg1 ;
+(id)downloadableAssets:(id)arg1 ;
-(unsigned long long)compatibilityVersion;
-(NSURL *)originalURL;
-(NSString *)assetType;
-(NSString *)assetId;
-(NSDictionary *)properties;
-(unsigned long long)formatVersion;
-(NSNumber *)downloadSize;
-(NSURL *)localURL;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInstalled;
-(id)description;
-(MAAsset *)maAsset;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)contentVersion;
-(BOOL)isDownloading;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)characterVoiceLanguage;
-(NSString *)characterVoiceName;
-(id)initWithMAAsset:(id)arg1 ;
-(void)resetPropertiesFromMAAsset:(id)arg1 ;
-(BOOL)assetStateIsInstalled:(long long)arg1 ;
-(void)refreshMAAsset;
-(BOOL)isEquivalentToMAAsset:(id)arg1 ;
-(NSNumber *)unarchivedFileSize;
-(void)copyLocally;
-(NSURL *)localCopyURL;
-(void)setLocalCopyURL:(NSURL *)arg1 ;
-(AXImageCaptionModel *)imageCaptionModel;
-(id)assertionForVersionLockedImageCaptionModelAsset:(id)arg1 ;
@end

