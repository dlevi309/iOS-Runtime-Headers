/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setOptions:(unsigned)arg1 ;
-(NSDictionary *)parameters;
-(void)setTimestamp:(double)arg1 ;
-(ATCodableStream *)stream;
-(void)setStream:(ATCodableStream *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)messageID;
-(void)setMessageID:(unsigned)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(NSInputStream *)dataStream;
-(id)additionalDescription;
-(void)setDataStream:(NSInputStream *)arg1 ;
@end

