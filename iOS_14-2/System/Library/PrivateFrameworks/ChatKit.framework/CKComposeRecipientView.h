/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;
@interface CKComposeRecipientView : CNComposeRecipientTextView {

	id<CKComposeRecipientViewDelegate> layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CKComposeRecipientViewDelegate> layoutDelegate; 
-(UIEdgeInsets)safeAreaInsets;
-(id<CKComposeRecipientViewDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<CKComposeRecipientViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)setFrame:(CGRect)arg1 ;
-(void)reset;
@end

