/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)version;
-(BOOL)isEnabled;
-(BOOL)isLaunchProhibited;
-(id)applicationType;
-(id)itemID;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)plugin;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)showInBrowser;
-(BOOL)isBetaPlugin;
-(BOOL)showableInBrowser;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)isStickerPackOnly;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
@end

