/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSArray, PUSessionInfo;


@protocol PUPhotosGridViewSupplementalToolbarDataSource <NSObject>
@property (getter=isAnyAssetSelected,nonatomic,readonly) BOOL anyAssetSelected; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
@property (nonatomic,readonly) PUSessionInfo * sessionInfo; 
@property (getter=isAnyAssetDownloading,nonatomic,readonly) BOOL anyAssetDownloading; 
@optional
-(BOOL)isAnyAssetDownloading;

@required
-(PUSessionInfo *)sessionInfo;
-(NSArray *)selectedAssets;
-(BOOL)isAnyAssetSelected;

@end

