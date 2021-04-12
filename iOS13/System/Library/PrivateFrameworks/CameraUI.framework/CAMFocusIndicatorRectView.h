/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView {

	long long _style;
	UIImageView* __imageView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                   //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive; 
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing; 
-(long long)style;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(id)initWithStyle:(long long)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isInactive;
-(BOOL)isPulsing;
@end

