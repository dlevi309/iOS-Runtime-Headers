/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)imageView;
-(UIEdgeInsets)margins;
-(void)layoutSubviews;
-(void)setMargins:(UIEdgeInsets)arg1 ;
@end

