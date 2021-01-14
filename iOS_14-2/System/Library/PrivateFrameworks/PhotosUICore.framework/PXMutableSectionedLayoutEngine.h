/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property (nonatomic,retain) id<PXSectionedLayoutItem> seedItem; 
@property (assign,nonatomic) CGSize seedSize; 
@required
-(CGSize)seedSize;
-(id<PXSectionedLayoutItem>)seedItem;
-(void)setSeedSize:(CGSize)arg1;
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
-(void)setSeedItem:(id)arg1;

@end

