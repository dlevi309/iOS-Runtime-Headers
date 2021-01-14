/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData, MFError;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}

@property (nonatomic,readonly) MFError * SMIMEError; 
+(void)initialize;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(Class)attachmentClass;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
-(MFError *)SMIMEError;
-(id)copySigners;
-(BOOL)_needsSignatureVerification:(id*)arg1 ;
-(void)_setSigners:(id)arg1 ;
-(void)_setSMIMEError:(id)arg1 ;
-(id)decodeMultipartSigned;
-(id)decodeApplicationPkcs7_mime;
-(id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4 ;
-(id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3 ;
-(id)subtype;
-(void)setIsGenerated:(BOOL)arg1 ;
-(void)download;
-(void)setRange:(NSRange)arg1 ;
-(id)contentLocation;
-(id)languages;
-(id)attachments;
-(id)init;
-(NSRange)range;
-(void)setContentLocation:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(unsigned long long)totalTextSize;
-(id)rfc822DecodedMessageBody;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(BOOL)isHTML;
-(unsigned)numberOfAttachments;
-(id)subparts;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(void)setType:(id)arg1 ;
-(BOOL)isRich;
-(id)contentID;
-(void)setDisposition:(id)arg1 ;
-(id)contentsForTextSystem;
-(BOOL)usesKnownSignatureProtocol;
-(id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 ;
-(void)_setObjectInOtherIvars:(id)arg1 forKey:(id)arg2 ;
-(void)setContentID:(id)arg1 ;
-(unsigned)textEncoding;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)textHtmlPart;
-(id)partURL;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)attachmentFilename;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)description;
-(BOOL)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeText;
-(unsigned)approximateRawSize;
-(BOOL)isAttachment;
-(void)addSubpart:(id)arg1 ;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(id)contentTransferEncoding;
-(BOOL)isReadableText;
-(void)setContentTransferEncoding:(id)arg1 ;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)type;
-(id)signedData;
-(id)bodyData;
-(id)mimeBody;
-(BOOL)hasContents;
-(id)attachmentURLs;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)disposition;
-(void)setMimeBody:(id)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(void)setSubtype:(id)arg1 ;
-(void)setSubparts:(id)arg1 ;
-(id)partNumber;
-(id)parentPart;
-(id)firstChildPart;
-(id)fileWrapper;
-(id)nextSiblingPart;
-(id)decodedDataForData:(id)arg1 ;
-(id)contentDescription;
-(id)alternativeAtIndex:(long long)arg1 ;
-(long long)numberOfAlternatives;
-(void)dealloc;
-(BOOL)isGenerated;
-(BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1 ;
-(id)chosenAlternativePart;
-(void)decodeIfNecessary;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3 ;
-(id)startPart;
-(void)_clearNextAndSibling;
-(void)_clearParent;
-(id)_partThatIsAttachment;
-(BOOL)shouldConsiderInlineOverridingExchangeServer;
-(BOOL)hasContentType:(id)arg1 subtype:(id)arg2 ;
-(id)subpartAtIndex:(long long)arg1 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(BOOL)arg1 ;
-(id)contentsForTextSystemForcingDownload:(BOOL)arg1 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(BOOL)hasValidMultipartSignedContentType;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)clearCachedDescryptedMessageBody;
-(BOOL)_hasCompleteBodyDataToOffset:(unsigned long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(BOOL)parseMimeBodyFromHeaderData:(id)arg1 bodyData:(id)arg2 isPartial:(BOOL)arg3 ;
-(BOOL)parseMimeBody;
-(BOOL)parseIMAPPropertyList:(id)arg1 ;
-(SEL)_selectorForCString:(char*)arg1 ;
-(void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
@end

