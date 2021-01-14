/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHardwareExceptionEvent, NSString;

@interface NFAWDHardwareException : NSObject <NFAWDEventProtocol> {

	unsigned _hardwareType;
	unsigned _type;
	AWDNFCHardwareExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                              //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * data; 
@property (nonatomic,retain) AWDNFCHardwareExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(AWDNFCHardwareExceptionEvent *)metric;
-(void)setType:(unsigned)arg1 ;
-(void)setData:(NSString *)arg1 ;
-(id)getMetric;
-(NSString *)data;
-(unsigned)type;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCHardwareExceptionEvent *)arg1 ;
-(void)updateExceptionUUID:(id)arg1 ;
@end

