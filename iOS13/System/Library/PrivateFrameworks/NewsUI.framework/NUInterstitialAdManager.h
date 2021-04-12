/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUInterstitialAdManagerDelegate, NUPage, NUAdProvider, FCNewsAppConfigurationManager, NUAdLayoutOptionsFactory;
@interface NUInterstitialAdManager : NSObject {

	BOOL _enabled;
	id<NUInterstitialAdManagerDelegate> _delegate;
	id<NUPage> _activePage;
	id<NUAdProvider> _adProvider;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	id<NUAdLayoutOptionsFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                            //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;                      //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (assign,nonatomic,__weak) id<NUInterstitialAdManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NUPage> activePage;                                                    //@synthesize activePage=_activePage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<NUInterstitialAdManagerDelegate>)delegate;
-(void)setDelegate:(id<NUInterstitialAdManagerDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)cancelTimer;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)setActivePage:(id<NUPage>)arg1 ;
-(id<NUAdProvider>)adProvider;
-(id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2 layoutOptionsFactory:(id)arg3 ;
-(id<NUAdLayoutOptionsFactory>)layoutOptionsFactory;
-(void)triggerTimerChangesForActivePage:(id)arg1 ;
-(id<NUPage>)activePage;
-(void)loadInterstitial;
-(void)restartTimer;
@end

