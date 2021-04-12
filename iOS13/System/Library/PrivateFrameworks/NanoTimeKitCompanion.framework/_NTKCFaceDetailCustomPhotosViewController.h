/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;
@class UIBarButtonItem, NSArray, NSMutableIndexSet, NTKCompanionCustomPhotosEditor, NTKFace, NTKBasePhotosFaceView;

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController {

	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _selectAllButton;
	UIBarButtonItem* _deselectAllButton;
	UIBarButtonItem* _deleteButton;
	UIBarButtonItem* _addButton;
	UIBarButtonItem* _spinnerButton;
	NSArray* _defaultToolBarItems;
	NSArray* _editingToolBarItems;
	NSMutableIndexSet* _selectedIndexes;
	BOOL _deleteConfirmed;
	BOOL _inGallery;
	BOOL _externalImagesSet;
	NTKCompanionCustomPhotosEditor* _editor;
	NTKFace* _face;
	id<NTKCFaceDetailCustomPhotosViewControllerDelegate> _delegate;
	NTKBasePhotosFaceView* _faceView;

}

@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                    //@synthesize face=_face - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                    //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,retain) NTKBasePhotosFaceView * faceView;                                                  //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) BOOL externalImagesSet;                                                            //@synthesize externalImagesSet=_externalImagesSet - In the implementation block
-(id<NTKCFaceDetailCustomPhotosViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailCustomPhotosViewControllerDelegate>)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_updateButtons;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)_updateTitle;
-(NTKCompanionCustomPhotosEditor *)editor;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(void)_donePressed;
-(NTKBasePhotosFaceView *)faceView;
-(void)setFaceView:(NTKBasePhotosFaceView *)arg1 ;
-(void)_deletePressed;
-(void)setInGallery:(BOOL)arg1 ;
-(BOOL)inGallery;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 faceView:(id)arg4 externalImagesSet:(BOOL)arg5 ;
-(void)setExternalImagesSet:(BOOL)arg1 ;
-(void)_savePressed;
-(void)_selectPressed;
-(void)_selectAllPressed;
-(void)_addPressed;
-(void)_updateButtonsForSelectionChanged;
-(id)_currentSelectAllButton;
-(BOOL)_allPhotosSelected;
-(void)_selectAllPhotos;
-(BOOL)externalImagesSet;
@end

