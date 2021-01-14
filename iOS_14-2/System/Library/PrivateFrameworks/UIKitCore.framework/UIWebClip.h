/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebClipDelegate;
@class NSString, NSURL, NSArray, UIImage, NSMutableData, NSURLConnection, NSUserActivity;

@interface UIWebClip : NSObject {

	NSString* identifier;
	NSURL* pageURL;
	NSArray* icons;
	unsigned long long currentIconIndex;
	NSURL* startupImageURL;
	NSURL* startupLandscapeImageURL;
	NSString* title;
	NSString* applicationBundleIdentifier;
	unsigned long long bundleVersion;
	BOOL fullScreen;
	BOOL classicMode;
	BOOL removalDisallowed;
	BOOL iconIsScreenShotBased;
	BOOL iconIsPrecomposed;
	BOOL iconIsPrerendered;
	unsigned long long supportedOrientations;
	long long statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
	UIImage* startupLandscapeImage;
	UIImage* initialLaunchImage;
	id<WebClipDelegate> delegate;
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;
	BOOL _isAppClip;
	BOOL _scenelessBackgroundLaunch;
	BOOL _ignoreManifestScope;
	BOOL _configurationIsManaged;
	unsigned long long _contentMode;
	unsigned long long _webClipStatusBarStyle;

}

