/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(AWDNFCMiddlewareExceptionEvent *)metric;
-(void)setMetric:(AWDNFCMiddlewareExceptionEvent *)arg1 ;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setBreadcrumb:(NSData *)arg1 ;
-(NSData *)breadcrumb;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
@end

