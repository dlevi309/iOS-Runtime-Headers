/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXCollectionListActionPerformer.h>
#import <libobjc.A.dylib/PUAlbumStreamActivityDelegate.h>

@class UIAlertAction, PUAlbumStreamActivity, NSString;

@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PUAlbumStreamActivityDelegate> {

	UIAlertAction* _createAlbumAlertAction;
	PUAlbumStreamActivity* __albumStreamActivity;

}

@property (assign,setter=_setCreateAlbumAlertAction:,nonatomic,__weak) UIAlertAction * createAlbumAlertAction;              //@synthesize createAlbumAlertAction=_createAlbumAlertAction - In the implementation block
@property (nonatomic,retain) PUAlbumStreamActivity * _albumStreamActivity;                                                  //@synthesize _albumStreamActivity=__albumStreamActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUAlbumStreamActivity *)_albumStreamActivity;
-(void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(void)albumStreamActivity:(id)arg1 presentViewController:(id)arg2 ;
-(void)albumStreamActivity:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateCreateAlbumTextField:(id)arg1 ;
-(id)_validateNewCollectionTitle:(id)arg1 ;
-(void)handleCreateSharedAlbum;
-(void)_setCreateAlbumAlertAction:(id)arg1 ;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentImagePickerWithAlbumName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIAlertAction *)createAlbumAlertAction;
-(void)set_albumStreamActivity:(PUAlbumStreamActivity *)arg1 ;
@end

