/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEAIDSelectEvent, NSData, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {

	AWDNFCSEAIDSelectEvent* _metric;

}

@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) AWDNFCSEAIDSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)aid;
-(id)init;
-(AWDNFCSEAIDSelectEvent *)metric;
-(id)getMetric;
-(void)setAid:(NSData *)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCSEAIDSelectEvent *)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

