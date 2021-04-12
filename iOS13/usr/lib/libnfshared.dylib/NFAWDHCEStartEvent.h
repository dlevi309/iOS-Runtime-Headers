/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(AWDNFCHCEStartEvent *)metric;
-(void)setMetric:(AWDNFCHCEStartEvent *)arg1 ;
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
@end

