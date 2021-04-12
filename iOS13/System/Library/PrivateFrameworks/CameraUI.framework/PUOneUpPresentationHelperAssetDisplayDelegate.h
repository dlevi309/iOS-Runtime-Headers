/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
@optional
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;

@required
-(CGRect*)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4;

@end

