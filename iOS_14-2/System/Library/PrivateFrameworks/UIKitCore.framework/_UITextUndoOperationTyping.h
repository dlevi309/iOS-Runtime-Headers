/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : _UIUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(BOOL)supportsCoalescing;
-(BOOL)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 textStorage:(id)arg4 ;
-(void)undoRedo;
@end

