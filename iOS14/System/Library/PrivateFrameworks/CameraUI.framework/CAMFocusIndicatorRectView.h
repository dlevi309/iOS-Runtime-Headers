/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInactive:(BOOL)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isInactive;
-(UIImageView *)_imageView;
-(BOOL)isPulsing;
-(CGSize)intrinsicContentSize;
-(id)initWithStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)style;
@end

