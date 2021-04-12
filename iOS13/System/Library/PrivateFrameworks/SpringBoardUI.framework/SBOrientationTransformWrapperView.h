/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _SBOrientationTransformedContentView, NSMutableArray, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	long long _contentOrientation;
	long long _containerOrientation;
	NSMutableArray* _hitTestViews;

}

@property (assign,nonatomic) long long contentOrientation;                //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * contentViews; 
-(id)description;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)_updateGeometry;
-(long long)containerOrientation;
-(CGSize)_referenceContainerSize;
-(long long)contentOrientation;
-(NSArray *)contentViews;
-(void)addContentView:(id)arg1 ;
-(void)addHitTestView:(id)arg1 ;
-(void)addGestureRecognizerToTransformedView:(id)arg1 ;
-(void)removeGestureRecognizerFromTransformedView:(id)arg1 ;
-(void)bringContentSubviewToFront:(id)arg1 ;
-(CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGAffineTransform)arg1 ;
-(CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGAffineTransform)arg1 ;
@end

