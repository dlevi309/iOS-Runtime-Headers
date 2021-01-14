/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeCaretMagnifier;
+(Class)renderClass;
-(void)remove;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(BOOL)isHorizontal;
-(void)zoomUpAnimation;
-(CGPoint)animationPoint;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)zoomDownAnimation;
-(void)updateFrameAndOffset;
-(BOOL)terminalPointPlacedCarefully;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(double)offsetFromMagnificationPoint;
-(id)initWithFrame;
@end

