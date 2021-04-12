/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCExpressTransactionEndedEvent, NSString;

@interface NFAWDExpressTransactionEndedEvent : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	AWDNFCExpressTransactionEndedEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCExpressTransactionEndedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCExpressTransactionEndedEvent *)metric;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCExpressTransactionEndedEvent *)arg1 ;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

