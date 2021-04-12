/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPresentedGridLayout <NSObject>
@property (nonatomic,readonly) long long presentedNumberOfRows; 
@required
-(long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2;
-(long long)presentedNumberOfColumnsAtRow:(long long)arg1;
-(SCD_Struct_PX29*)presentedItemLocationForItemAtIndex:(long long)arg1;
-(id)presentedItemsInRect:(CGRect)arg1;
-(long long)itemIndexForPresentedItemIndex:(long long)arg1;
-(long long)presentedNumberOfRows;
-(CGRect*)presentedRectForItemAtIndex:(long long)arg1;
-(id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;

@end

