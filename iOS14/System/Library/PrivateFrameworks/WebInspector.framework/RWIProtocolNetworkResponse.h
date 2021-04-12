/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * mimeType; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (nonatomic,retain) RWIProtocolNetworkResourceTiming * timing; 
@property (nonatomic,retain) RWIProtocolSecurity * security; 
+(id)ik_responseFromURLResponse:(id)arg1 forRequest:(id)arg2 ;
+(id)safe_initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6 ;
+(id)ik_responseFromURLResponse:(id)arg1 ;
-(NSString *)statusText;
-(RWIProtocolSecurity *)security;
-(NSString *)mimeType;
-(RWIProtocolNetworkResourceTiming *)timing;
-(void)setTiming:(RWIProtocolNetworkResourceTiming *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)url;
-(void)setSource:(long long)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(void)setSecurity:(RWIProtocolSecurity *)arg1 ;
-(int)status;
-(long long)source;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6 ;
@end

