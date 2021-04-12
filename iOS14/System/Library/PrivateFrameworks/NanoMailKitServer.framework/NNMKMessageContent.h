/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface NNMKMessageContent : NSObject <NSSecureCoding> {

	BOOL _mainAlternativeValid;
	BOOL _hasTextData;
	BOOL _partiallyLoaded;
	NSString* _messageId;
	NSString* _externalReferenceId;
	NSData* _textData;
	NSData* _htmlContentData;
	unsigned long long _originalContentSize;
	NSArray* _attachments;

}

@property (nonatomic,retain) NSString * messageId;                                //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * externalReferenceId;                      //@synthesize externalReferenceId=_externalReferenceId - In the implementation block
@property (assign,nonatomic) BOOL mainAlternativeValid;                           //@synthesize mainAlternativeValid=_mainAlternativeValid - In the implementation block
@property (nonatomic,retain) NSData * textData;                                   //@synthesize textData=_textData - In the implementation block
@property (nonatomic,retain) NSData * htmlContentData;                            //@synthesize htmlContentData=_htmlContentData - In the implementation block
@property (assign,nonatomic) BOOL hasTextData;                                    //@synthesize hasTextData=_hasTextData - In the implementation block
@property (assign,nonatomic) unsigned long long originalContentSize;              //@synthesize originalContentSize=_originalContentSize - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                               //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) BOOL partiallyLoaded;                                //@synthesize partiallyLoaded=_partiallyLoaded - In the implementation block
@property (nonatomic,readonly) BOOL isHTML; 
+(BOOL)supportsSecureCoding;
+(id)classesForUnarchivingTextData;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(BOOL)isHTML;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)htmlContentData;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageId;
-(void)setHtmlContentData:(NSData *)arg1 ;
-(void)setMainAlternativeValid:(BOOL)arg1 ;
-(void)setPartiallyLoaded:(BOOL)arg1 ;
-(BOOL)mainAlternativeValid;
-(BOOL)partiallyLoaded;
-(NSString *)externalReferenceId;
-(void)setExternalReferenceId:(NSString *)arg1 ;
-(NSData *)textData;
-(void)setTextData:(NSData *)arg1 ;
-(BOOL)hasTextData;
-(void)setHasTextData:(BOOL)arg1 ;
-(unsigned long long)originalContentSize;
-(void)setOriginalContentSize:(unsigned long long)arg1 ;
@end

