/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMConnectivityExceptionEvent, NSString;

@interface NFAWDTSMConnectivityException : NSObject <NFAWDEventProtocol> {

	unsigned _errorCode;
	AWDNFCTSMConnectivityExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned errorCode;                                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) AWDNFCTSMConnectivityExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCTSMConnectivityExceptionEvent *)metric;
-(unsigned)errorCode;
-(id)getMetric;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCTSMConnectivityExceptionEvent *)arg1 ;
-(void)updateExceptionUUID:(id)arg1 ;
@end

