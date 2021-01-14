/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXAssetsSharingHelper <NSObject>
@property (assign,nonatomic,__weak) id<PXAssetsSharingHelperDelegate> delegate; 
@required
+(void)copyAssets:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<PXAssetsSharingHelperDelegate>)delegate;
-(void)copyAssets:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(/*^block*/id)arg2;

@end

