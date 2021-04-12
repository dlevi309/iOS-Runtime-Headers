/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)contentDidChange;
-(void)addSignature:(BOOL)arg1;
-(void)setOriginalMessageWasEncrypted:(BOOL)arg1;
-(unsigned long long)contentVariationIndex;

@required
-(id)attachments;
-(id)subject;
-(void)setSubject:(id)arg1;
-(void)setToRecipients:(id)arg1;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(id)composeWebView;
-(id)sendingEmailAddress;
-(id)savedHeaders;
-(id)accountProxyGenerator;
-(void)setSendingEmailAddress:(id)arg1;
-(void)setSavedHeaders:(id)arg1;
-(id)shouldCreateRichTextRepresentation;
-(id)sendingAccountProxy;

@end

