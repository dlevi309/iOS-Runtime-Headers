/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXInboxProviderSource <NSObject>
@property (nonatomic,readonly) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider; 
@property (nonatomic,readonly) id<PXInboxModelMediaProvider> mediaProvider; 
@property (nonatomic,readonly) id<PXInboxModelTitleProvider> titleProvider; 
@required
-(id<PXInboxModelMediaProvider>)mediaProvider;
-(id<PXInboxModelDetailViewControllerProvider>)detailViewControllerProvider;
-(id<PXInboxModelTitleProvider>)titleProvider;

@end

