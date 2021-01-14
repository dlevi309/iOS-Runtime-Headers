/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPhotosSectionBodyLayoutProvider <NSObject>
@property (assign,nonatomic,__weak) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate; 
@required
-(void)setInvalidationDelegate:(id)arg1;
-(BOOL)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;
-(void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;
-(id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)invalidationDelegate;
-(id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outWantsDecoration:(BOOL*)arg5;

@end

