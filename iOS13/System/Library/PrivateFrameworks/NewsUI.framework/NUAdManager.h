/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>
#import <libobjc.A.dylib/NUAdProvider.h>
#import <libobjc.A.dylib/NUAdAnalyticsProvider.h>

@protocol NUAdManagerConfigurationProvider, NUDevice;
@class NUAdStore, NUAdInterstitial, NSString;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider> {

	NUAdStore* _adStore;
	id<NUAdManagerConfigurationProvider> _configurationProvider;
	id<NUDevice> _device;
	NUAdInterstitial* _interstitialAdPendingLoad;

}

@property (nonatomic,readonly) NUAdStore * adStore;                                                     //@synthesize adStore=_adStore - In the implementation block
@property (nonatomic,readonly) id<NUAdManagerConfigurationProvider> configurationProvider;              //@synthesize configurationProvider=_configurationProvider - In the implementation block
@property (nonatomic,readonly) id<NUDevice> device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NUAdInterstitial * interstitialAdPendingLoad;                              //@synthesize interstitialAdPendingLoad=_interstitialAdPendingLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUDevice>)device;
-(id<NUAdManagerConfigurationProvider>)configurationProvider;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithConfigurationProvider:(id)arg1 device:(id)arg2 ;
-(void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)prerollForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)bannerViewDidLoad:(id)arg1 ;
-(void)bannerViewDidUnload:(id)arg1 ;
-(id)adWithIdentifier:(id)arg1 ;
-(id)inArticleContextConstructor;
-(NUAdStore *)adStore;
-(void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NUAdInterstitial *)interstitialAdPendingLoad;
-(id)interstitialContextConstructor;
-(id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3 ;
-(void)setInterstitialAdPendingLoad:(NUAdInterstitial *)arg1 ;
-(id)prerollContextConstructor;
-(void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)videoPlaylistAdContextConstructor;
-(id)defaultRootDefinition;
-(id)defaultHeaderDefinition;
-(id)defaultBodyDefinition;
-(id)defaultArticleDefinition;
-(id)defaultIssueDefinition;
-(id)defaultFeedMetadataDefinition;
-(id)prerollRootDefinition;
-(id)prerollHeaderDefinition;
-(id)prerollBodyDefinition;
-(id)videoPlaylistAdRootDefinition;
-(id)videoInTodayHeaderDefinition;
-(id)videoPlaylistAdBodyDefinition;
@end

