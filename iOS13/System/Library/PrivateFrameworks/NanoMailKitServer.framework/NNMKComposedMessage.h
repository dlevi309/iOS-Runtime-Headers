/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) NSString * composedMessageId;                         //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long sendingType;                       //@synthesize sendingType=_sendingType - In the implementation block
@property (nonatomic,retain) NSArray * to;                                         //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSString * subject;                                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * body;                                      //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * referenceMessageId;                        //@synthesize referenceMessageId=_referenceMessageId - In the implementation block
@property (nonatomic,retain) NSString * standaloneReferenceMessageId;              //@synthesize standaloneReferenceMessageId=_standaloneReferenceMessageId - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                              //@synthesize includeAttachments=_includeAttachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)to;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setTo:(NSArray *)arg1 ;
-(NSArray *)cc;
-(void)setCc:(NSArray *)arg1 ;
-(BOOL)includeAttachments;
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

