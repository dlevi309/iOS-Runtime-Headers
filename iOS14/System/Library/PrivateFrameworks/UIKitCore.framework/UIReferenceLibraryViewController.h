/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, NSArray, UINavigationController, UITableViewController, UIViewController;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

	NSString* _term;
	NSArray* _definitionValues;
	UINavigationController* _baseNavController;
	UITableViewController* _multiDefViewController;
	UIViewController* _longDefViewController;
	long long _oldPopoverStyle;
	BOOL _enableRotation;
	BOOL _previousIgnoreOrientation;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_colorAttributes;
+(id)_diddlyDoViewLineColor;
+(id)_defaultButtonImage;
+(id)_localizedDictionaryTitleAttributes;
+(id)_dictionaryDefinitionAttributes;
+(BOOL)_shouldShowDefineForTerm:(id)arg1 ;
+(BOOL)_shouldShowDefineForTermOfLength:(long long)arg1 ;
+(BOOL)dictionaryHasDefinitionForTerm:(id)arg1 ;
+(id)_backgroundColor;
+(id)_foregroundColor;
+(id)_pressedButtonImage;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)_setPopoverController:(id)arg1 ;
-(void)viewDidLoad;
-(id)_colorAttributes;
-(void)_searchWeb:(id)arg1 ;
-(id)_diddlyDoViewLineColor;
-(void)pushDownloadManager:(id)arg1 ;
-(BOOL)enableRotation;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnableRotation:(BOOL)arg1 ;
-(void)_dismissModalReferenceView:(id)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)_defaultButtonImage;
-(void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1 ;
-(void)_installRequiredElementsOnViewController:(id)arg1 ;
-(id)_localizedDictionaryTitleAttributes;
-(id)_dictionaryDefinitionAttributes;
-(id)_backgroundColor;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithTerm:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_foregroundColor;
-(id)_pressedButtonImage;
@end

