/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSArray;

@interface PXPeopleDetailStatusOverlayView : UIView {

	UIImageView* _keyAssetImageView;
	UILabel* _messageField;
	UILabel* _subtitleField;
	NSArray* _viewConstraints;

}

@property (nonatomic,copy) NSArray * viewConstraints;                        //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) UIImageView * keyAssetImageView;              //@synthesize keyAssetImageView=_keyAssetImageView - In the implementation block
@property (nonatomic,readonly) UILabel * messageField;                       //@synthesize messageField=_messageField - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleField;                      //@synthesize subtitleField=_subtitleField - In the implementation block
-(void)updateConstraints;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyImage:(id)arg2 message:(id)arg3 subtitleText:(id)arg4 ;
-(double)_imageHeightMultiplier;
-(UIImageView *)keyAssetImageView;
-(UILabel *)messageField;
-(UILabel *)subtitleField;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
@end

