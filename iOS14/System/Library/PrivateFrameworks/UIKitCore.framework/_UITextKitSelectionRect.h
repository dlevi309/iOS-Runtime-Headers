/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface _UITextKitSelectionRect : UITextSelectionRect {

	BOOL _containsEnd;
	BOOL _containsStart;
	BOOL _vertical;
	BOOL __drawsOwnHighlight;
	long long _writingDirection;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                                      //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) BOOL containsStart;                                                 //@synthesize containsStart=_containsStart - In the implementation block
@property (assign,nonatomic) BOOL containsEnd;                                                   //@synthesize containsEnd=_containsEnd - In the implementation block
@property (assign,nonatomic) long long writingDirection;                                         //@synthesize writingDirection=_writingDirection - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;                                    //@synthesize vertical=_vertical - In the implementation block
@property (assign,setter=_setDrawsOwnHighlight:,nonatomic) BOOL _drawsOwnHighlight;              //@synthesize _drawsOwnHighlight=__drawsOwnHighlight - In the implementation block
+(id)selectionRectWithRect:(CGRect)arg1 fromView:(id)arg2 ;
-(BOOL)isVertical;
-(CGRect)rect;
-(id)description;
-(void)setRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)setWritingDirection:(long long)arg1 ;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)_drawsOwnHighlight;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)_setDrawsOwnHighlight:(BOOL)arg1 ;
-(void)setVertical:(BOOL)arg1 ;
@end

