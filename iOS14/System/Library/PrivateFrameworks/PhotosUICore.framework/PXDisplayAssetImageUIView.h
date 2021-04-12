/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIImageView, NSString;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver> {

	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageProgressDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)isDisplayingFullQualityContentDidChange;
-(void)_updateImageViewFilters;
-(void)imageDidChange;
-(double)loadingProgress;
-(long long)playbackStyle;
-(id)contentView;
@end

