/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSInputStream, ATCodableStream;

@interface ATMessage : NSObject <NSSecureCoding> {

	unsigned _messageID;
	unsigned _sessionID;
	NSDictionary* _parameters;
	double _timestamp;
	NSInputStream* _dataStream;
	ATCodableStream* _stream;

}

@property (nonatomic,retain) ATCodableStream * stream;                //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSInputStream * dataStream;              //@synthesize dataStream=_dataStream - In the implementation block
@property (assign,nonatomic) unsigned options; 
+(BOOL)supportsSecureCoding;
-(ATCodableStream *)stream;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned)sessionID;
-(void)setStream:(ATCodableStream *)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setMessageID:(unsigned)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
-(id)description;
-(NSInputStream *)dataStream;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)messageID;
-(id)parameterForKey:(id)arg1 ;
-(id)additionalDescription;
-(void)setDataStream:(NSInputStream *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

