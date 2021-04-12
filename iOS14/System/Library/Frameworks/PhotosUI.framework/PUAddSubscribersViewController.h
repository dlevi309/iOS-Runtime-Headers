/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>

@class PUPhotoStreamRecipientViewController, UIBarButtonItem, PLCloudSharedAlbum;

@interface PUAddSubscribersViewController : UIViewController {

	PUPhotoStreamRecipientViewController* _composeRecipientController;
	UIBarButtonItem* _addButton;
	PLCloudSharedAlbum* _album;

}

@property (nonatomic,readonly) PLCloudSharedAlbum * album;              //@synthesize album=_album - In the implementation block
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithSharedStream:(id)arg1 ;
-(void)_addButtonHandler;
-(void)_cancelButtonHandler;
-(void)_saveAndDismiss;
-(BOOL)_validateRecipientsToAdd:(id)arg1 ;
-(void)recipientViewControllerDidAddRecipient:(id)arg1 ;
-(void)recipientViewControllerDidRemoveRecipient:(id)arg1 ;
-(void)recipientViewController:(id)arg1 didEnterText:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)viewDidLoad;
-(PLCloudSharedAlbum *)album;
-(void)loadView;
-(id)contentScrollView;
-(void)dealloc;
@end

