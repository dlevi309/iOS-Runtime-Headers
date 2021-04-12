/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSURLSessionTaskTransactionMetrics, NSString, NSURL;

@interface OspreyConnectionMetrics : NSObject {

	NSURLSessionTaskTransactionMetrics* _metrics;
	unsigned long long _connectionState;

}

@property (nonatomic,readonly) unsigned long long connectionState;                    //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) double fetchStartToDomainLookupStartTime; 
@property (nonatomic,readonly) double dnsResolutionTime; 
@property (nonatomic,readonly) double connectionEstablishmentTime; 
@property (nonatomic,readonly) double tcpConnectTime; 
@property (nonatomic,readonly) double secureConnectionTime; 
@property (nonatomic,readonly) double fetchStartToFirstByteTime; 
@property (nonatomic,readonly) NSString * connectionMethod; 
@property (nonatomic,readonly) NSURL * requestURL; 
-(unsigned long long)connectionState;
-(id)initWithMetrics:(id)arg1 ;
-(NSURL *)requestURL;
-(NSString *)connectionMethod;
-(double)connectionEstablishmentTime;
-(double)dnsResolutionTime;
-(double)tcpConnectTime;
-(double)secureConnectionTime;
-(double)fetchStartToDomainLookupStartTime;
-(double)fetchStartToFirstByteTime;
@end

