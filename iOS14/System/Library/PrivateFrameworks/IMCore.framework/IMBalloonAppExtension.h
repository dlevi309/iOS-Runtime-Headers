/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)__ck_breadcrumbImage;
-(id)_validProxy;
-(id)__ck_browserImageGenerateSynchronously:(BOOL)arg1 interfaceStyle:(long long)arg2 ;
-(BOOL)__ck_preferIconServices;
-(id)__ck_iconServicesBundleIdentifier;
-(id)__ck_generateAssetCatalogImageForInterfaceStyle:(long long)arg1 ;
-(id)_generatePlaceholderImageForInterfaceStyle:(long long)arg1 ;
-(id)__ck_browserImageForInterfaceStyle:(long long)arg1 ;
-(NSString *)containingBundleIdentifier;
-(id)__ck_statusImage;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(NSUUID *)requestIdentifier;
-(LSPlugInKitProxy *)proxy;
-(id<PKPlugIn>)plugin;
-(NSNumber *)itemID;
-(BOOL)isBetaPlugin;
-(NSExtension *)extension;
-(BOOL)isLaunchProhibited;
-(BOOL)canSendDataPayloads;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(id)version;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
-(BOOL)shouldBalloonHideAppIcon;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
@end

