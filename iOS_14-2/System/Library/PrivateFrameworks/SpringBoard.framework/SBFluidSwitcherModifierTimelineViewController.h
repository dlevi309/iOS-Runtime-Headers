/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)addEntry:(id)arg1 ;
-(void)_reset:(id)arg1 ;
-(void)viewDidLoad;
-(void)didSelectEntryView:(id)arg1 ;
@end

