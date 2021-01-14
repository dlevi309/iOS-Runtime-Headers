/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSDate, CEMAnyPayload;

@interface CEMMessageBase : CEMPayloadBase {

	NSString* _messageType;
	NSString* _messageIdentifier;
	NSString* _messageInReplyTo;
	NSDate* _messageTimestamp;
	CEMAnyPayload* _messagePayload;

}

@property (nonatomic,copy) NSString * messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * messageInReplyTo;                 //@synthesize messageInReplyTo=_messageInReplyTo - In the implementation block
@property (nonatomic,copy) NSDate * messageTimestamp;                   //@synthesize messageTimestamp=_messageTimestamp - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * messagePayload;              //@synthesize messagePayload=_messagePayload - In the implementation block
+(id)messageForPayload:(id)arg1 error:(id*)arg2 ;
+(id)messageForData:(id)arg1 error:(id*)arg2 ;
-(id)serialize;
-(NSString *)messageType;
-(void)setMessageType:(NSString *)arg1 ;
-(void)setMessagePayload:(CEMAnyPayload *)arg1 ;
-(CEMAnyPayload *)messagePayload;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(BOOL)loadMessageFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)messageInReplyTo;
-(void)setMessageInReplyTo:(NSString *)arg1 ;
-(NSDate *)messageTimestamp;
-(void)setMessageTimestamp:(NSDate *)arg1 ;
@end

