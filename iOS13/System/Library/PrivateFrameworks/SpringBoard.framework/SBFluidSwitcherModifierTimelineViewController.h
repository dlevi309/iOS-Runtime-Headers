/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBFluidSwitcherModifierTimelineEntryViewDelegate.h>

@class NSMutableArray, UIScrollView, UIButton, UINavigationController, _SBModifierTimelineDetailViewController, NSString;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <_SBFluidSwitcherModifierTimelineEntryViewDelegate> {

	NSMutableArray* _entryViews;
	UIScrollView* _scrollView;
	UIButton* _clearButton;
	UINavigationController* _navigationController;
	_SBModifierTimelineDetailViewController* _detailViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEntry:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_reset:(id)arg1 ;
-(void)didSelectEntryView:(id)arg1 ;
@end

