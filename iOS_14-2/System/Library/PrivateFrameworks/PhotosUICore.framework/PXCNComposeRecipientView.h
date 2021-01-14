/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXComposeRecipientView.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>

@class CNComposeRecipientTextView, NSMutableArray, NSString;

@interface PXCNComposeRecipientView : PXComposeRecipientView <CNComposeRecipientTextViewDelegate> {

	CNComposeRecipientTextView* _recipientTextView;
	CGSize _preferredSize;
	NSMutableArray* _internalRecipients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recipients;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)addRecipient:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)removeRecipient:(id)arg1 ;
-(id)init;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(id)addButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)addRecipients:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(void)setLabel:(id)arg1 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)removeRecipients:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(id)label;
@end

