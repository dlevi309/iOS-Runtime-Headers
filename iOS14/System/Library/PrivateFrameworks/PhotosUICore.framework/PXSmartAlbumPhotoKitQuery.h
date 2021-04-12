/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSmartAlbumConditionDelegate.h>
#import <libobjc.A.dylib/PXAssetCountObserverDelegate.h>
#import <libobjc.A.dylib/PXSmartAlbumQuery.h>

@protocol PXSmartAlbumQueryDelegate;
@class NSString, NSArray, PXLabeledValue, NSMutableArray, PHAssetCollection, PHCollectionList, PHPhotoLibrary, PXSmartAlbumPhotoKitEditingContext, PLQuery, PXAssetCountObserver;

@interface PXSmartAlbumPhotoKitQuery : NSObject <PXSmartAlbumConditionDelegate, PXAssetCountObserverDelegate, PXSmartAlbumQuery> {

	NSMutableArray* _conditions;
	PHAssetCollection* _albumToEdit;
	PHCollectionList* _collectionList;
	PHPhotoLibrary* _photoLibrary;
	PXSmartAlbumPhotoKitEditingContext* _editingContext;
	PLQuery* _query;
	PXAssetCountObserver* _assetCountObserver;
	BOOL _canPersistChanges;
	NSString* _title;
	NSArray* _conjunctionValues;
	PXLabeledValue* _conjunctionValue;
	NSString* _statusString;
	id<PXSmartAlbumQueryDelegate> _delegate;

}

@property (assign,nonatomic) BOOL canPersistChanges;                                     //@synthesize canPersistChanges=_canPersistChanges - In the implementation block
@property (nonatomic,retain) NSString * statusString;                                    //@synthesize statusString=_statusString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * conjunctionValues;                              //@synthesize conjunctionValues=_conjunctionValues - In the implementation block
@property (nonatomic,retain) PXLabeledValue * conjunctionValue;                          //@synthesize conjunctionValue=_conjunctionValue - In the implementation block
@property (nonatomic,retain) NSArray * conditions;                                       //@synthesize conditions=_conditions - In the implementation block
@property (assign,nonatomic,__weak) id<PXSmartAlbumQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_createSmartAlbumWithTitle:(id)arg1 inCollectionList:(id)arg2 query:(id)arg3 photoLibrary:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)_editSmartAlbum:(id)arg1 title:(id)arg2 query:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)queryWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)init;
-(id<PXSmartAlbumQueryDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateStatusString;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<PXSmartAlbumQueryDelegate>)arg1 ;
-(void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2 ;
-(NSString *)statusString;
-(id)addNewConditionAfterCondition:(id)arg1 ;
-(id)replaceCondition:(id)arg1 withConditionOfType:(long long)arg2 ;
-(void)removeCondition:(id)arg1 ;
-(NSArray *)conjunctionValues;
-(PXLabeledValue *)conjunctionValue;
-(void)setConjunctionValue:(PXLabeledValue *)arg1 ;
-(BOOL)canPersistChanges;
-(void)conditionDidChange:(id)arg1 ;
-(id)_initWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 query:(id)arg4 editingContext:(id)arg5 conditions:(id)arg6 ;
-(void)setCanPersistChanges:(BOOL)arg1 ;
-(void)_updateCanPersistChanges;
-(void)_updateAssetCountObserver;
-(void)_updateQueryFromConditions;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)title;
@end

