/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@class CNAutocompleteResultsTableViewController, CNComposeRecipientTextView, UIScrollView, CNAutocompleteSearchManager, NSNumber, IDSBatchIDQueryController, NSMutableSet, CNContactPickerViewController, CNContactStore, NSArray, NSString;

@interface PUPhotoStreamRecipientViewController : UIViewController <UIPopoverPresentationControllerDelegate, IDSBatchIDQueryControllerDelegate, CNContactPickerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer> {

	CNAutocompleteResultsTableViewController* _searchResultsTableViewController;
	CNComposeRecipientTextView* _recipientView;
	UIScrollView* _recipientContainerView;
	CNAutocompleteSearchManager* _searchManager;
	NSNumber* _currentSearchTaskID;
	IDSBatchIDQueryController* _idsBatchIDQueryController;
	NSMutableSet* _validPhoneNumbers;
	CNContactPickerViewController* _contactPickerPresentedController;
	CGSize _recipientViewSize;
	double _lastHeight;
	CNContactStore* _contactStore;
	id _delegate;
	double _bottomTableOffset;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * recipients; 
@property (assign,nonatomic) double bottomTableOffset;                     //@synthesize bottomTableOffset=_bottomTableOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
-(NSArray *)recipients;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CNContactStore *)contactStore;
-(void)makeRecipientViewFirstResponder;
-(void)setBottomTableOffset:(double)arg1 ;
-(void)makeRecipientViewResignFirstResponder;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_setSearchResults:(id)arg1 ;
-(void)_searchForRecipientWithText:(id)arg1 ;
-(id)_selectedNormalizedPhoneForRecipient:(id)arg1 ;
-(void)_addRecipientForContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3 ;
-(void)_dismissContactPicker;
-(double)bottomTableOffset;
-(void)viewDidLoad;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)_searchManager;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

