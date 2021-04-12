/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <Message/MFOutgoingMessageDelivery.h>
#import <libobjc.A.dylib/MFMessageRewriterPlaceholderResolver.h>

@class NSString, MFPlaceholderMessageRewriter;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver> {

	NSString* _contextID;
	MFPlaceholderMessageRewriter* _rewriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMessage:(id)arg1 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
-(id)_attachmentsContextID;
@end

