/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFModernAtomView.h>

@protocol MFComposeRecipientAtomDelegate;
@class MFComposeRecipient, UITextInputTraits;

@interface MFModernComposeRecipientAtom : MFModernAtomView {

	MFComposeRecipient* _recipient;
	UITextInputTraits* _traits;
	unsigned _wasSelectedWhenTouchesBegan : 1;
	unsigned _touchesWereCancelled : 1;
	id<MFComposeRecipientAtomDelegate> _delegate;

}

@property (nonatomic,readonly) MFComposeRecipient * recipient; 
@property (assign,nonatomic,__weak) id<MFComposeRecipientAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MFComposeRecipientAtomDelegate>)delegate;
-(void)setDelegate:(id<MFComposeRecipientAtomDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(void)moveLeft:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(MFComposeRecipient *)recipient;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3 ;
-(void)handleTouchAndHold;
@end

