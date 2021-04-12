/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIShapeView, UIColor, UIBezierPath;

@interface _UIPlatterShadowView : UIView {

	BOOL _punchOut;
	_UIShapeView* _shadowMaskView;

}

@property (nonatomic,readonly) _UIShapeView * shadowMaskView;              //@synthesize shadowMaskView=_shadowMaskView - In the implementation block
@property (assign,nonatomic) BOOL punchOut;                                //@synthesize punchOut=_punchOut - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,retain) UIBezierPath * shadowPath; 
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)shadowRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)shadowOpacity;
-(void)setShadowRadius:(double)arg1 ;
-(UIColor *)shadowColor;
-(CGSize)shadowOffset;
-(void)setShadowOpacity:(double)arg1 ;
-(BOOL)punchOut;
-(void)setPunchOut:(BOOL)arg1 ;
-(_UIShapeView *)shadowMaskView;
-(UIBezierPath *)shadowPath;
-(id)initWithShadowPath:(id)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
@end

