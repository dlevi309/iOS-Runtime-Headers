/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface _UITextKitSelectionRect : UITextSelectionRect {

	BOOL _containsEnd;
	BOOL _containsStart;
	BOOL _vertical;
	BOOL __drawsOwnHighlight;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                                      //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) BOOL containsStart;                                                 //@synthesize containsStart=_containsStart - In the implementation block
@property (assign,nonatomic) BOOL containsEnd;                                                   //@synthesize containsEnd=_containsEnd - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;                                    //@synthesize vertical=_vertical - In the implementation block
@property (assign,setter=_setDrawsOwnHighlight:,nonatomic) BOOL _drawsOwnHighlight;              //@synthesize _drawsOwnHighlight=__drawsOwnHighlight - In the implementation block
+(id)selectionRectWithRect:(CGRect)arg1 fromView:(id)arg2 ;
-(id)description;
-(BOOL)isVertical;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)_setDrawsOwnHighlight:(BOOL)arg1 ;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(long long)writingDirection;
-(BOOL)_drawsOwnHighlight;
-(void)setVertical:(BOOL)arg1 ;
-(void)setRect:(CGRect)arg1 fromView:(id)arg2 ;
@end

