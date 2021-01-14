/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <libobjc.A.dylib/BFFFlowItemDelegate.h>
#import <libobjc.A.dylib/BFFNavigationControllerDelegate.h>
#import <libobjc.A.dylib/BFFFlowItem.h>

@protocol BFFNavigationFlowDelegate, BFFFlowDelegate, BFFFlowItem;
@class BFFNavigationController, BFFFlowStarter, NSArray, NSMutableArray, UIViewController, NSString;

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem> {

	BFFNavigationController* _navigationController;
	id<BFFNavigationFlowDelegate> _navigationFlowDelegate;
	id<BFFFlowDelegate> _delegate;
	BFFFlowStarter* _starter;
	NSArray* _classList;
	NSMutableArray* _controllers;
	/*^block*/id _injector;
	UIViewController*<BFFFlowItem> _firstController;

}

@property (nonatomic,retain) UIViewController*<BFFFlowItem> firstController;                             //@synthesize firstController=_firstController - In the implementation block
@property (nonatomic,retain) NSMutableArray * controllers;                                               //@synthesize controllers=_controllers - In the implementation block
@property (nonatomic,__weak,readonly) BFFNavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) id<BFFNavigationFlowDelegate> navigationFlowDelegate;              //@synthesize navigationFlowDelegate=_navigationFlowDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<BFFFlowDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) BFFFlowStarter * starter;                                          //@synthesize starter=_starter - In the implementation block
@property (nonatomic,retain) NSArray * classList;                                                        //@synthesize classList=_classList - In the implementation block
@property (nonatomic,copy,readonly) id injector;                                                         //@synthesize injector=_injector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudConfigSkipKey;
+(id)internalSkipKey;
-(id)firstItem;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id<BFFFlowDelegate>)delegate;
-(id)injector;
-(void)setDelegate:(id<BFFFlowDelegate>)arg1 ;
-(NSMutableArray *)controllers;
-(BFFFlowStarter *)starter;
-(void)dealloc;
-(BFFNavigationController *)navigationController;
-(NSArray *)classList;
-(void)setControllers:(NSMutableArray *)arg1 ;
-(void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2 ;
-(id)precedingItems;
-(id<BFFNavigationFlowDelegate>)navigationFlowDelegate;
-(id)precedingItemsClasses;
-(id)createFlowItem:(Class)arg1 ;
-(UIViewController*<BFFFlowItem>)firstController;
-(void)setFirstController:(UIViewController*<BFFFlowItem>)arg1 ;
-(id)initWithNavigationController:(id)arg1 flowDelegate:(id)arg2 flowStarter:(id)arg3 dependencyInjector:(/*^block*/id)arg4 ;
-(void)configureFlowItem:(id)arg1 ;
-(id)controllerFollowingControllerClass:(Class)arg1 requestedNext:(Class)arg2 ;
-(void)flowItemDone:(id)arg1 nextItem:(id)arg2 ;
-(id)_viewControllerForBuddyController:(id)arg1 ;
-(void)flowItemCancelled:(id)arg1 ;
-(void)flowItemDone:(id)arg1 ;
-(void)startFlowAnimated:(BOOL)arg1 ;
-(void)setClassList:(NSArray *)arg1 ;
@end

