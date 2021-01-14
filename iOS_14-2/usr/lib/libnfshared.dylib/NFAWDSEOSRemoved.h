/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEOSRemovedEvent, NSString;

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol> {

	unsigned _hardwareType;
	AWDNFCSEOSRemovedEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                          //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned reason; 
@property (assign,nonatomic) BOOL hasExpressTransactionStarted; 
@property (assign,nonatomic) BOOL hasCardEmulationStarted; 
@property (nonatomic,retain) AWDNFCSEOSRemovedEvent * metric;                //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(AWDNFCSEOSRemovedEvent *)metric;
-(id)getMetric;
-(unsigned)reason;
-(unsigned)getMetricId;
-(void)setReason:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCSEOSRemovedEvent *)arg1 ;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
-(void)updateExceptionUUID:(id)arg1 ;
@end

