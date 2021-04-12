/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (getter=_isCaret,nonatomic,readonly) BOOL isCaret; 
@property (getter=_isRanged,nonatomic,readonly) BOOL isRanged; 
@property (getter=_isImpl,nonatomic,readonly) UITextRangeImpl * isImpl; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) UITextPosition * start; 
@property (nonatomic,readonly) UITextPosition * end; 
-(BOOL)isEmpty;
-(UITextPosition *)start;
-(UITextPosition *)end;
-(BOOL)_isRanged;
-(BOOL)_isCaret;
-(id)_isImpl;
@end

