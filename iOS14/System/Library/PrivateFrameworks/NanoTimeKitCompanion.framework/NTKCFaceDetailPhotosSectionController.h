/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionVerticalSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailCustomPhotosViewControllerDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailAlbumChooserViewControllerDelegate.h>

@class UIViewController, NTKCompanionCustomPhotosEditor, NTKCompanionSyncedAlbumEditor, NTKCompanionMemoriesEditor, NTKCompanionTransientCustomPhotosEditor, NSArray, NTKBasePhotosFaceView, NSString;

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate> {

	BOOL _canDeleteCustomPhotos;
	unsigned long long _currentContent;
	UIViewController* _parentViewController;
	NTKCompanionCustomPhotosEditor* _customPhotosEditor;
	NTKCompanionSyncedAlbumEditor* _syncedAlbumEditor;
	NTKCompanionMemoriesEditor* _memoriesEditor;
	NTKCompanionTransientCustomPhotosEditor* _transientEditor;
	NSArray* _externalAssets;

}

@property (nonatomic,retain) NTKBasePhotosFaceView * faceView; 
@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * customPhotosEditor;                    //@synthesize customPhotosEditor=_customPhotosEditor - In the implementation block
@property (nonatomic,retain) NTKCompanionSyncedAlbumEditor * syncedAlbumEditor;                      //@synthesize syncedAlbumEditor=_syncedAlbumEditor - In the implementation block
@property (nonatomic,retain) NTKCompanionMemoriesEditor * memoriesEditor;                            //@synthesize memoriesEditor=_memoriesEditor - In the implementation block
@property (nonatomic,retain) NTKCompanionTransientCustomPhotosEditor * transientEditor;              //@synthesize transientEditor=_transientEditor - In the implementation block
@property (nonatomic,retain) NSArray * externalAssets;                                               //@synthesize externalAssets=_externalAssets - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                         //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailPhotosSectionDelegate> delegate; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasPhotosSectionForFace:(id)arg1 forEditMode:(long long)arg2 ;
-(UIViewController *)parentViewController;
-(unsigned long long)contentType;
-(BOOL)hasChanges;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(id)_currentEditor;
-(void)albumChooserDidFinish:(id)arg1 ;
-(void)setSelectedOptions:(id)arg1 ;
-(void)setExternalAssets:(NSArray *)arg1 ;
-(void)faceDidChange;
-(void)faceDidChangeResourceDirectory;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 externalAssets:(id)arg6 ;
-(BOOL)canAddFace;
-(void)saveChangesWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)externalAssets;
-(id)_actionNameForOption:(id)arg1 ;
-(void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2 ;
-(BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2 ;
-(BOOL)_handleDidSelectOption:(id)arg1 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg1 ;
-(void)_updatePhotosSection;
-(void)setTransientEditor:(NTKCompanionTransientCustomPhotosEditor *)arg1 ;
-(void)_setPhotos:(id)arg1 ;
-(void)customPhotosControllerDidFinish:(id)arg1 ;
-(NTKCompanionCustomPhotosEditor *)customPhotosEditor;
-(void)setCustomPhotosEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(NTKCompanionSyncedAlbumEditor *)syncedAlbumEditor;
-(void)setSyncedAlbumEditor:(NTKCompanionSyncedAlbumEditor *)arg1 ;
-(NTKCompanionMemoriesEditor *)memoriesEditor;
-(void)setMemoriesEditor:(NTKCompanionMemoriesEditor *)arg1 ;
-(NTKCompanionTransientCustomPhotosEditor *)transientEditor;
@end

