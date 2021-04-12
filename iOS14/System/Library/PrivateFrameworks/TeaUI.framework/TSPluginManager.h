/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TSPluginManager : NSObject {

	 pluginContainerController;
	 plugins;
	 pluginViewControllers;

}

@property (assign,__weak,nonatomic) UIViewController*<TSPluginContainerViewProviding> pluginContainerController; 
-(BOOL)stashViewController:(id)arg1 ;
-(id)init;
-(void)addPlugin:(id)arg1 ;
-(id)pluginForIdentifier:(id)arg1 ;
-(void)removePlugin:(id)arg1 ;
-(void)setPluginContainerController:(UIViewController*<TSPluginContainerViewProviding>)arg1 ;
-(UIViewController*<TSPluginContainerViewProviding>)pluginContainerController;
-(void)removeAll;
-(BOOL)containsPluginForViewController:(id)arg1 ;
@end

