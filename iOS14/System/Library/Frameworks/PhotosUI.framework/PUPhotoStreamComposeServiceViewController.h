/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXPhotoStreamComposeServiceViewController.h>
#import <libobjc.A.dylib/PUPhotoStreamsAlbumsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/PUPhotoStreamCreateTitleDelegate.h>
#import <libobjc.A.dylib/PUCloudSharedCreateAlbumViewControllerDelegate.h>
#import <libobjc.A.dylib/SLSheetViewHostProtocol.h>

@protocol PLAlbumProtocol, PLAlbumContainer;
@class NSObject, NSArray, NSString;

@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol> {

	struct {
		unsigned hasDidPost : 1;
		unsigned hasDidCancel : 1;
	}  _delegateFlags;
	NSObject*<PLAlbumProtocol> _selectedAlbum;
	NSArray* _actions;
	NSObject*<PLAlbumContainer> _albumList;
	BOOL _inCreateNewAlbum;
	NSArray* _recipients;
	BOOL _shouldShowPost;
	NSString* _itemCountString;
	NSString* _startingContentText;

}

@property (nonatomic,copy,readonly) NSString * startingContentText;              //@synthesize startingContentText=_startingContentText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDidPost;
-(void)setDelegate:(id)arg1 ;
-(void)controller:(id)arg1 didSelectAlbum:(id)arg2 ;
-(void)controllerWillCreateNewAlbum:(id)arg1 ;
-(void)userDidCancel;
-(void)titleController:(id)arg1 didSetTitle:(id)arg2 ;
-(id)sheetActions;
-(void)titleControllerDidCancel:(id)arg1 ;
-(id)_imageFromStreamShareSource:(id)arg1 ;
-(id)serviceIconImage;
-(id)albumListAction;
-(void)shouldShowNetworkActivityIndicator:(id)arg1 ;
-(void)_pushTitleController;
-(BOOL)isContentValid;
-(NSString *)startingContentText;
-(void)viewDidLoad;
-(void)setSourcesToShare:(id)arg1 ;
-(void)albumStreamingCreateViewController:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)setAssetsToShare:(id)arg1 ;
-(id)initWithStartingContentText:(id)arg1 ;
-(void)send;
-(void)failWithError:(id)arg1 ;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

