/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutableMomentShareStatus <NSObject>
@property (nonatomic,retain) id<PXDisplayMomentShare> momentShare; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> allAssetsFetchResult; 
@property (nonatomic,retain) id<PXSectionedFetchResult> participantsFetchResult; 
@required
-(id<PXDisplayAssetFetchResult>)allAssetsFetchResult;
-(id<PXDisplayAssetFetchResult>)copyingAssetsFetchResult;
-(void)setCopyingAssetsFetchResult:(id)arg1;
-(id<PXDisplayAssetFetchResult>)copiedAssetsFetchResult;
-(void)setCopiedAssetsFetchResult:(id)arg1;
-(void)setAllAssetsFetchResult:(id)arg1;
-(void)setParticipantsFetchResult:(id)arg1;
-(id<PXDisplayMomentShare>)momentShare;
-(void)setMomentShare:(id)arg1;
-(id<PXSectionedFetchResult>)participantsFetchResult;

@end

