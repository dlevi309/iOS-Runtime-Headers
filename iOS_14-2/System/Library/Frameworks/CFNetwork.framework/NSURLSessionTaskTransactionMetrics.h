/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TransactionMetrics, NSString, NSUUID, NSDate, NSURLRequest, NSURLResponse, NSNumber;

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {

	BOOL __connectionTimingCached;
	BOOL __forCache;
	__CFN_TransactionMetrics* __metrics;
	SCD_Struct_NS57 __connectionTiming;

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
@property (copy,readonly) NSDate * _firstByteReceivedDate; 
@property (copy,readonly) NSString * _interfaceName; 
@property (assign,nonatomic) SCD_Struct_NS57 _connectionTiming;                    //@synthesize _connectionTiming=__connectionTiming - In the implementation block
@property (assign,nonatomic) BOOL _connectionTimingCached;                         //@synthesize _connectionTimingCached=__connectionTimingCached - In the implementation block
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
@property (readonly) long long domainResolutionProtocol; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(NSNumber *)localPort;
-(NSString *)networkProtocolName;
-(BOOL)_localCache;
-(NSString *)_interfaceName;
-(BOOL)_serverPush;
-(unsigned)_redirected;
-(NSNumber *)remotePort;
-(id)init;
-(long long)countOfResponseHeaderBytesReceived;
-(long long)countOfResponseBodyBytesReceived;
-(long long)countOfRequestBodyBytesBeforeEncoding;
-(NSString *)remoteAddress;
-(long long)countOfResponseBodyBytesAfterDecoding;
-(NSString *)localAddress;
-(NSNumber *)negotiatedTLSCipherSuite;
-(long long)_responseHeaderBytesReceived;
-(NSDate *)responseStartDate;
-(BOOL)isProxyConnection;
-(NSDate *)responseEndDate;
-(BOOL)_connectionRace;
-(long long)_totalBytesSent;
-(SCD_Struct_NS57)_connectionTiming;
-(BOOL)_secureConnection;
-(long long)countOfRequestHeaderBytesSent;
-(NSDate *)secureConnectionStartDate;
-(long long)countOfRequestBodyBytesSent;
-(void)set_connectionTimingCached:(BOOL)arg1 ;
-(long long)_responseBodyBytesDecoded;
-(NSDate *)fetchStartDate;
-(NSDate *)connectEndDate;
-(NSDate *)requestEndDate;
-(BOOL)_usesMultipath;
-(int)_negotiatedTLSProtocol;
-(NSDate *)connectStartDate;
-(NSDate *)_firstByteReceivedDate;
-(long long)_responseBodyBytesReceived;
-(NSDate *)domainLookupStartDate;
-(NSDate *)requestStartDate;
-(void)set_connectionTiming:(SCD_Struct_NS57)arg1 ;
-(NSString *)_localAddressAndPort;
-(unsigned short)_negotiatedTLSCipher;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(NSString *)_remoteAddressAndPort;
-(NSUUID *)_connectionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)domainResolutionProtocol;
-(BOOL)isReusedConnection;
-(BOOL)_apsRelayAttempted;
-(BOOL)_apsRelaySucceeded;
-(NSDate *)domainLookupEndDate;
-(long long)_totalBytesReceived;
-(NSDate *)secureConnectionEndDate;
-(BOOL)_connectionTimingCached;
-(long long)_requestHeaderBytesSent;
-(NSURLRequest *)request;
-(id)description;
-(NSURLResponse *)response;
-(long long)resourceFetchType;
-(BOOL)isCellular;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMultipath;
-(BOOL)isConstrained;
-(BOOL)isExpensive;
@end

