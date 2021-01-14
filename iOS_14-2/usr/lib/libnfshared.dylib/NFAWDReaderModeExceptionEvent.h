/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCReaderModeExceptionEvent, NSString;

@interface NFAWDReaderModeExceptionEvent : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	unsigned _errorCode;
	AWDNFCReaderModeExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) AWDNFCReaderModeExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCReaderModeExceptionEvent *)metric;
-(unsigned)errorCode;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCReaderModeExceptionEvent *)arg1 ;
@end

