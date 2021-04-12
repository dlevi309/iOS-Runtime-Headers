/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)reason;
-(AWDNFCSEOSRemovedEvent *)metric;
-(void)setMetric:(AWDNFCSEOSRemovedEvent *)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
@end

