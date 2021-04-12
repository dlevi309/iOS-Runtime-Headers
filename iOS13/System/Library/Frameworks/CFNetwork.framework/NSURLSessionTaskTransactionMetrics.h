/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TransactionMetrics, NSString, NSUUID, NSURLRequest, NSURLResponse, NSDate, NSNumber;

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {

	BOOL __connectionTimingCached;
	BOOL __forCache;
	__CFN_TransactionMetrics* __metrics;
	SCD_Struct_NS81 __connectionTiming;

}

@property (readonly) BOOL _secureConnection; 
@property (readonly) BOOL _localCache; 
@property (readonly) BOOL _serverPush; 
@property (readonly) BOOL _connectionRace; 
@property (readonly) unsigned _redirected; 
@property (copy,readonly) NSString * _localAddressAndPort; 
@property (copy,readonly) NSString * _remoteAddressAndPort; 
@property (copy,readonly) NSUUID * _connectionIdentifier; 
@property (readonly) long long _requestHeaderBytesSent; 
@property (readonly) long long _responseHeaderBytesReceived; 
@property (readonly) long long _responseBodyBytesReceived; 
@property (readonly) long long _responseBodyBytesDecoded; 
@property (readonly) BOOL _apsRelayAttempted; 
@property (readonly) BOOL _apsRelaySucceeded; 
@property (readonly) long long _totalBytesSent; 
@property (readonly) long long _totalBytesReceived; 
@property (readonly) int _negotiatedTLSProtocol; 
@property (readonly) unsigned short _negotiatedTLSCipher; 
@property (readonly) BOOL _usesMultipath; 
@property (assign,nonatomic) SCD_Struct_NS81 _connectionTiming;                    //@synthesize _connectionTiming=__connectionTiming - In the implementation block
@property (assign,nonatomic) BOOL _connectionTimingCached;                         //@synthesize _connectionTimingCached=__connectionTimingCached - In the implementation block
@property (nonatomic,readonly) __CFN_TransactionMetrics * _metrics;                //@synthesize _metrics=__metrics - In the implementation block
@property (nonatomic,readonly) BOOL _forCache;                                     //@synthesize _forCache=__forCache - In the implementation block
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSDate * fetchStartDate; 
@property (copy,readonly) NSDate * domainLookupStartDate; 
@property (copy,readonly) NSDate * domainLookupEndDate; 
@property (copy,readonly) NSDate * connectStartDate; 
@property (copy,readonly) NSDate * secureConnectionStartDate; 
@property (copy,readonly) NSDate * secureConnectionEndDate; 
@property (copy,readonly) NSDate * connectEndDate; 
@property (copy,readonly) NSDate * requestStartDate; 
@property (copy,readonly) NSDate * requestEndDate; 
@property (copy,readonly) NSDate * responseStartDate; 
@property (copy,readonly) NSDate * responseEndDate; 
@property (copy,readonly) NSString * networkProtocolName; 
@property (getter=isProxyConnection,readonly) BOOL proxyConnection; 
@property (getter=isReusedConnection,readonly) BOOL reusedConnection; 
@property (readonly) long long resourceFetchType; 
@property (readonly) long long countOfRequestHeaderBytesSent; 
@property (readonly) long long countOfRequestBodyBytesSent; 
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding; 
@property (readonly) long long countOfResponseHeaderBytesReceived; 
@property (readonly) long long countOfResponseBodyBytesReceived; 
@property (readonly) long long countOfResponseBodyBytesAfterDecoding; 
@property (copy,readonly) NSString * localAddress; 
@property (copy,readonly) NSNumber * localPort; 
@property (copy,readonly) NSString * remoteAddress; 
@property (copy,readonly) NSNumber * remotePort; 
@property (copy,readonly) NSNumber * negotiatedTLSProtocolVersion; 
@property (copy,readonly) NSNumber * negotiatedTLSCipherSuite; 
@property (getter=isCellular,readonly) BOOL cellular; 
@property (getter=isExpensive,readonly) BOOL expensive; 
@property (getter=isConstrained,readonly) BOOL constrained; 
@property (getter=isMultipath,readonly) BOOL multipath; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)localPort;
-(NSNumber *)remotePort;
-(__CFN_TransactionMetrics *)_metrics;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(NSString *)networkProtocolName;
-(BOOL)isCellular;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(BOOL)isMultipath;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(NSNumber *)negotiatedTLSCipherSuite;
-(unsigned)_redirected;
-(id)initWithMetrics:(id)arg1 forCache:(BOOL)arg2 ;
-(void)translateConnectionTiming;
-(NSDate *)fetchStartDate;
-(NSDate *)domainLookupStartDate;
-(NSDate *)domainLookupEndDate;
-(NSDate *)connectStartDate;
-(NSDate *)secureConnectionStartDate;
-(NSDate *)secureConnectionEndDate;
-(NSDate *)connectEndDate;
-(NSDate *)requestStartDate;
-(NSDate *)requestEndDate;
-(NSDate *)responseStartDate;
-(NSDate *)responseEndDate;
-(BOOL)isProxyConnection;
-(BOOL)isReusedConnection;
-(long long)resourceFetchType;
-(long long)countOfRequestHeaderBytesSent;
-(long long)countOfRequestBodyBytesSent;
-(long long)countOfRequestBodyBytesBeforeEncoding;
-(long long)countOfResponseHeaderBytesReceived;
-(long long)countOfResponseBodyBytesReceived;
-(long long)countOfResponseBodyBytesAfterDecoding;
-(NSString *)localAddress;
-(NSString *)remoteAddress;
-(SCD_Struct_NS81)_connectionTiming;
-(void)set_connectionTiming:(SCD_Struct_NS81)arg1 ;
-(BOOL)_connectionTimingCached;
-(void)set_connectionTimingCached:(BOOL)arg1 ;
-(BOOL)_forCache;
-(BOOL)_secureConnection;
-(BOOL)_localCache;
-(BOOL)_serverPush;
-(BOOL)_connectionRace;
-(NSString *)_localAddressAndPort;
-(NSString *)_remoteAddressAndPort;
-(NSUUID *)_connectionIdentifier;
-(long long)_requestHeaderBytesSent;
-(long long)_responseHeaderBytesReceived;
-(long long)_responseBodyBytesReceived;
-(long long)_responseBodyBytesDecoded;
-(BOOL)_apsRelayAttempted;
-(BOOL)_apsRelaySucceeded;
-(long long)_totalBytesSent;
-(long long)_totalBytesReceived;
-(int)_negotiatedTLSProtocol;
-(unsigned short)_negotiatedTLSCipher;
-(BOOL)_usesMultipath;
@end

