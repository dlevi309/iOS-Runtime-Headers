/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITextInputController;

@interface _UIUndoTextOperation : NSObject {

	UITextInputController* _inputController;
	NSRange _affectedRange;

}

@property (assign,nonatomic) NSRange affectedRange;                                       //@synthesize affectedRange=_affectedRange - In the implementation block
@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
-(void)undoRedo;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 ;
-(BOOL)supportsCoalescing;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
@end

