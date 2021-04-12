/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset;
@class PHFetchResult, PXPhotosDataSource, NSString, PUPhotoSelectionManager;

@interface PUActivitySharingViewModel : PXObservable {

	BOOL _actionSheet;
	PHFetchResult* _collectionListFetchResult;
	PXPhotosDataSource* _photosDataSource;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	id<PXDisplayAsset> _keyAsset;
	long long _sourceOrigin;
	PUPhotoSelectionManager* _selectionManager;

}

@property (nonatomic,retain) PUPhotoSelectionManager * selectionManager;               //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult;              //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                  //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (getter=isActionSheet,nonatomic,readonly) BOOL actionSheet;                  //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;                      //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) long long sourceOrigin;                                 //@synthesize sourceOrigin=_sourceOrigin - In the implementation block
-(PUPhotoSelectionManager *)selectionManager;
-(PXPhotosDataSource *)photosDataSource;
-(NSString *)localizedTitle;
-(id<PXDisplayAsset>)keyAsset;
-(id)init;
-(NSString *)localizedSubtitle;
-(PHFetchResult *)collectionListFetchResult;
-(void)setSelectionManager:(PUPhotoSelectionManager *)arg1 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)initWithActivitySharingConfiguration:(id)arg1 ;
-(BOOL)isActionSheet;
-(long long)sourceOrigin;
-(void)setActionSheet:(BOOL)arg1 ;
@end

