/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCMiddlewareExceptionEvent, NSData, NSString;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _hardwareType;
	unsigned _type;
	unsigned _errorCode;
	AWDNFCMiddlewareExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned hardwareType;                                //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSData * breadcrumb; 
@property (nonatomic,retain) AWDNFCMiddlewareExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(AWDNFCMiddlewareExceptionEvent *)metric;
-(unsigned)errorCode;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCMiddlewareExceptionEvent *)arg1 ;
-(unsigned)version;
-(void)setBreadcrumb:(NSData *)arg1 ;
-(NSData *)breadcrumb;
-(void)updateExceptionUUID:(id)arg1 ;
@end

