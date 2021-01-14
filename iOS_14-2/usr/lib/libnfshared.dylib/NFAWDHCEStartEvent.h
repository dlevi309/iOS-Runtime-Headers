/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEStartEvent, NSString;

@interface NFAWDHCEStartEvent : NSObject <NFAWDEventProtocol> {

	unsigned _messageSize;
	unsigned _messageType;
	unsigned _type;
	AWDNFCHCEStartEvent* _metric;

}

@property (assign,nonatomic) unsigned messageSize;                      //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) unsigned messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCHCEStartEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(id)init;
-(AWDNFCHCEStartEvent *)metric;
-(void)setMessageSize:(unsigned)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCHCEStartEvent *)arg1 ;
-(unsigned)messageSize;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
@end

