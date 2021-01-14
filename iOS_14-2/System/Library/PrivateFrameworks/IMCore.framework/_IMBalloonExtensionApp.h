/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMBalloonApp.h>

@class NSExtension, LSPlugInKitProxy;

@interface _IMBalloonExtensionApp : IMBalloonApp {

	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(id)applicationType;
-(void)setIsEnabled:(BOOL)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(id)plugin;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)showInBrowser;
-(id)itemID;
-(BOOL)isBetaPlugin;
-(BOOL)showableInBrowser;
-(NSExtension *)extension;
-(BOOL)isEnabled;
-(BOOL)isLaunchProhibited;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(id)version;
-(BOOL)isStickerPackOnly;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
@end

