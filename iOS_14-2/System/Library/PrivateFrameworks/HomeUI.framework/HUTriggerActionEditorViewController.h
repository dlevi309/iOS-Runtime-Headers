/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUInstructionsTableViewController.h>
#import <libobjc.A.dylib/WFHomeComposeViewControllerDelegate.h>

@class HUForwardingTriggerActionBuilderDelegate, HUTriggerActionEditorContentViewController, HFTriggerBuilder, NSString;

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController <WFHomeComposeViewControllerDelegate> {

	HUForwardingTriggerActionBuilderDelegate* _forwardingTriggerActionBuilderDelegate;

}

@property (nonatomic,readonly) HUTriggerActionEditorContentViewController * actionEditorContentViewController; 
@property (nonatomic,retain) HUForwardingTriggerActionBuilderDelegate * forwardingTriggerActionBuilderDelegate;              //@synthesize forwardingTriggerActionBuilderDelegate=_forwardingTriggerActionBuilderDelegate - In the implementation block
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder; 
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)adoptsDefaultGridLayoutMargins;
+(id)createTriggerActionEditorViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(HFTriggerBuilder *)triggerBuilder;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(void)setForwardingTriggerActionBuilderDelegate:(HUForwardingTriggerActionBuilderDelegate *)arg1 ;
-(HUForwardingTriggerActionBuilderDelegate *)forwardingTriggerActionBuilderDelegate;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2 ;
-(void)_showShortcutsEditorIfPossible;
-(void)_showShortcutsEditor;
-(void)_informUserShortcutsAreNotSupportedInThisHome;
-(HUTriggerActionEditorContentViewController *)actionEditorContentViewController;
@end

