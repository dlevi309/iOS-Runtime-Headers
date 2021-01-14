/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@interface MFComposeTypeFactory : NSObject
+(unsigned long long)imageScaleFromUserDefaults;
+(id)_markupStringForExcludedInlineAttachmentWithFilename:(id)arg1 ;
+(void)_setContent:(id)arg1 includeAttachments:(BOOL)arg2 shouldQuote:(BOOL)arg3 prependBlankLine:(BOOL)arg4 delegate:(id)arg5 storeOriginalAttachments:(BOOL)arg6 ;
+(id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(BOOL)arg2 prependBlankLine:(BOOL)arg3 delegate:(id)arg4 ;
+(void)_prependQuotedMarkup:(id)arg1 shouldIndent:(BOOL)arg2 toBodyField:(id)arg3 ;
+(id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(void)_mergeModel:(id)arg1 withDelegate:(id)arg2 ;
+(void)_updateDelegate:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 ;
+(void)_quoteFromModel:(id)arg1 delegate:(id)arg2 ;
+(BOOL)alwaysBCCSelf;
+(void)_sanitizeRecipientsForComposeType:(unsigned long long)arg1 sendingAddress:(id)arg2 delegate:(id)arg3 ;
+(void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)setupSwitchToReplyAllWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setContent:(id)arg1 includeAttachments:(BOOL)arg2 shouldQuote:(BOOL)arg3 prependBlankLine:(BOOL)arg4 delegate:(id)arg5 ;
+(void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2 ;
+(id)messageFromDelegate:(id)arg1 withSubstituteDOMDocument:(id)arg2 compositionSpecification:(id)arg3 originatingBundleID:(id)arg4 sourceAccountManagement:(int)arg5 writeAttachmentPlaceholders:(BOOL)arg6 ;
+(id)headersFromDelegate:(id)arg1 ;
+(id)bccSelfAddressForDelegate:(id)arg1 ;
+(void)setupSwitchToReplyWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2 ;
+(void)addAttachment:(id)arg1 prepend:(BOOL)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4 ;
+(void)setupWithContent:(id)arg1 delegate:(id)arg2 ;
+(id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(void)hijackThreadFromDelegate:(id)arg1 ;
+(id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2 ;
@end

