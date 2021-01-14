/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModel.h>

@protocol PUDisplayAsset;
@class PUOperationStatus, NSProgress, PUAssetSharedViewModelChange;

@interface PUAssetSharedViewModel : PUViewModel {

	BOOL _needsDeferredProcessing;
	unsigned short _deferredProcessingNeeded;
	id<PUDisplayAsset> _asset;
	PUOperationStatus* _loadingStatus;
	NSProgress* _saveProgress;
	long long _saveState;
	long long _flippingFullSizeRenderState;

}

@property (nonatomic,readonly) PUAssetSharedViewModelChange * currentChange; 
@property (assign,nonatomic) BOOL needsDeferredProcessing;                                //@synthesize needsDeferredProcessing=_needsDeferredProcessing - In the implementation block
@property (assign,nonatomic) unsigned short deferredProcessingNeeded;                     //@synthesize deferredProcessingNeeded=_deferredProcessingNeeded - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PUOperationStatus * loadingStatus;                           //@synthesize loadingStatus=_loadingStatus - In the implementation block
@property (nonatomic,retain) NSProgress * saveProgress;                                   //@synthesize saveProgress=_saveProgress - In the implementation block
@property (assign,nonatomic) long long saveState;                                         //@synthesize saveState=_saveState - In the implementation block
@property (assign,nonatomic) long long flippingFullSizeRenderState;                       //@synthesize flippingFullSizeRenderState=_flippingFullSizeRenderState - In the implementation block
-(void)setLoadingStatus:(PUOperationStatus *)arg1 ;
-(long long)saveState;
-(void)registerChangeObserver:(id)arg1 ;
-(PUAssetSharedViewModelChange *)currentChange;
-(void)setSaveState:(long long)arg1 ;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(id<PUDisplayAsset>)asset;
-(void)setFlippingFullSizeRenderState:(long long)arg1 ;
-(long long)flippingFullSizeRenderState;
-(id)initWithAsset:(id)arg1 ;
-(NSProgress *)saveProgress;
-(unsigned short)deferredProcessingNeeded;
-(void)setDeferredProcessingNeeded:(unsigned short)arg1 ;
-(PUOperationStatus *)loadingStatus;
-(id)newViewModelChange;
-(BOOL)needsDeferredProcessing;
-(void)setSaveProgress:(NSProgress *)arg1 ;
-(void)setNeedsDeferredProcessing:(BOOL)arg1 ;
@end

