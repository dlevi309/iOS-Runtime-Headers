/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(Class)attachmentClass;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(id)htmlContent;
-(BOOL)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end

