/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)startRectFromRects:(id)arg1 ;
+(id)endRectFromRects:(id)arg1 ;
+(CGRect)startEdgeFromRects:(id)arg1 ;
+(CGRect)endEdgeFromRects:(id)arg1 ;
+(BOOL)startIsHorizontal:(id)arg1 ;
+(BOOL)endIsHorizontal:(id)arg1 ;
-(BOOL)isVertical;
-(CGRect)rect;
-(id)range;
-(id)_isImpl;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(unsigned long long)hash;
-(long long)writingDirection;
-(BOOL)_drawsOwnHighlight;
-(BOOL)isEqual:(id)arg1 ;
@end

