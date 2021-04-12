/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SGIPPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(SGIPPerson *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)isSent;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(BOOL)isGroupConversation;
-(id)toIPMessage;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setIsGroupConversation:(BOOL)arg1 ;
-(BOOL)isSenderSignificant;
-(void)setIsSenderSignificant:(BOOL)arg1 ;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
@end

