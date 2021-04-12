/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMBalloonPlugin.h>

@class NSExtension, LSPlugInKitProxy, NSUUID, NSString, NSNumber;

@interface IMBalloonAppExtension : IMBalloonPlugin {

	BOOL _canSendDataPayloads;
	BOOL _shouldBalloonHideAppIcon;
	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,readonly) NSString * containingBundleIdentifier; 
@property (nonatomic,retain) LSPlugInKitProxy * proxy;                             //@synthesize proxy=_proxy - In the implementation block
@property (assign) NSUUID * requestIdentifier;                                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL canSendDataPayloads;                             //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                        //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (nonatomic,retain,readonly) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL isLaunchProhibited; 
-(id)_adamID;
-(NSString *)containingBundleIdentifier;
-(id)__ck_statusImage;
-(id)__ck_breadcrumbImage;
-(id)_validProxy;
-(id)cacheKeyForInterfaceStyle:(long long)arg1 ;
-(id)_iconPathOnDisk:(id)arg1 ;
-(id)_generateCacheImageForInterfaceStyle:(long long)arg1 ;
-(void)_saveIconToURL:(id)arg1 toURL:(id)arg2 ;
-(id)_appIconFromFileURL:(id)arg1 ;
-(void)_checkForIconUpdates:(id)arg1 interfaceStyle:(long long)arg2 ;
-(id)placeholderImageForInterfaceStyle:(long long)arg1 ;
-(void)_generateIconsFirstTimeForInterfaceStyle:(long long)arg1 ;
-(void)__ck_prefetchBrowserImageForInterfaceStyle:(long long)arg1 ;
-(id)_generatePlaceholderImageForInterfaceStyle:(long long)arg1 ;
-(id)__ck_browserImageForInterfaceStyle:(long long)arg1 ;
-(id)version;
-(BOOL)isLaunchProhibited;
-(NSNumber *)itemID;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)extension;
-(id<PKPlugIn>)plugin;
-(NSUUID *)requestIdentifier;
-(BOOL)isBetaPlugin;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)canSendDataPayloads;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
-(BOOL)shouldBalloonHideAppIcon;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
@end

