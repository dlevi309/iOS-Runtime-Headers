/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>

@protocol PUEditableAsset;
@class PHAdjustmentData, PUEditableMediaProvider;

@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode {

	int _requestID;
	id<PUEditableAsset> _asset;
	PHAdjustmentData* _adjustmentData;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHAdjustmentData * adjustmentData;                    //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
-(PUEditableMediaProvider *)mediaProvider;
-(void)run;
-(void)didCancel;
-(id<PUEditableAsset>)asset;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(PHAdjustmentData *)adjustmentData;
-(void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2 ;
@end

