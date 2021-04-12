/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol PXSampleGadgetViewDelegate;
@class UIColor, UIView;

@interface PXSampleGadgetView : UICollectionViewCell {

	UIColor* _color;
	id<PXSampleGadgetViewDelegate> _delegate;
	UIView* _colorView;

}

@property (nonatomic,retain) UIView * colorView;                                          //@synthesize colorView=_colorView - In the implementation block
@property (assign,nonatomic,__weak) id<PXSampleGadgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * color;                                             //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXSampleGadgetViewDelegate>)delegate;
-(UIColor *)color;
-(UIView *)colorView;
-(void)setDelegate:(id<PXSampleGadgetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(void)setColorView:(UIView *)arg1 ;
@end

