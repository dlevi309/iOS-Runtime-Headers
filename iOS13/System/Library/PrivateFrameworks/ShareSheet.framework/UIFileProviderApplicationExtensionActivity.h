/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity {

	LSPlugInKitProxy* _pluginProxy;
	NSArray* _groupContainerURLs;

}

@property (nonatomic,retain) LSPlugInKitProxy * pluginProxy;              //@synthesize pluginProxy=_pluginProxy - In the implementation block
@property (nonatomic,retain) NSArray * groupContainerURLs;                //@synthesize groupContainerURLs=_groupContainerURLs - In the implementation block
-(NSArray *)groupContainerURLs;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(LSPlugInKitProxy *)pluginProxy;
-(BOOL)_sharesGroupContainerWithURL:(id)arg1 ;
-(void)setPluginProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setGroupContainerURLs:(NSArray *)arg1 ;
@end

