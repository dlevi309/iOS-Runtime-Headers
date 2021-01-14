/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
*/

#import <WorkflowUICore/WorkflowUICore-Structs.h>
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
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)buttons;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)viewDidLoad;
-(void)updatePreferredContentSize;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)cancel;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithAlert:(id)arg1 ;
-(void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3 ;
-(void)dismissAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setButtons:(id)arg1 forAlert:(id)arg2 ;
-(NSArray *)allButtons;
-(void)setAllButtons:(NSArray *)arg1 ;
-(void)trailingNavigationButtonTapped:(id)arg1 ;
-(void)reloadNavigationItems;
-(id)paletteForPrompt:(id)arg1 ;
-(id)filteredButtons;
-(NSArray *)trailingNavigationButtons;
-(void)setTrailingNavigationButtons:(NSArray *)arg1 ;
-(WFAlertButton *)leadingNavigationButton;
-(void)setLeadingNavigationButton:(WFAlertButton *)arg1 ;
@end

