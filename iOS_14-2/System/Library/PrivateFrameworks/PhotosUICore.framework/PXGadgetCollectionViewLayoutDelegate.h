/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXGadgetDataSource;


@protocol PXGadgetCollectionViewLayoutDelegate <NSObject>
@property (nonatomic,readonly) PXGadgetDataSource * dataSource; 
@property (nonatomic,readonly) UIEdgeInsets insetsForSectionHeaders; 
@property (nonatomic,readonly) BOOL isTogglingSidebarNoRotating; 
@required
-(UIEdgeInsets)insetsForSectionHeaders;
-(BOOL)isTogglingSidebarNoRotating;
-(PXGadgetDataSource *)dataSource;

@end

