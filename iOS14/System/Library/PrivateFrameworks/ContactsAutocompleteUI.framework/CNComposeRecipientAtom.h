/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned _touchBeganWithShiftDown : 1;
	id<CNComposeRecipientAtomDelegate> _delegate;

}

@property (nonatomic,retain) CNComposeRecipient * recipient;                                  //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeRecipientAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setRecipient:(CNComposeRecipient *)arg1 ;
-(id)keyCommands;
-(id<CNComposeRecipientAtomDelegate>)delegate;
-(void)moveLeft:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CNComposeRecipientAtomDelegate>)arg1 ;
-(void)handleTouchAndHold;
-(id)menuConfigurationForChevronButton;
-(void)moveRight:(id)arg1 ;
-(CNComposeRecipient *)recipient;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

