/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <NanoMailKitServer/NNMKHTMLParser.h>

@class NSLock, NSMutableAttributedString, NSMutableDictionary, NSDataDetector;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser {

	NSLock* _lock;
	NSMutableAttributedString* _parsedAttributedString;
	unsigned long long _maxLength;
	double _maxImageWidth;
	BOOL* _partiallyParsed;
	NSMutableDictionary* _imageAtachmentsDataByContentId;
	NSDataDetector* _dataDetector;

}

@property (nonatomic,retain) NSLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * parsedAttributedString;                //@synthesize parsedAttributedString=_parsedAttributedString - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                                      //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) double maxImageWidth;                                              //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
@property (assign,nonatomic) BOOL* partiallyParsed;                                             //@synthesize partiallyParsed=_partiallyParsed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageAtachmentsDataByContentId;              //@synthesize imageAtachmentsDataByContentId=_imageAtachmentsDataByContentId - In the implementation block
@property (nonatomic,retain) NSDataDetector * dataDetector;                                     //@synthesize dataDetector=_dataDetector - In the implementation block
+(id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3 ;
+(CGSize)_scaledDownSize:(CGSize)arg1 maxWidth:(double)arg2 ;
+(id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(CGSize)arg2 mergingAttributes:(id)arg3 ;
+(id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2 ;
+(id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3 ;
+(id)trimAttributedString:(id)arg1 ;
-(unsigned long long)maxLength;
-(NSLock *)lock;
-(void)setLock:(NSLock *)arg1 ;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(NSDataDetector *)dataDetector;
-(BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(/*^block*/id)arg2 ;
-(BOOL)isErrorTypeBlacklisted:(char*)arg1 ;
-(BOOL)isElementIgnorable:(id)arg1 ;
-(void)appendString:(id)arg1 stringAttributes:(id)arg2 ;
-(void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4 ;
-(id)_parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 urlsFound:(id*)arg8 ;
-(id)_parsePlainTextBody:(id)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id*)arg2 ;
-(void)_addDataDetectionAttributes:(id)arg1 ;
-(NSMutableDictionary *)imageAtachmentsDataByContentId;
-(double)maxImageWidth;
-(NSMutableAttributedString *)parsedAttributedString;
-(BOOL)isWebLink:(id)arg1 ;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsFound:(id*)arg7 ;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 ;
-(id)parseTextBody:(id)arg1 ;
-(void)_appendComponentWithKey:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(void)setParsedAttributedString:(NSMutableAttributedString *)arg1 ;
-(void)setMaxImageWidth:(double)arg1 ;
-(BOOL*)partiallyParsed;
-(void)setPartiallyParsed:(BOOL*)arg1 ;
-(void)setImageAtachmentsDataByContentId:(NSMutableDictionary *)arg1 ;
@end

