/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
@optional
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;

@required
-(CGRect*)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4;

@end

