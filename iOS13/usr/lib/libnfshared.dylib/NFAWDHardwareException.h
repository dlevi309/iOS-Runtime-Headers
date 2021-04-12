/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(AWDNFCHardwareExceptionEvent *)metric;
-(void)setMetric:(AWDNFCHardwareExceptionEvent *)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
@end

