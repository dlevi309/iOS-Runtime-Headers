/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
-(id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4 ;
-(id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3 ;
-(MFError *)SMIMEError;
-(id)copySigners;
-(BOOL)_needsSignatureVerification:(id*)arg1 ;
-(void)_setSigners:(id)arg1 ;
-(void)_setSMIMEError:(id)arg1 ;
-(id)decodeMultipartSigned;
-(id)decodeApplicationPkcs7_mime;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)type;
-(void)setType:(id)arg1 ;
-(id)attachments;
-(NSRange)range;
-(id)subtype;
-(id)contentDescription;
-(id)languages;
-(void)setLanguages:(id)arg1 ;
-(id)bodyData;
-(void)download;
-(id)disposition;
-(void)setDisposition:(id)arg1 ;
-(long long)numberOfAlternatives;
-(id)alternativeAtIndex:(long long)arg1 ;
-(id)fileWrapper;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)isAttachment;
-(BOOL)hasContents;
-(BOOL)isGenerated;
-(void)setIsGenerated:(BOOL)arg1 ;
-(void)setSubtype:(id)arg1 ;
-(id)contentLocation;
-(void)setContentLocation:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(unsigned)numberOfAttachments;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)mimeBody;
-(id)partNumber;
-(id)parentPart;
-(id)firstChildPart;
-(id)nextSiblingPart;
-(id)decodedDataForData:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(unsigned)textEncoding;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)attachmentFilename;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(id)bodyParameterForKey:(id)arg1 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeText;
-(unsigned)approximateRawSize;
-(void)addSubpart:(id)arg1 ;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(id)subparts;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(id)contentTransferEncoding;
-(void)setContentTransferEncoding:(id)arg1 ;
-(BOOL)isReadableText;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)partURL;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)isHTML;
-(void)setMimeBody:(id)arg1 ;
-(id)attachmentURLs;
-(unsigned long long)totalTextSize;
-(id)rfc822DecodedMessageBody;
-(id)contentsForTextSystem;
-(BOOL)usesKnownSignatureProtocol;
-(id)signedData;
-(id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 ;
-(void)_setObjectInOtherIvars:(id)arg1 forKey:(id)arg2 ;
-(id)textHtmlPart;
-(void)setSubparts:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(BOOL)isRich;
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

