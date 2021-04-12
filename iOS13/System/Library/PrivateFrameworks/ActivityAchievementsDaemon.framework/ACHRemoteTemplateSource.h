/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHRemoteTemplateAvailabilityListenerDelegate.h>
#import <libobjc.A.dylib/ACHTemplateSource.h>

@protocol ACHTemplateSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject, ACHMobileAssetProvider, ACHBackCompatRemoteAchievementAvailabilityKeyWriter, ACHRemoteTemplateAvailabilityKeyProvider, ACHRemoteTemplateAvailabilityListener, NSDictionary;

@interface ACHRemoteTemplateSource : NSObject <ACHRemoteTemplateAvailabilityListenerDelegate, ACHTemplateSource> {

	NSString* _buildVersionOverride;
	NSObject*<ACHTemplateSourceDelegate> delegate;
	ACHMobileAssetProvider* _mobileAssetProvider;
	ACHBackCompatRemoteAchievementAvailabilityKeyWriter* _backCompatAvailabilityKeyWriter;
	ACHRemoteTemplateAvailabilityKeyProvider* _remoteTemplateAvailabilityKeyProvider;
	ACHRemoteTemplateAvailabilityListener* _remoteTemplateAvailabilityListener;
	NSDictionary* _resourceAssetURLsByUniqueName;
	NSDictionary* _stickerAssetURLsByUniqueName;
	NSDictionary* _assetVersionsByUniqueName;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) ACHMobileAssetProvider * mobileAssetProvider;                                                       //@synthesize mobileAssetProvider=_mobileAssetProvider - In the implementation block
@property (nonatomic,retain) ACHBackCompatRemoteAchievementAvailabilityKeyWriter * backCompatAvailabilityKeyWriter;              //@synthesize backCompatAvailabilityKeyWriter=_backCompatAvailabilityKeyWriter - In the implementation block
@property (nonatomic,retain) ACHRemoteTemplateAvailabilityKeyProvider * remoteTemplateAvailabilityKeyProvider;                   //@synthesize remoteTemplateAvailabilityKeyProvider=_remoteTemplateAvailabilityKeyProvider - In the implementation block
@property (nonatomic,retain) ACHRemoteTemplateAvailabilityListener * remoteTemplateAvailabilityListener;                         //@synthesize remoteTemplateAvailabilityListener=_remoteTemplateAvailabilityListener - In the implementation block
@property (nonatomic,retain) NSDictionary * resourceAssetURLsByUniqueName;                                                       //@synthesize resourceAssetURLsByUniqueName=_resourceAssetURLsByUniqueName - In the implementation block
@property (nonatomic,retain) NSDictionary * stickerAssetURLsByUniqueName;                                                        //@synthesize stickerAssetURLsByUniqueName=_stickerAssetURLsByUniqueName - In the implementation block
@property (nonatomic,retain) NSDictionary * assetVersionsByUniqueName;                                                           //@synthesize assetVersionsByUniqueName=_assetVersionsByUniqueName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<ACHTemplateSourceDelegate>)delegate;
-(void)setDelegate:(NSObject*<ACHTemplateSourceDelegate>)arg1 ;
-(NSString *)identifier;
-(id)buildVersion;
-(BOOL)sourceShouldRunForDate:(id)arg1 ;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg1 ;
-(id)resourceBundleURLForTemplate:(id)arg1 ;
-(id)propertyListBundleURLForTemplate:(id)arg1 ;
-(id)stickerBundleURLForTemplate:(id)arg1 ;
-(long long)runCadence;
-(long long)mobileAssetVersionForTemplate:(id)arg1 ;
-(ACHRemoteTemplateAvailabilityKeyProvider *)remoteTemplateAvailabilityKeyProvider;
-(void)setRemoteTemplateAvailabilityKeyProvider:(ACHRemoteTemplateAvailabilityKeyProvider *)arg1 ;
-(ACHMobileAssetProvider *)mobileAssetProvider;
-(void)_addAssetVersionsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2 ;
-(void)_addURLsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2 ;
-(void)setResourceAssetURLsByUniqueName:(NSDictionary *)arg1 ;
-(void)setStickerAssetURLsByUniqueName:(NSDictionary *)arg1 ;
-(void)setAssetVersionsByUniqueName:(NSDictionary *)arg1 ;
-(ACHBackCompatRemoteAchievementAvailabilityKeyWriter *)backCompatAvailabilityKeyWriter;
-(void)_removeURLsByUniqueNameFromDictionary:(id)arg1 fromAsset:(id)arg2 ;
-(id)_resourceAssetURLForTemplate:(id)arg1 ;
-(NSDictionary *)stickerAssetURLsByUniqueName;
-(NSDictionary *)assetVersionsByUniqueName;
-(NSDictionary *)resourceAssetURLsByUniqueName;
-(void)remoteTemplateAvailabilityUpdated;
-(id)initWithMobileAssetProvider:(id)arg1 backCompatWriter:(id)arg2 remoteTemplateAvailabilityKeyProvider:(id)arg3 remoteTemplateAvailabilityListener:(id)arg4 ;
-(void)setBuildVersionOverride:(id)arg1 ;
-(void)setMobileAssetProvider:(ACHMobileAssetProvider *)arg1 ;
-(void)setBackCompatAvailabilityKeyWriter:(ACHBackCompatRemoteAchievementAvailabilityKeyWriter *)arg1 ;
-(ACHRemoteTemplateAvailabilityListener *)remoteTemplateAvailabilityListener;
-(void)setRemoteTemplateAvailabilityListener:(ACHRemoteTemplateAvailabilityListener *)arg1 ;
@end

