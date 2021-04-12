/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)keyCommands;
-(id<MFComposeRecipientAtomDelegate>)delegate;
-(void)moveLeft:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<MFComposeRecipientAtomDelegate>)arg1 ;
-(void)handleTouchAndHold;
-(void)moveRight:(id)arg1 ;
-(MFComposeRecipient *)recipient;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

