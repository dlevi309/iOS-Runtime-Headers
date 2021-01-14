/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)supportsCoalescing;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 ;
-(void)undoRedo;
-(void)setInputController:(UITextInputController *)arg1 ;
-(UITextInputController *)inputController;
@end

