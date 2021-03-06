/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NNMKComposedMessage : NSObject <NSSecureCoding> {

	BOOL _includeAttachments;
	NSString* _composedMessageId;
	unsigned long long _sendingType;
	NSArray* _to;
	NSArray* _cc;
	NSString* _subject;
	NSString* _body;
	NSString* _referenceMessageId;
	NSString* _standaloneReferenceMessageId;
	NSString* _accountId;

}

@property (nonatomic,retain) NSString * composedMessageId;                         //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long sendingType;                       //@synthesize sendingType=_sendingType - In the implementation block
@property (nonatomic,retain) NSArray * to;                                         //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSString * subject;                                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * body;                                      //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * referenceMessageId;                        //@synthesize referenceMessageId=_referenceMessageId - In the implementation block
@property (nonatomic,retain) NSString * standaloneReferenceMessageId;              //@synthesize standaloneReferenceMessageId=_standaloneReferenceMessageId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                                 //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                              //@synthesize includeAttachments=_includeAttachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)to;
-(NSArray *)cc;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)body;
-(id)init;
-(void)setTo:(NSArray *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(id)description;
-(BOOL)includeAttachments;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)accountId;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(void)setReferenceMessageId:(NSString *)arg1 ;
-(void)setSendingType:(unsigned long long)arg1 ;
-(NSString *)composedMessageId;
-(unsigned long long)sendingType;
-(NSString *)referenceMessageId;
-(NSString *)standaloneReferenceMessageId;
-(void)setStandaloneReferenceMessageId:(NSString *)arg1 ;
-(id)copyWithNewId;
@end

