/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TSPluginManager : NSObject {

	 pluginContainerController;
	 plugins;
	 pluginViewControllers;

}

@property (assign,__weak,nonatomic) UIViewController*<TSPluginContainerViewProviding> pluginContainerController; 
-(id)init;
-(void)removeAll;
-(void)addPlugin:(id)arg1 ;
-(UIViewController*<TSPluginContainerViewProviding>)pluginContainerController;
-(void)setPluginContainerController:(UIViewController*<TSPluginContainerViewProviding>)arg1 ;
-(void)removePlugin:(id)arg1 ;
-(BOOL)containsPluginForViewController:(id)arg1 ;
-(BOOL)stashViewController:(id)arg1 ;
@end

