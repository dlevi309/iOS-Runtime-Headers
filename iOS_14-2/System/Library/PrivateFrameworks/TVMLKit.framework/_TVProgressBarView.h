/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView {

	BOOL _useMaterial;
	BOOL _shouldProgressBarUseRoundCorner;
	double _cornerRadius;
	double _progress;
	UIColor* _progressTintColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	UIColor* _completeTintColor;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                       //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                      //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                        //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) UIColor * completeTintColor;                       //@synthesize completeTintColor=_completeTintColor - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                                  //@synthesize useMaterial=_useMaterial - In the implementation block
@property (assign,nonatomic) BOOL shouldProgressBarUseRoundCorner;              //@synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(void)setProgress:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)shouldProgressBarUseRoundCorner;
-(void)setShouldProgressBarUseRoundCorner:(BOOL)arg1 ;
-(void)setCompleteTintColor:(UIColor *)arg1 ;
-(BOOL)useMaterial;
-(void)setUseMaterial:(BOOL)arg1 ;
-(UIColor *)completeTintColor;
-(void)setgradientEndColor:(id)arg1 ;
@end

