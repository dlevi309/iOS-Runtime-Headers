/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol CNChevronButtonMenuDelegate;
@class CNAtomView;

@interface CNChevronButton : UIButton {

	CNAtomView*<CNChevronButtonMenuDelegate> _delegateView;

}

@property (assign,nonatomic,__weak) CNAtomView*<CNChevronButtonMenuDelegate> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CNAtomView*<CNChevronButtonMenuDelegate>)delegateView;
-(void)setDelegateView:(CNAtomView*<CNChevronButtonMenuDelegate>)arg1 ;
@end

