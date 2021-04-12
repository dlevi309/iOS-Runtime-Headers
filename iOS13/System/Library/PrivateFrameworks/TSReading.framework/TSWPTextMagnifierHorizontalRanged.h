/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged {

	BOOL _shouldIgnoreTextInputEditor;

}

@property (assign,nonatomic) BOOL shouldIgnoreTextInputEditor;              //@synthesize shouldIgnoreTextInputEditor=_shouldIgnoreTextInputEditor - In the implementation block
+(id)sharedRangedMagnifier;
-(void)dealloc;
-(void)remove;
-(double)currentOffset;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(void)updateFrame;
-(id)initWithDefaultFrame;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(id)underlayImageName;
-(id)overlayImageName;
-(id)maskImageName;
-(void)setShouldIgnoreTextInputEditor:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTextInputEditor;
@end

