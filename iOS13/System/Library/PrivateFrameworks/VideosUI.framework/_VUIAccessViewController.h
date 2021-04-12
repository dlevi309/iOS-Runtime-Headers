/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class VUIAccessView_iOS, VUIAppSpinnerView, NSArray, OBPrivacyLinkController, NSMutableArray, NSDictionary;

@interface _VUIAccessViewController : UIViewController {

	VUIAccessView_iOS* _accessView;
	VUIAppSpinnerView* _loadingView;
	NSArray* _channels;
	OBPrivacyLinkController* _privacyController;
	NSMutableArray* _bundleIDs;
	NSDictionary* _options;
	BOOL _hasCalledCompletion;
	NSArray* _appInfos;
	NSArray* _appChannels;
	NSMutableArray* _channelIds;
	BOOL _hasOptedIn;
	BOOL _shouldDenyOnCancel;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)_isHostedInRemoteViewService;
-(id)init;
-(void)dealloc;
-(void)_init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_handleMenuGesture:(id)arg1 ;
-(id)cappedTraitCollection;
-(id)_watchListAppIcon;
-(id)_imageForBundleID:(id)arg1 ;
-(void)_fetchRemoteAppInfo;
-(void)_setupAccessViews;
-(void)_toggleLoadingScreen;
-(void)_presentGenericErrorWithCompletion:(/*^block*/id)arg1 ;
-(void)_allow:(id)arg1 ;
-(void)_disallow:(id)arg1 ;
-(void)_handleSeeAllButton:(id)arg1 ;
-(void)_handleNackButton:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

