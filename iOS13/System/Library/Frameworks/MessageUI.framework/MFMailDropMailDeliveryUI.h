/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <Message/MFMailDropMailDelivery.h>
#import <libobjc.A.dylib/MFMessageRewriterPlaceholderResolver.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver> {

	MFPlaceholderMessageRewriter* _rewriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)scaledImages:(id)arg1 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long*)arg3 ;
-(id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1 ;
-(id)_contentForAttachmentPassingTest:(/*^block*/id)arg1 ;
-(id)_headersByAddingMailDropHeaders:(id)arg1 ;
-(id)_mailDropBannerHTMLString;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
@end

