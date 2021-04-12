/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isCaret;
-(UITextPosition *)end;
-(UITextPosition *)start;
-(id)_isImpl;
-(BOOL)_isRanged;
-(BOOL)isEmpty;
@end

