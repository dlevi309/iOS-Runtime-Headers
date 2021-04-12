/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/SLMicroBlogMentionsDelegate.h>
#import <libobjc.A.dylib/SLMicroBlogAccountsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/SLSheetPlaceViewControllerDelegate.h>

@protocol SLMicroBlogSheetDelegate;
@class NSObject, NSString, SLMicroBlogMentionsViewController, NSArray, SLMicroBlogUserRecord, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, SLPlace;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {

	NSObject*<SLMicroBlogSheetDelegate> _microBlogSheetDelegate;
	NSString* _serviceAccountTypeIdentifier;
	SLMicroBlogMentionsViewController* _mentionsViewController;
	unsigned long long _mentionStartLocation;
	BOOL _mentionPendingStart;
	BOOL _rotatedDuringAccountsPopover;
	BOOL _usingLocationOverride;
	NSArray* _accountUserRecords;
	NSArray* _accountIdentifiers;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	SLComposeSheetConfigurationItem* _accountConfigurationItem;
	SLComposeSheetConfigurationItem* _locationConfigurationItem;
	SLMicroBlogAccountsTableViewController* _accountViewController;
	SLSheetPlaceViewController* _placeViewController;
	SLPlace* _currentPlace;
	long long _shortenedURLCost;
	long long _maxURLLength;
	BOOL _isPresentingPlaces;

}

@property (__weak) NSObject*<SLMicroBlogSheetDelegate> microBlogSheetDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceBundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)appWillEnterForeground:(id)arg1 ;
-(BOOL)isContentValid;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)placeViewController:(id)arg1 willDisappear:(BOOL)arg2 ;
-(void)updateShortenedURLCost;
-(NSObject*<SLMicroBlogSheetDelegate>)microBlogSheetDelegate;
-(void)noteLocationInfoChanged:(id)arg1 ;
-(void)updateGeotagStatus;
-(void)_beginLoadingAccountProfileImages;
-(void)_presentAccountPickerController;
-(void)setGeotagStatus:(int)arg1 ;
-(void)_presentPlaceViewController;
-(void)_performLocationAction;
-(id)_accountConfigurationItem;
-(id)_locationConfigurationItem;
-(void)_presentNoAccountsAlertIfNecessaryAndReady;
-(void)presentNoAccountsAlert;
-(int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2 ;
-(int)_charactersRemainingWithText:(id)arg1 ;
-(id)completeText:(id)arg1 withAttachments:(id)arg2 ;
-(long long)_characterCountForText:(id)arg1 ;
-(BOOL)_countMediaAttachmentsTowardCharacterCount;
-(id)_placeViewController;
-(id)_mentionsSearchString;
-(void)_presentMentionsViewControllerWithSearchString:(id)arg1 ;
-(void)applyMention:(id)arg1 ;
-(void)_dismissMentionsViewController;
-(void)didSelectPost;
-(void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1 ;
-(void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2 ;
-(void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2 ;
-(id)configurationItems;
-(void)setMicroBlogSheetDelegate:(NSObject*<SLMicroBlogSheetDelegate>)arg1 ;
-(void)presentationAnimationDidFinish;
@end

