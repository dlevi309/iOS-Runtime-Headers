/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(void)reloadVisualStyle;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(UIInterfaceActionGroup *)actionGroup;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(UIInterfaceActionGroupView *)actionGroupView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithActionGroup:(id)arg1 ;
@end

