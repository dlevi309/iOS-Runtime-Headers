/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_attachmentsContextID;
-(id)initWithMessage:(id)arg1 ;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
@end

