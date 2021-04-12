/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSingleViewLayoutDelegate.h>
#import <libobjc.A.dylib/_PXAlbumSectionHeaderLayoutInteractionDelegate.h>
#import <libobjc.A.dylib/PXPhotosSectionHeaderLayoutProvider.h>

@protocol PXPhotosSectionHeaderLayoutViewProvider;
@class PXPhotosViewModel, UIImage, NSString;

@interface PXAlbumSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, _PXAlbumSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider> {

	PXPhotosViewModel* _viewModel;
	id<PXPhotosSectionHeaderLayoutViewProvider> _viewProvider;
	UIImage* _gradientImage;

}

@property (nonatomic,readonly) UIImage * gradientImage;                                                      //@synthesize gradientImage=_gradientImage - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)didTapSectionHeader:(id)arg1 ;
-(void)sectionHeader:(id)arg1 didToggleFiltersDisabled:(BOOL)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(id)configurationForSingleViewLayout:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 viewProvider:(id)arg2 ;
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outShouldFloat:(BOOL*)arg5 ;
-(void)sectionHeader:(id)arg1 didToggleSelectedState:(BOOL)arg2 ;
-(void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(PXSimpleIndexPath)arg4 hasSectionChanges:(BOOL)arg5 ;
-(CGSize)singleViewLayout:(id)arg1 desiredSizeForReferenceSize:(CGSize)arg2 ;
-(id<PXPhotosSectionHeaderLayoutViewProvider>)viewProvider;
-(UIImage *)gradientImage;
@end

