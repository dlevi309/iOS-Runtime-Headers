/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUndoTextOperation.h>

@class NSAttributedString;

@interface _UITextUndoOperationReplace : _UIUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(void)undoRedo;
@end

