/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolSecurityConnection;

@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * protocol; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * connectionIdentifier; 
@property (nonatomic,copy) NSString * remoteAddress; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (assign,nonatomic) double requestHeaderBytesSent; 
@property (assign,nonatomic) double requestBodyBytesSent; 
@property (assign,nonatomic) double responseHeaderBytesReceived; 
@property (assign,nonatomic) double responseBodyBytesReceived; 
@property (assign,nonatomic) double responseBodyDecodedSize; 
@property (nonatomic,retain) RWIProtocolSecurityConnection * securityConnection; 
+(id)ik_networkMetricsFromURLRequest:(id)arg1 response:(id)arg2 responseBody:(id)arg3 timingData:(id)arg4 ;
-(void)setProtocol:(NSString *)arg1 ;
-(void)setConnectionIdentifier:(NSString *)arg1 ;
-(NSString *)protocol;
-(NSString *)remoteAddress;
-(double)responseBodyBytesReceived;
-(NSString *)connectionIdentifier;
-(void)setRemoteAddress:(NSString *)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setResponseBodyBytesReceived:(double)arg1 ;
-(void)setResponseBodyDecodedSize:(double)arg1 ;
-(void)setRequestHeaderBytesSent:(double)arg1 ;
-(void)setRequestBodyBytesSent:(double)arg1 ;
-(double)requestHeaderBytesSent;
-(double)requestBodyBytesSent;
-(void)setResponseHeaderBytesReceived:(double)arg1 ;
-(double)responseHeaderBytesReceived;
-(double)responseBodyDecodedSize;
-(void)setSecurityConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityConnection *)securityConnection;
@end

