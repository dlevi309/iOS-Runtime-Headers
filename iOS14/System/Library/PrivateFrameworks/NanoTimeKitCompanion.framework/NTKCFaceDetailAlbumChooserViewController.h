/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCNavigationController.h>
#import <libobjc.A.dylib/_NTKCFaceDetailAlbumChooserViewControllerDelegate.h>

@protocol NTKCFaceDetailAlbumChooserViewControllerDelegate;
@class _NTKCFaceDetailAlbumChooserViewController, NTKCompanionSyncedAlbumEditor, NTKFace, NSString;

@interface NTKCFaceDetailAlbumChooserViewController : NTKCNavigationController <_NTKCFaceDetailAlbumChooserViewControllerDelegate> {

	_NTKCFaceDetailAlbumChooserViewController* _implementationVC;
	id<NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate;

}

@property (nonatomic,readonly) NTKCompanionSyncedAlbumEditor * editor; 
@property (nonatomic,readonly) NTKFace * face; 
@property (nonatomic,readonly) BOOL inGallery; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKCFaceDetailAlbumChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailAlbumChooserViewControllerDelegate>)arg1 ;
-(NTKFace *)face;
-(NTKCompanionSyncedAlbumEditor *)editor;
-(void)_albumChooserDidFinish:(id)arg1 ;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 ;
-(BOOL)inGallery;
@end

