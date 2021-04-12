/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface _UIBackButtonContainerView : UIView {

	CALayer* _edgeMask;
	CALayer* _fillMask;
	BOOL _isRTL;
	UIImage* _edgeMaskImage;
	double _backButtonLeadingMargin;

}

@property (nonatomic,retain) UIImage * edgeMaskImage;                     //@synthesize edgeMaskImage=_edgeMaskImage - In the implementation block
@property (assign,nonatomic) BOOL maskEnabled; 
@property (assign,nonatomic) double backButtonLeadingMargin;              //@synthesize backButtonLeadingMargin=_backButtonLeadingMargin - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                  //@synthesize isRTL=_isRTL - In the implementation block
-(BOOL)isRTL;
-(void)setMaskEnabled:(BOOL)arg1 ;
-(BOOL)maskEnabled;
-(UIImage *)edgeMaskImage;
-(void)setEdgeMaskImage:(UIImage *)arg1 ;
-(double)backButtonLeadingMargin;
-(void)setBackButtonLeadingMargin:(double)arg1 ;
-(void)setIsRTL:(BOOL)arg1 ;
@end

