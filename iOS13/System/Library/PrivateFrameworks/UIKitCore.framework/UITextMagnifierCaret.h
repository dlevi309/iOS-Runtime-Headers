/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierCaret : UITextMagnifier {

	double _yOffset;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
+(id)sharedCaretMagnifier;
+(Class)renderClass;
+(id)activeCaretMagnifier;
-(void)remove;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(BOOL)isHorizontal;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(BOOL)terminalPointPlacedCarefully;
-(double)offsetFromMagnificationPoint;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(id)initWithFrame;
@end

