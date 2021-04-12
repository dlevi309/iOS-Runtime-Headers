/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@protocol FAMessagesInviteControllerDelegate;
@class MFMessageComposeViewController, UIViewController, LPLinkMetadata, LPImage, FAMessagesInviteContext, NSArray, NSString;

@interface FAMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerDelegate> {

	MFMessageComposeViewController* _messageComposeViewController;
	UIViewController* _presentationContext;
	LPLinkMetadata* _linkMetadata;
	LPImage* _cachedIcon;
	LPImage* _cachedImage;
	BOOL _userCancelled;
	id<FAMessagesInviteControllerDelegate> _delegate;
	FAMessagesInviteContext* _context;
	NSArray* _recipientAddresses;

}

@property (assign,nonatomic,__weak) id<FAMessagesInviteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FAMessagesInviteContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * recipientAddresses;                                      //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,readonly) BOOL userCancelled;                                                //@synthesize userCancelled=_userCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canSendText;
-(id<FAMessagesInviteControllerDelegate>)delegate;
-(void)setDelegate:(id<FAMessagesInviteControllerDelegate>)arg1 ;
-(FAMessagesInviteContext *)context;
-(NSArray *)recipientAddresses;
-(id)_cachedImage;
-(id)_linkMetadata;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id)_messageComposeViewController;
-(id)_defaultImage;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_defaultIcon;
-(BOOL)userCancelled;
-(id)_colorForString:(id)arg1 ;
-(void)_presentMessagesViewController:(/*^block*/id)arg1 ;
-(id)initWithInviteContext:(id)arg1 presentingController:(id)arg2 ;
-(void)presentWhenReadyWithCompletion:(/*^block*/id)arg1 ;
-(void)setDefaultMessageBubbleIcon:(id)arg1 ;
-(void)setDefaultMessageBubbleBackgroundImage:(id)arg1 ;
@end

