/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPhotosSectionHeaderLayoutProvider <NSObject>
@optional
-(id)floatingHeaderSnapshotForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3;

@required
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outShouldFloat:(BOOL*)arg5;
-(void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(PXSimpleIndexPath)arg4 hasSectionChanges:(BOOL)arg5;

@end

