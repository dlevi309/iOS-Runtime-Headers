/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)contentDidChange;
-(void)addSignature:(BOOL)arg1;
-(void)setOriginalMessageWasEncrypted:(BOOL)arg1;
-(unsigned long long)contentVariationIndex;

@required
-(id)subject;
-(id)composeWebView;
-(id)attachments;
-(id)sendingAccountProxy;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(id)sendingEmailAddress;
-(id)savedHeaders;
-(id)accountProxyGenerator;
-(void)setSendingEmailAddress:(id)arg1;
-(void)setToRecipients:(id)arg1;
-(void)setSavedHeaders:(id)arg1;
-(id)shouldCreateRichTextRepresentation;
-(void)setSubject:(id)arg1;

@end