@property (copy) NSString * identifier; 
@property (nonatomic,retain) NSURL * pageURL; 
@property (retain) NSArray * icons; 
@property (retain) NSURL * startupImageURL; 
@property (retain) NSURL * startupLandscapeImageURL; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSURL * applicationLaunchURL; 
@property (nonatomic,readonly) NSUserActivity * appClipUserActivity; 
@property (nonatomic,readonly) unsigned long long bundleVersion; 
@property (assign) BOOL fullScreen; 
@property (assign) BOOL classicMode; 
@property (assign) BOOL removalDisallowed; 
@property (assign) BOOL isAppClip;                                                  //@synthesize isAppClip=_isAppClip - In the implementation block
@property (assign) BOOL scenelessBackgroundLaunch;                                  //@synthesize scenelessBackgroundLaunch=_scenelessBackgroundLaunch - In the implementation block
@property (assign) unsigned long long contentMode;                                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign) BOOL ignoreManifestScope;                                        //@synthesize ignoreManifestScope=_ignoreManifestScope - In the implementation block
@property (assign) BOOL configurationIsManaged;                                     //@synthesize configurationIsManaged=_configurationIsManaged - In the implementation block
@property (readonly) BOOL iconIsScreenShotBased; 
@property (readonly) BOOL iconIsPrecomposed; 
@property (readonly) BOOL iconIsPrerendered; 
@property (assign) unsigned long long supportedOrientations; 
@property (assign) long long statusBarStyle; 
@property (assign,nonatomic) unsigned long long webClipStatusBarStyle;              //@synthesize webClipStatusBarStyle=_webClipStatusBarStyle - In the implementation block
@property (readonly) NSString * iconImagePath; 
@property (nonatomic,retain,readonly) UIImage * iconImage; 
@property (nonatomic,retain) UIImage * startupImage; 
@property (nonatomic,retain) UIImage * startupLandscapeImage; 
@property (nonatomic,retain) UIImage * initialLaunchImage; 
@property (assign,nonatomic,__weak) id<WebClipDelegate> delegate; 
+(id)webClips;
+(id)appClips;
+(BOOL)_webClipFullScreenValueForMetaTagContent:(id)arg1 ;
+(unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1 ;
+(id)urlForWebClipWithIdentifier:(id)arg1 ;
+(id)pathForWebClipWithIdentifier:(id)arg1 ;
+(id)_normalizedWebClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)webClipWithIdentifier:(id)arg1 ;
+(id)clipsIncludingWebClips:(BOOL)arg1 includingAppClips:(BOOL)arg2 ;
+(id)webClipsDirectoryPath;
+(id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2 ;
+(long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1 ;
+(id)_webClipLinkTagsFromWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2 ;
+(id)webClipWithURL:(id)arg1 ;
+(BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg1 ;
+(id)webClipTitleForWebDocumentView:(id)arg1 ;
+(id)webClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)pathForWebClipStorageWithIdentifier:(id)arg1 ;
+(long long)webClipStatusBarStyleForWebDocumentView:(id)arg1 ;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1 ;
+(id)pathForWebClipCacheWithIdentifier:(id)arg1 ;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebDocumentView:(id)arg1 ;
+(unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1 ;
-(BOOL)classicMode;
-(void)setIsAppClip:(BOOL)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)iconIsPrerendered;
-(BOOL)isAppClip;
-(unsigned long long)contentMode;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(NSArray *)icons;
-(id<WebClipDelegate>)delegate;
-(void)setIcons:(NSArray *)arg1 ;
-(UIImage *)iconImage;
-(NSURL *)pageURL;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)bundleIdentifier;
-(void)setPageURL:(NSURL *)arg1 ;
-(BOOL)fullScreen;
-(unsigned long long)bundleVersion;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setDelegate:(id<WebClipDelegate>)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(BOOL)updateOnDisk;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2 ;
-(void)setRemovalDisallowed:(BOOL)arg1 ;
-(void)setContentModeWithString:(id)arg1 ;
-(void)_reloadProperties;
-(void)_readPropertiesFromBundle:(id)arg1 ;
-(id)_launchURLWithScheme:(id)arg1 ;
-(void)setStartupLandscapeImage:(UIImage *)arg1 ;
-(void)setStartupImage:(UIImage *)arg1 ;
-(BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2 ;
-(void)setInitialLaunchImage:(UIImage *)arg1 ;
-(BOOL)iconIsPrecomposed;
-(id)_bundleResourceWithName:(id)arg1 ;
-(id)_bundleImageWithName:(id)arg1 ;
-(void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3 ;
-(void)cancelMediaUpdate;
-(BOOL)createOnDisk;
-(UIImage *)startupImage;
-(void)stopLoadingStartupImage;
-(NSString *)iconImagePath;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupLandscapeImage;
-(void)setStartupImageURL:(NSURL *)arg1 ;
-(void)setStartupLandscapeImageURL:(NSURL *)arg1 ;
-(void)requestCustomIconUpdate;
-(UIImage *)startupLandscapeImage;
-(void)requestCustomPortraitStartupImageUpdate;
-(BOOL)tryLoadingNextCustomIcon;
-(void)requestCustomLandscapeStartupImageUpdate;
-(UIImage *)initialLaunchImage;
-(void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 ;
-(void)requestIconUpdateInSpringBoard;
-(BOOL)removeFromDisk;
-(void)setIconImageFromScreenshot:(id)arg1 ;
-(NSUserActivity *)appClipUserActivity;
-(void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2 ;
-(id)generateIconImageForFormat:(int)arg1 scale:(double)arg2 ;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1 ;
-(id)getStartupImage:(long long)arg1 ;
-(NSURL *)startupImageURL;
-(NSURL *)startupLandscapeImageURL;
-(BOOL)removalDisallowed;
-(BOOL)iconIsScreenShotBased;
-(unsigned long long)supportedOrientations;
-(BOOL)scenelessBackgroundLaunch;
-(void)setScenelessBackgroundLaunch:(BOOL)arg1 ;
-(BOOL)ignoreManifestScope;
-(void)setIgnoreManifestScope:(BOOL)arg1 ;
-(BOOL)configurationIsManaged;
-(void)setConfigurationIsManaged:(BOOL)arg1 ;
-(unsigned long long)webClipStatusBarStyle;
-(void)setWebClipStatusBarStyle:(unsigned long long)arg1 ;
-(NSURL *)applicationLaunchURL;
-(long long)statusBarStyle;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setClassicMode:(BOOL)arg1 ;
-(void)setContentMode:(unsigned long long)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)title;
-(void)dealloc;
-(id)_info;
@end

