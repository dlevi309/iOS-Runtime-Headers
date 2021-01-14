/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TSPluginManager *)pluginManager;
-(void)registerAndInitializePlugin:(id)arg1 ;
-(id)init;
-(void)relayoutAll;
-(id)viewControllerForIdentifier:(id)arg1 ;
-(BOOL)containsPluginForIdentifier:(id)arg1 ;
-(CGSize)waitForSizeForIdentifier:(id)arg1 ;
-(void)removeAll;
@end

