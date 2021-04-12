/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSArray;


@protocol PXTilingControllerCompositionInput <NSObject>
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) NSArray * tilingControllersRequestingFocus; 
@property (nonatomic,readonly) NSArray * invalidationContexts; 
@required
-(UIEdgeInsets)contentInset;
-(CGSize)referenceSize;
-(CGRect*)contentBoundsForTilingController:(id)arg1;
-(CGRect*)scrollBoundsForTilingController:(id)arg1;
-(id)scrollInfoForTilingController:(id)arg1;
-(CGPoint*)preferredOriginForTilingController:(id)arg1;
-(CGPoint*)originForTilingController:(id)arg1;
-(CGRect*)convertRect:(CGRect)arg1 fromTilingController:(id)arg2;
-(id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;
-(NSArray *)tilingControllersRequestingFocus;
-(NSArray *)invalidationContexts;

@end

