/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<PKAddPassesCardStackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id<PKAddPassesCardStackViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PKAddPassesCardStackViewControllerDelegate>)arg1 ;
-(unsigned long long)indexOfSeparationGroup;
-(void)_configureNavigationItemTitle;
-(void)_configureAddOrNextButtonItemAsPending:(BOOL)arg1 ;
-(void)_nextButtonPressedForPersonalization:(id)arg1 ;
-(void)_nextButtonPressedForAutomaticPresentation:(id)arg1 ;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)viewDidLoad;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)_addButtonPressed:(id)arg1 ;
-(unsigned long long)suppressedContent;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(void)resetBrightness;
-(id)initWithPasses:(id)arg1 passDataArray:(id)arg2 presentationSource:(unsigned long long)arg3 ;
-(void)evaluateBrightness;
-(BOOL)isInField;
-(BOOL)supportsExternalPresentation;
-(void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2 ;
-(void)reloadGroupsForGroupStackView:(id)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasDiscoveryContent;
-(unsigned long long)numberOfGroups;
-(void)dealloc;
@end

