/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEStateChangeEvent, NSString;

@interface NFAWDHCEStateChangeEvent : NSObject <NFAWDEventProtocol> {

	unsigned _state;
	AWDNFCHCEStateChangeEvent* _metric;

}

@property (assign,nonatomic) unsigned state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AWDNFCHCEStateChangeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCHCEStateChangeEvent *)metric;
-(id)getMetric;
-(void)setState:(unsigned)arg1 ;
-(unsigned)state;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCHCEStateChangeEvent *)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
@end

