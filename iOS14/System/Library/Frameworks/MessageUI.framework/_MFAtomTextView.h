/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)copy:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)cut:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(NSArray *)atoms;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setHostRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)enumerateAtoms:(/*^block*/id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/id)arg1 ;
-(void)batchTextStorageUpdates:(/*^block*/id)arg1 ;
-(BOOL)isEditingTextStorage;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(MFComposeRecipientTextView *)hostRecipientView;
-(long long)baseWritingDirection;
-(BOOL)_delegateSupportsKeyboardEvents;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
@end

