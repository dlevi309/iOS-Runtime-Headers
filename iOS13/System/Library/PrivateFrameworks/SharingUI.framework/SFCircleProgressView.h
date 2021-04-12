/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView

@property (assign,nonatomic) long long progressStartPoint; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (nonatomic,retain) UIColor * progressBackgroundColor; 
@property (assign,nonatomic) double progressLineWidth; 
@property (assign,nonatomic) BOOL showProgressTray; 
@property (assign,nonatomic) double progress; 
+(Class)layerClass;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgressStartPoint:(long long)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(long long)progressStartPoint;
-(UIColor *)progressColor;
-(UIColor *)progressBackgroundColor;
-(double)progressLineWidth;
-(BOOL)showProgressTray;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)progressPresentationValue;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateProgressCompletedWithCompletion:(/*^block*/id)arg1 ;
@end

