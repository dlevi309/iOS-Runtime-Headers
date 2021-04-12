/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (getter=_isImpl,nonatomic,readonly) UITextSelectionRectImpl * isImpl; 
@property (nonatomic,readonly) BOOL _drawsOwnHighlight; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) long long writingDirection; 
@property (nonatomic,readonly) BOOL containsStart; 
@property (nonatomic,readonly) BOOL containsEnd; 
@property (nonatomic,readonly) BOOL isVertical; 
+(BOOL)startIsHorizontal:(id)arg1 ;
+(id)startRectFromRects:(id)arg1 ;
+(id)endRectFromRects:(id)arg1 ;
+(CGRect)startEdgeFromRects:(id)arg1 ;
+(CGRect)endEdgeFromRects:(id)arg1 ;
+(BOOL)endIsHorizontal:(id)arg1 ;
-(id)range;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(id)_isImpl;
-(long long)writingDirection;
-(BOOL)_drawsOwnHighlight;
@end

