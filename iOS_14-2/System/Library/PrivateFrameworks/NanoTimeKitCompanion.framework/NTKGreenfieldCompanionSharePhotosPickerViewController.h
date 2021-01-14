/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol OS_dispatch_queue, NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;
@class NTKPhotosFace, NTKCompanionCustomPhotosEditor, NSMutableIndexSet, NSObject;

@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {

	NTKPhotosFace* _originalFace;
	NTKCompanionCustomPhotosEditor* _editor;
	NSMutableIndexSet* _selectedIndexes;
	NSObject*<OS_dispatch_queue> _queue;
	id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)_handleSelectionChanged;
-(id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_setupCollectionView;
-(void)_didTapDeselectAll;
-(void)_setupNavigationItems;
-(void)_handleEditorDidCreated;
-(void)_createPhotosEditorWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_didTapOnCancelButton;
-(void)_didTapOnDoneButton;
-(void)_handleDidFinishWithNewResourcesDirectory:(id)arg1 ;
-(id)_queue_fetchAssets;
-(id)_queue_fetchOptions;
-(id)initWithPhotosFace:(id)arg1 ;
@end

