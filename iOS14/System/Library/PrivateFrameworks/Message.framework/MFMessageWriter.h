/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSDictionary;

@interface MFMessageWriter : NSObject {

	Class _messageClassToInstantiate;
	unsigned _allows8BitMimeParts : 1;
	unsigned _allowsBinaryMimeParts : 1;
	unsigned _writeSizeDispositionParameter : 1;
	unsigned _allowsQuotedPrintable : 1;
	BOOL _shouldWriteAttachmentPlaceholders;
	id _delegate;
	NSDictionary* _compositionSpecification;

}

@property (assign,nonatomic,__weak) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) BOOL shouldWriteAttachmentPlaceholders;                 //@synthesize shouldWriteAttachmentPlaceholders=_shouldWriteAttachmentPlaceholders - In the implementation block
-(id)init;
-(id)delegate;
-(NSDictionary *)compositionSpecification;
-(id)initWithCompositionSpecification:(id)arg1 ;
-(id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHTMLStringAndMIMECharset:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(void)setDelegate:(id)arg1 ;
-(id)createMessageWithString:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(id)newDataForMimePart:(id)arg1 withPartData:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3 ;
-(BOOL)allows8BitMimeParts;
-(void)setAllows8BitMimeParts:(BOOL)arg1 ;
-(BOOL)allowsBinaryMimeParts;
-(void)setAllowsBinaryMimeParts:(BOOL)arg1 ;
-(BOOL)allowsQuotedPrintable;
-(void)setWriteSizeDispositionParameter:(BOOL)arg1 ;
-(void)setMessageClassToInstantiate:(Class)arg1 ;
-(BOOL)shouldWriteAttachmentPlaceholders;
-(void)setShouldWriteAttachmentPlaceholders:(BOOL)arg1 ;
-(void)setAllowsQuotedPrintable:(BOOL)arg1 ;
-(void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
@end

