/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface INCExtensionPlugInBundleManager : NSObject {

	NSMutableDictionary* _intentsSupported;
	NSObject*<OS_dispatch_queue> _intentsSupportedQueue;
	NSDictionary* _pluginsPlistDictionary;

}
+(id)sharedManager;
-(id)init;
-(id)extensionForIntent:(id)arg1 ;
-(id)_extensionPlugInBundleForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_setExtensionPlugInBundle:(id)arg1 forIntent:(id)arg2 bundleIdentifier:(id)arg3 ;
-(BOOL)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(BOOL*)arg2 ;
-(BOOL)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

