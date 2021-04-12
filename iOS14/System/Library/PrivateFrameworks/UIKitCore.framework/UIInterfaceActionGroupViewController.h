/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@protocol UIInterfaceActionVisualStyleProviding;
@class UIInterfaceActionGroupView, UIInterfaceActionGroup, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting> {

	BOOL _springLoaded;
	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceActionGroup* _actionGroup;

}

@property (nonatomic,copy,readonly) UIInterfaceActionGroup * actionGroup;                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (nonatomic,copy,readonly) UIInterfaceActionGroupView * actionGroupView;                               //@synthesize actionGroupView=_actionGroupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;              //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded;                                           //@synthesize springLoaded=_springLoaded - In the implementation block
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(UIInterfaceActionGroup *)actionGroup;
-(UIInterfaceActionGroupView *)actionGroupView;
-(BOOL)isSpringLoaded;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)reloadVisualStyle;
-(id)initWithActionGroup:(id)arg1 ;
-(void)loadView;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
@end

