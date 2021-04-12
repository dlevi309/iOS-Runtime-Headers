/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(long long)progressStartPoint;
-(BOOL)showProgressTray;
-(void)setProgressStartPoint:(long long)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(UIColor *)progressBackgroundColor;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)progressPresentationValue;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateProgressCompletedWithCompletion:(/*^block*/id)arg1 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(double)progressLineWidth;
@end

