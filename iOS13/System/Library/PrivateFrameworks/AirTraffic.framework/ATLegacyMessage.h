/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)data;
-(NSError *)result;
-(double)timestamp;
-(void)setResult:(NSError *)arg1 ;
-(NSDictionary *)parameters;
-(void)setTimestamp:(double)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(unsigned)messageId;
-(void)setMessageId:(unsigned)arg1 ;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(NSData *)sig;
-(id)parameterForKey:(id)arg1 ;
-(id)partialResponseWithParameters:(id)arg1 ;
-(unsigned)sessionNumber;
-(void)setSessionNumber:(unsigned)arg1 ;
-(void)setSig:(NSData *)arg1 ;
-(id)responseWithResultError:(id)arg1 parameters:(id)arg2 ;
@end

