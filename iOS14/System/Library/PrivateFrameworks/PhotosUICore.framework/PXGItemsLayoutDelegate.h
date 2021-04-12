/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGItemsLayoutDelegate <NSObject>
@optional
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
-(id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;
-(id)itemsLayout:(id)arg1 objectReferenceForAccessoryItem:(long long)arg2;
-(CGRect*)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX15*)arg2 forItemsInRange:(NSRange)arg3;
-(unsigned short)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2;

@end

