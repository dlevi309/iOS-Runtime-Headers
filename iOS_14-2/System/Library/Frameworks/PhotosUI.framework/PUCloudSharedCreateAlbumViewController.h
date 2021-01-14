/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PUCloudSharedCreateAlbumViewControllerDelegate;
@class UINavigationItem, PUPhotoStreamRecipientViewController, NSString, NSArray;

@interface PUCloudSharedCreateAlbumViewController : UIViewController {

	UINavigationItem* _navItem;
	PUPhotoStreamRecipientViewController* _composeRecipientController;
	id<PUCloudSharedCreateAlbumViewControllerDelegate> _delegate;
	NSString* _nextButtonTitle;
	NSArray* __albumRecipients;

}

@property (setter=_setAlbumRecipients:,nonatomic,retain) NSArray * _albumRecipients;                          //@synthesize _albumRecipients=__albumRecipients - In the implementation block
@property (assign,nonatomic,__weak) id<PUCloudSharedCreateAlbumViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * nextButtonTitle;                                                      //@synthesize nextButtonTitle=_nextButtonTitle - In the implementation block
@property (nonatomic,readonly) NSArray * albumRecipients; 
-(id)navigationItem;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_validateRecipientsToAdd:(id)arg1 ;
-(id)init;
-(id<PUCloudSharedCreateAlbumViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUCloudSharedCreateAlbumViewControllerDelegate>)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(NSArray *)albumRecipients;
-(void)_handleCompletionWithSuccess:(BOOL)arg1 ;
-(void)_saveUserEnterredInfo;
-(NSString *)nextButtonTitle;
-(void)setNextButtonTitle:(NSString *)arg1 ;
-(NSArray *)_albumRecipients;
-(void)_setAlbumRecipients:(id)arg1 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
@end

