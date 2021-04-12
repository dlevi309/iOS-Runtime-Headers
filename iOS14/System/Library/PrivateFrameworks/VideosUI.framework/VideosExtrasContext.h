/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosExtrasRootViewControllerDelegate.h>
#import <VideosUI/VideosExtrasPlaybackDelegate.h>

@protocol VideosExtrasContextDelegate;
@class UIViewController, MPPlaybackContext, VideosExtrasRootViewController, MPMediaItem, NSURL, NSString, NSArray;

@interface VideosExtrasContext : NSObject <VideosExtrasRootViewControllerDelegate, VideosExtrasPlaybackDelegate> {

	BOOL _isStarted;
	id<VideosExtrasContextDelegate> _delegate;
	UIViewController* _featurePlaybackViewController;
	MPPlaybackContext* _featurePlaybackContext;
	VideosExtrasRootViewController* _extrasRootViewController;
	MPMediaItem* _mediaItem;
	NSURL* _javascriptURL;
	NSString* _buyParameters;
	long long _storeID;
	unsigned long long _selectedMainMenuIndex;

}

@property (assign,nonatomic) BOOL isStarted;                                                           //@synthesize isStarted=_isStarted - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasContextDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * featurePlaybackViewController;                         //@synthesize featurePlaybackViewController=_featurePlaybackViewController - In the implementation block
@property (nonatomic,retain) MPPlaybackContext * featurePlaybackContext;                               //@synthesize featurePlaybackContext=_featurePlaybackContext - In the implementation block
@property (nonatomic,readonly) VideosExtrasRootViewController * extrasRootViewController;              //@synthesize extrasRootViewController=_extrasRootViewController - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy,readonly) NSURL * javascriptURL;                                             //@synthesize javascriptURL=_javascriptURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                          //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) long long storeID;                                                      //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) BOOL showsBuiltInNavigationControls; 
@property (assign,nonatomic) BOOL showsMenuBar; 
@property (nonatomic,readonly) NSArray * mainMenuItemElements; 
@property (assign,nonatomic) unsigned long long selectedMainMenuIndex;                                 //@synthesize selectedMainMenuIndex=_selectedMainMenuIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)extrasRootViewControllerClass;
+(id)overriddenJavascriptURL;
+(void)overrideJavascriptURL:(id)arg1 ;
-(long long)storeID;
-(id)initWithMediaItem:(id)arg1 ;
-(id)init;
-(BOOL)isStarted;
-(id<VideosExtrasContextDelegate>)delegate;
-(NSString *)buyParameters;
-(void)setDelegate:(id<VideosExtrasContextDelegate>)arg1 ;
-(MPMediaItem *)mediaItem;
-(void)failWithError:(id)arg1 ;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2 ;
-(VideosExtrasRootViewController *)extrasRootViewController;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(BOOL)shouldExtrasBeVisibleForSize:(CGSize)arg1 ;
-(NSArray *)mainMenuItemElements;
-(id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 ;
-(void)setShowsMenuBar:(BOOL)arg1 ;
-(void)setShowsBuiltInNavigationControls:(BOOL)arg1 ;
-(unsigned long long)selectedMainMenuIndex;
-(BOOL)isMenuItemElementMainFeature:(id)arg1 ;
-(void)setClearsStackOnNextPush;
-(void)setSelectedMainMenuIndex:(unsigned long long)arg1 ;
-(void)startIfNecessary;
-(void)extrasRequestsPlaybackStop;
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)extrasBackButtonPressed;
-(BOOL)showsBuiltInNavigationControls;
-(UIViewController *)featurePlaybackViewController;
-(NSURL *)javascriptURL;
-(BOOL)showsMenuBar;
-(void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg1 ;
-(void)extrasRootViewController:(id)arg1 extrasVisibilityNeedsUpdate:(BOOL)arg2 ;
-(void)_configureForMediaItem:(id)arg1 ;
-(MPPlaybackContext *)featurePlaybackContext;
-(void)setIsStarted:(BOOL)arg1 ;
-(void)clearNavStack;
-(void)setFeaturePlaybackViewController:(UIViewController *)arg1 ;
-(void)setFeaturePlaybackContext:(MPPlaybackContext *)arg1 ;
@end

