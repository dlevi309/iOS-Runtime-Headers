/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFAlertPresenter.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString, NSArray, WFAlertButton;

@interface WFItemPickerViewController : UITableViewController <WFAlertPresenter, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	NSString* _prompt;
	NSArray* _allButtons;
	NSArray* _buttons;
	NSArray* _trailingNavigationButtons;
	WFAlertButton* _leadingNavigationButton;

}

@property (nonatomic,copy) NSString * prompt;                                      //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) NSArray * allButtons;                                   //@synthesize allButtons=_allButtons - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSArray * trailingNavigationButtons;                    //@synthesize trailingNavigationButtons=_trailingNavigationButtons - In the implementation block
@property (nonatomic,retain) WFAlertButton * leadingNavigationButton;              //@synthesize leadingNavigationButton=_leadingNavigationButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentAlert:(id)arg1 withUserInterface:(id)arg2 ;
-(void)cancel;
-(BOOL)accessibilityPerformEscape;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)updatePreferredContentSize;
-(id)initWithAlert:(id)arg1 ;
-(void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3 ;
-(void)dismissAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setButtons:(id)arg1 forAlert:(id)arg2 ;
-(void)trailingNavigationButtonTapped:(id)arg1 ;
-(void)reloadNavigationItems;
-(id)paletteForPrompt:(id)arg1 ;
-(id)filteredButtons;
-(NSArray *)allButtons;
-(void)setAllButtons:(NSArray *)arg1 ;
-(NSArray *)trailingNavigationButtons;
-(void)setTrailingNavigationButtons:(NSArray *)arg1 ;
-(WFAlertButton *)leadingNavigationButton;
-(void)setLeadingNavigationButton:(WFAlertButton *)arg1 ;
@end

