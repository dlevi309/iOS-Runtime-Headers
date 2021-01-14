/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionMenuController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>

@protocol PXPhotosDetailsActionMenuDelegate;
@class PXCMMSendBackSuggestionSource, PHFetchResult, PXPhotoKitAssetCollectionActionManager, NSString;

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate> {

	id<PXPhotosDetailsActionMenuDelegate> _delegate;
	PXCMMSendBackSuggestionSource* _sendBackSuggestionSource;
	PHFetchResult* _people;
	PXPhotoKitAssetCollectionActionManager* _assetActionManager;

}

@property (nonatomic,readonly) PXPhotoKitAssetCollectionActionManager * assetActionManager;              //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsActionMenuDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXCMMSendBackSuggestionSource * sendBackSuggestionSource;                   //@synthesize sendBackSuggestionSource=_sendBackSuggestionSource - In the implementation block
@property (nonatomic,retain) PHFetchResult * people;                                                     //@synthesize people=_people - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)assetCollectionActionManager;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXPhotoKitAssetCollectionActionManager *)assetActionManager;
-(id<PXPhotosDetailsActionMenuDelegate>)delegate;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(void)setSendBackSuggestionSource:(PXCMMSendBackSuggestionSource *)arg1 ;
-(PXCMMSendBackSuggestionSource *)sendBackSuggestionSource;
-(void)setDelegate:(id<PXPhotosDetailsActionMenuDelegate>)arg1 ;
-(PHFetchResult *)people;
-(id)initWithActionManagers:(id)arg1 ;
-(id)availableActionTypes;
-(BOOL)shouldAllowPerformanceOfActionType:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2 ;
-(void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2 ;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

