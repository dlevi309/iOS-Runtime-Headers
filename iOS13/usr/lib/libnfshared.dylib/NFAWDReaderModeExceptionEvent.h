/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(AWDNFCReaderModeExceptionEvent *)metric;
-(void)setMetric:(AWDNFCReaderModeExceptionEvent *)arg1 ;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end

