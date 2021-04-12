/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)protocol;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setProtocol:(NSString *)arg1 ;
-(NSString *)remoteAddress;
-(NSString *)connectionIdentifier;
-(void)setConnectionIdentifier:(NSString *)arg1 ;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(void)setRemoteAddress:(NSString *)arg1 ;
-(void)setResponseBodyDecodedSize:(double)arg1 ;
-(void)setResponseBodyBytesReceived:(double)arg1 ;
-(void)setRequestHeaderBytesSent:(double)arg1 ;
-(void)setRequestBodyBytesSent:(double)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(double)responseBodyBytesReceived;
-(double)requestHeaderBytesSent;
-(double)requestBodyBytesSent;
-(void)setResponseHeaderBytesReceived:(double)arg1 ;
-(double)responseHeaderBytesReceived;
-(double)responseBodyDecodedSize;
-(void)setSecurityConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityConnection *)securityConnection;
@end

