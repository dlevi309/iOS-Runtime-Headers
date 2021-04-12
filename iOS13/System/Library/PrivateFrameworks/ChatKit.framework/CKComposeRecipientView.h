/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;
@interface CKComposeRecipientView : CNComposeRecipientTextView {

	id<CKComposeRecipientViewDelegate> layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CKComposeRecipientViewDelegate> layoutDelegate; 
-(void)reset;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutDelegate:(id<CKComposeRecipientViewDelegate>)arg1 ;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(id<CKComposeRecipientViewDelegate>)layoutDelegate;
@end

