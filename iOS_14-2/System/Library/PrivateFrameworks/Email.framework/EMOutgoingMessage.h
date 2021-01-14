/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMOutgoingMessageBuilder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSData, EMMessageObjectID, NSString;

@interface EMOutgoingMessage : NSObject <EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable> {

	BOOL _shouldSign;
	BOOL _shouldEncrypt;
	NSData* _messageData;
	long long _action;
	EMMessageObjectID* _originalMessageID;
	long long _conversationNotificationLevel;

}

@property (nonatomic,copy) NSData * messageData;                                   //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) long long action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL shouldSign;                                      //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                   //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (assign,nonatomic) long long conversationNotificationLevel;              //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,retain) EMMessageObjectID * originalMessageID;                //@synthesize originalMessageID=_originalMessageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)ef_publicDescription;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(NSString *)description;
-(EMMessageObjectID *)originalMessageID;
-(void)setOriginalMessageID:(EMMessageObjectID *)arg1 ;
-(id)initWithMessageData:(id)arg1 ;
-(BOOL)shouldEncrypt;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldSign;
-(void)setMessageData:(NSData *)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(long long)conversationNotificationLevel;
-(NSData *)messageData;
@end

