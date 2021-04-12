/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


#import <NewsUI2/NewsUI2-Structs.h>
@class TSPluginManager;

@interface TSBlockingPluginManager : NSObject {

	 pluginManager;
	 plugins;
	 pluginModels;
	 viewControllers;
	 dataLock;
	 viewControllersLock;

}

@property (readonly,nonatomic) TSPluginManager * pluginManager; 
-(id)init;
-(void)removeAll;
-(TSPluginManager *)pluginManager;
-(id)viewControllerForIdentifier:(id)arg1 ;
-(BOOL)containsPluginForIdentifier:(id)arg1 ;
-(void)registerAndInitializePlugin:(id)arg1 ;
-(void)relayoutAll;
-(CGSize)waitForSizeForIdentifier:(id)arg1 ;
@end

