/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface CAMSubjectIndicatorView : UIView {

	UIImageView* __imageView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                   //@synthesize _imageView=__imageView - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive; 
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing; 
+(CGSize)fixedSize;
+(CGSize)_fixedSubjectIndicatorSizeForReferenceBounds:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setPulsing:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isInactive;
-(BOOL)isPulsing;
-(void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 timingFunction:(id)arg4 ;
-(void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 ;
-(void)stopScalingWithDuration:(double)arg1 ;
@end

