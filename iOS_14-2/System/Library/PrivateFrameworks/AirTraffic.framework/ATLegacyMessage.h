/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@class NSString, NSError, NSDictionary, NSData;

@interface ATLegacyMessage : NSObject {

	unsigned long long _messageType;
	unsigned _messageId;
	NSString* _name;
	NSString* _dataClass;
	NSError* _result;
	NSDictionary* _params;
	NSData* _payload;
	double _timestamp;
	NSData* _sig;
	unsigned _session;

}

@property (assign,nonatomic) unsigned long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned messageId;                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * dataClass;                        //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,retain) NSError * result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                   //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * payload;                            //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * sig;                                //@synthesize sig=_sig - In the implementation block
@property (assign,nonatomic) unsigned sessionNumber;                      //@synthesize session=_session - In the implementation block
+(id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned)arg3 ;
+(id)messageFromDictionary:(id)arg1 ;
+(void)setSessionNumber:(unsigned)arg1 ;
+(id)_messageTypeString:(unsigned long long)arg1 ;
+(unsigned)nextSessionNumber;
+(unsigned)currentSessionNumber;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 ;
+(id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3 ;
+(id)messageFromData:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setResult:(NSError *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned long long)messageType;
-(void)setPayload:(NSData *)arg1 ;
-(void)setMessageId:(unsigned)arg1 ;
-(void)setMessageType:(unsigned long long)arg1 ;
-(double)timestamp;
-(NSData *)payload;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSData *)sig;
-(void)setSig:(NSData *)arg1 ;
-(id)dictionary;
-(id)data;
-(void)setDataClass:(NSString *)arg1 ;
-(NSError *)result;
-(void)setName:(NSString *)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(id)partialResponseWithParameters:(id)arg1 ;
-(NSString *)dataClass;
-(void)setTimestamp:(double)arg1 ;
-(unsigned)sessionNumber;
-(void)setSessionNumber:(unsigned)arg1 ;
-(id)responseWithResultError:(id)arg1 parameters:(id)arg2 ;
-(unsigned)messageId;
@end

