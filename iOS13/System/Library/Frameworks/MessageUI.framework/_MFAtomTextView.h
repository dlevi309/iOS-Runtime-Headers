/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView {

	unsigned long long _textStorageEditingDepth;
	MFComposeRecipientTextView* _hostRecipientView;

}

@property (readonly) NSArray * atoms; 
@property (__weak) MFComposeRecipientTextView * hostRecipientView;              //@synthesize hostRecipientView=_hostRecipientView - In the implementation block
-(long long)baseWritingDirection;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)undoManager;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(void)setHostRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)enumerateAtoms:(/*^block*/id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/id)arg1 ;
-(void)batchTextStorageUpdates:(/*^block*/id)arg1 ;
-(NSArray *)atoms;
-(BOOL)isEditingTextStorage;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(MFComposeRecipientTextView *)hostRecipientView;
-(BOOL)_delegateSupportsKeyboardEvents;
@end

