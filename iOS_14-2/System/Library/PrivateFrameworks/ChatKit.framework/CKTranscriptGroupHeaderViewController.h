/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptHeaderViewController.h>

@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (nonatomic,readonly) UIButton * headerButton; 
-(BOOL)shouldInvalidateOnAddressBookChange;
-(void)loadView;
-(UIButton *)headerButton;
-(id)_groupHeaderComposeRecipients;
-(void)_handleConversationRecipientsChanged:(id)arg1 ;
-(void)dealloc;
@end

