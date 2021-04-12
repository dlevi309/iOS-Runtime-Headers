/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface _HKDocumentImageView : UIView {

	UIImageView* _imageView;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;                   //@synthesize margins=_margins - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
@end

