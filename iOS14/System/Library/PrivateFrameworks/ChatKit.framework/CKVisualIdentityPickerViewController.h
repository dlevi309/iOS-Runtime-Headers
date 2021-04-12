/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ContactsUI/CNVisualIdentityPickerViewController.h>
#import <libobjc.A.dylib/CNVisualIdentityPickerViewControllerDelegate.h>

@protocol CKVisualIdentityPickerViewControllerDelegate;
@class CKConversation;

@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate> {

	CKConversation* _conversation;
	id<CKVisualIdentityPickerViewControllerDelegate> _presentationDelegate;

}

@property (nonatomic,retain) CKConversation * conversation;                                                             //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic,__weak) id<CKVisualIdentityPickerViewControllerDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)imagePickerForGroupIdentity:(id)arg1 withConversation:(id)arg2 ;
+(id)imagePickerForContact:(id)arg1 ;
-(void)visualIdentityPicker:(id)arg1 didUpdatePhotoForVisualIdentity:(id)arg2 withContactImage:(id)arg3 ;
-(void)visualIdentityPickerDidCancel:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(id<CKVisualIdentityPickerViewControllerDelegate>)presentationDelegate;
-(CKConversation *)conversation;
-(void)setPresentationDelegate:(id<CKVisualIdentityPickerViewControllerDelegate>)arg1 ;
@end

