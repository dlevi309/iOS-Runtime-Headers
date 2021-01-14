/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) long long contentOrientation;                                         //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                       //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (assign,getter=isCounterTransformView,nonatomic) BOOL counterTransformView; 
@property (nonatomic,readonly) NSArray * contentViews; 
-(long long)containerOrientation;
-(long long)contentOrientation;
-(CGSize)_referenceContainerSize;
-(void)addHitTestView:(id)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)setCounterTransformView:(BOOL)arg1 ;
-(void)bringContentSubviewToFront:(id)arg1 ;
-(BOOL)isCounterTransformView;
-(CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGAffineTransform)arg1 ;
-(CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGRect)arg1 ;
-(CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGPoint)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)addContentView:(id)arg1 ;
-(NSArray *)contentViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGPoint)arg1 ;
-(void)addGestureRecognizerToTransformedView:(id)arg1 ;
-(void)_updateGeometry;
-(void)removeGestureRecognizerFromTransformedView:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGAffineTransform)arg1 ;
@end

