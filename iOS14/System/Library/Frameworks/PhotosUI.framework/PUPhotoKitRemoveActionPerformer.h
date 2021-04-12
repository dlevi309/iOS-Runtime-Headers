/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>
#import <libobjc.A.dylib/PUAssetActionPerformerDelegate.h>

@class NSDictionary, PUPhotoKitTrashActionPerformer, NSString;

@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate> {

	NSDictionary* _fetchResultsByAssetCollection;
	PUPhotoKitTrashActionPerformer* _trashActionPerformer;

}

@property (nonatomic,retain) NSDictionary * fetchResultsByAssetCollection;                       //@synthesize fetchResultsByAssetCollection=_fetchResultsByAssetCollection - In the implementation block
@property (nonatomic,retain) PUPhotoKitTrashActionPerformer * trashActionPerformer;              //@synthesize trashActionPerformer=_trashActionPerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)_performTrashTask;
-(BOOL)shouldShowConfirmation;
-(void)performUserInteractionTask;
-(void)setFetchResultsByAssetCollection:(NSDictionary *)arg1 ;
-(PUPhotoKitTrashActionPerformer *)trashActionPerformer;
-(void)setTrashActionPerformer:(PUPhotoKitTrashActionPerformer *)arg1 ;
-(BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)fetchResultsByAssetCollection;
-(BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)performBackgroundTask;
@end

