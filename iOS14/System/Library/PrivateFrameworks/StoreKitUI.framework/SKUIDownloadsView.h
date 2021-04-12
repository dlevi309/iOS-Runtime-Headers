/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIDownloadsView : UIView {

	UIView* _contentView;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
@end

