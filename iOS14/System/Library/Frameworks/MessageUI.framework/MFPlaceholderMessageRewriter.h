/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>

@protocol MFMessageRewriterPlaceholderResolver;
@class NSMutableArray, MFOutgoingMessageContent, NSString;

@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {

	NSMutableArray* _placeholders;
	MFOutgoingMessageContent* _originalMessageContent;
	MFOutgoingMessageContent* _rewrittenMessageContent;
	id<MFMessageRewriterPlaceholderResolver> _placeholderResolver;

}

@property (nonatomic,readonly) MFOutgoingMessageContent * originalMessageContent;                              //@synthesize originalMessageContent=_originalMessageContent - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageRewriterPlaceholderResolver> placeholderResolver;              //@synthesize placeholderResolver=_placeholderResolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1 ;
-(id)subject;
-(id)composeWebView;
-(id)attachments;
-(id)init;
-(id)sendingAccountProxy;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(id<MFMessageRewriterPlaceholderResolver>)placeholderResolver;
-(MFOutgoingMessageContent *)originalMessageContent;
-(void)setPlaceholderResolver:(id<MFMessageRewriterPlaceholderResolver>)arg1 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(id)sendingEmailAddress;
-(id)rewrittenMessageContent;
-(id)savedHeaders;
-(id)accountProxyGenerator;
-(void)setSendingEmailAddress:(id)arg1 ;
-(id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2 ;
-(void)setToRecipients:(id)arg1 ;
-(void)setSavedHeaders:(id)arg1 ;
-(id)shouldCreateRichTextRepresentation;
-(void)setSubject:(id)arg1 ;
@end

