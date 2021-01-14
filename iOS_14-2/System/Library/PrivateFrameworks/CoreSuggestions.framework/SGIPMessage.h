/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SGIPPerson, NSArray, NSDate;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isSent;
	BOOL _isGroupConversation;
	BOOL _isSenderSignificant;
	NSString* _messageId;
	SGIPPerson* _sender;
	NSArray* _recipients;
	NSString* _subject;
	NSDate* _dateSent;
	NSArray* _messageUnits;

}

@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) SGIPPerson * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSString * subject;                    //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                     //@synthesize dateSent=_dateSent - In the implementation block
@property (assign,nonatomic) BOOL isSent;                           //@synthesize isSent=_isSent - In the implementation block
@property (assign,nonatomic) BOOL isGroupConversation;              //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (assign,nonatomic) BOOL isSenderSignificant;              //@synthesize isSenderSignificant=_isSenderSignificant - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits;                //@synthesize messageUnits=_messageUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageWithIPMessage:(id)arg1 ;
-(NSArray *)recipients;
-(NSString *)subject;
-(SGIPPerson *)sender;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setSender:(SGIPPerson *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSent;
-(id)description;
-(BOOL)isGroupConversation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)toIPMessage;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setIsGroupConversation:(BOOL)arg1 ;
-(BOOL)isSenderSignificant;
-(void)setIsSenderSignificant:(BOOL)arg1 ;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
@end

