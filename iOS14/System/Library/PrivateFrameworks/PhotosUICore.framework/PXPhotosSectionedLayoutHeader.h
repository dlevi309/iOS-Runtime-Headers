/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXPhotosLayoutSpec, PXSelectionSnapshot;


@protocol PXPhotosSectionedLayoutHeader <NSObject>
@property (nonatomic,retain) PXPhotosLayoutSpec * spec; 
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot; 
@required
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setSpec:(id)arg1;
-(BOOL)isInSelectMode;
-(PXPhotosLayoutSpec *)spec;
-(void)setIsInSelectMode:(BOOL)arg1;
-(void)setSelectionSnapshot:(id)arg1;

@end

