/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <PhotosUI/PUAlbumListViewController.h>

@protocol _NTKCFaceDetailAlbumChooserViewControllerDelegate;
@class NSMutableArray, PHAssetCollection, NTKCompanionSyncedAlbumEditor, NTKFace;

@interface _NTKCFaceDetailAlbumChooserViewController : PUAlbumListViewController {

	NSMutableArray* _allAlbums;
	PHAssetCollection* _syncedAlbum;
	PHAssetCollection* _selectedAlbum;
	BOOL _inGallery;
	NTKCompanionSyncedAlbumEditor* _editor;
	NTKFace* _face;
	id<_NTKCFaceDetailAlbumChooserViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NTKCompanionSyncedAlbumEditor * editor;                                             //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                     //@synthesize face=_face - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                     //@synthesize inGallery=_inGallery - In the implementation block
@property (assign,nonatomic,__weak) id<_NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id)_title;
-(void)setEditor:(NTKCompanionSyncedAlbumEditor *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<_NTKCFaceDetailAlbumChooserViewControllerDelegate>)delegate;
-(void)_reloadData;
-(void)setFace:(NTKFace *)arg1 ;
-(void)setDelegate:(id<_NTKCFaceDetailAlbumChooserViewControllerDelegate>)arg1 ;
-(NTKFace *)face;
-(BOOL)showAddNewAlbumPlaceholder;
-(BOOL)_shouldShowAggregateItem;
-(BOOL)shouldShowAllPhotosItem;
-(void)viewDidLoad;
-(NTKCompanionSyncedAlbumEditor *)editor;
-(void)sessionInfoStatusDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setInGallery:(BOOL)arg1 ;
-(void)_set_allAlbums;
-(void)_set_selectedAlbum;
-(void)_appendCollectionsWithType:(long long)arg1 subtype:(long long)arg2 ;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 ;
-(BOOL)inGallery;
@end

