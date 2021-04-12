/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@protocol TFBetaAppLaunchPresenterView, TFBetaAppLaunchDataProvider;
@class NSString, TFImageFetcher, TFLaunchScreen;

@interface TFBetaAppLaunchPresenter : NSObject {

	id<TFBetaAppLaunchPresenterView> _presenterView;
	NSString* _bundleIdentifier;
	id<TFBetaAppLaunchDataProvider> _launchDataProvider;
	TFImageFetcher* _imageFetcher;
	TFLaunchScreen* _launchScreen;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<TFBetaAppLaunchDataProvider> launchDataProvider;               //@synthesize launchDataProvider=_launchDataProvider - In the implementation block
@property (nonatomic,readonly) TFImageFetcher * imageFetcher;                                    //@synthesize imageFetcher=_imageFetcher - In the implementation block
@property (nonatomic,retain) TFLaunchScreen * launchScreen;                                      //@synthesize launchScreen=_launchScreen - In the implementation block
@property (assign,nonatomic,__weak) id<TFBetaAppLaunchPresenterView> presenterView;              //@synthesize presenterView=_presenterView - In the implementation block
-(NSString *)bundleIdentifier;
-(void)update;
-(id)initForIdentifier:(id)arg1 launchDataProvider:(id)arg2 launchScreenSidepack:(id)arg3 ;
-(void)setPresenterView:(id<TFBetaAppLaunchPresenterView>)arg1 ;
-(id<TFBetaAppLaunchPresenterView>)presenterView;
-(TFLaunchScreen *)launchScreen;
-(void)_showTestNotesViewWithLaunchScreen:(id)arg1 ;
-(void)_showLoading;
-(id<TFBetaAppLaunchDataProvider>)launchDataProvider;
-(void)_abortLaunchScreenLoadWithError:(id)arg1 ;
-(void)setLaunchScreen:(TFLaunchScreen *)arg1 ;
-(void)_showHowToViewWithLaunchScreen:(id)arg1 ;
-(TFImageFetcher *)imageFetcher;
-(void)exitLaunchScreen;
-(void)showHowToScreen;
-(void)openHowToSupportLink;
@end

