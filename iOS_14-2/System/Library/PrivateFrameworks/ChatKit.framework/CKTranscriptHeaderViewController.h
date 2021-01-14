/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {

	BOOL _shouldInvalidateOnAddressBookChange;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKConversation * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateOnAddressBookChange;              //@synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange - In the implementation block
-(BOOL)shouldInvalidateOnAddressBookChange;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(CKConversation *)conversation;
@end

