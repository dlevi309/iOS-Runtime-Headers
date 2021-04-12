/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <ContactsAutocompleteUI/CNAtomView.h>

@protocol CNComposeRecipientAtomDelegate;
@class CNComposeRecipient, UITextInputTraits;

@interface CNComposeRecipientAtom : CNAtomView {

	CNComposeRecipient* _recipient;
	UITextInputTraits* _traits;
	unsigned _wasSelectedWhenTouchesBegan : 1;
	unsigned _touchesWereCancelled : 1;
	id<CNComposeRecipientAtomDelegate> _delegate;

}

@property (nonatomic,retain) CNComposeRecipient * recipient;                                  //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeRecipientAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNComposeRecipientAtomDelegate>)delegate;
-(void)setDelegate:(id<CNComposeRecipientAtomDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(void)moveLeft:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)setRecipient:(CNComposeRecipient *)arg1 ;
-(CNComposeRecipient *)recipient;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3 ;
-(void)handleTouchAndHold;
@end

