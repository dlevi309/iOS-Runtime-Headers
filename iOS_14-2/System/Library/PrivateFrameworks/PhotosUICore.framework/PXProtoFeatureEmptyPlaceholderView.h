/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UILabel;

@interface PXProtoFeatureEmptyPlaceholderView : PXProtoFeaturePlaceholderView {

	UILabel* _label;

}
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabelText;
-(BOOL)wantsContentView;
-(void)statusDescriptionDidChange;
@end

