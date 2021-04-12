/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDatasource.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPassPersonalizationViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol PKAddPassesCardStackViewControllerDelegate;
@class NSArray, PKGroupsController, PKPassGroupStackView, NSString;

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate> {

	NSArray* _passes;
	NSArray* _passDataArray;
	PKGroupsController* _groupsController;
	PKPassGroupStackView* _passGroupStackView;
	NSString* _personalizatonToken;
	unsigned long long _presentationSource;
	id<PKAddPassesCardStackViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPassesCardStackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKAddPassesCardStackViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesCardStackViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(unsigned long long)numberOfGroups;
-(void)_cancelButtonPressed:(id)arg1 ;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)indexOfSeparationGroup;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2 ;
-(void)resetBrightness;
-(id)initWithPasses:(id)arg1 passDataArray:(id)arg2 presentationSource:(unsigned long long)arg3 ;
-(void)evaluateBrightness;
-(unsigned long long)suppressedContent;
-(BOOL)supportsExternalPresentation;
-(BOOL)isInField;
-(void)reloadGroupsForGroupStackView:(id)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasDiscoveryContent;
-(void)_configureNavigationItemTitle;
-(void)_configureAddOrNextButtonItemAsPending:(BOOL)arg1 ;
-(void)_addButtonPressed:(id)arg1 ;
-(void)_nextButtonPressedForPersonalization:(id)arg1 ;
-(void)_nextButtonPressedForAutomaticPresentation:(id)arg1 ;
@end

