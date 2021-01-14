/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
+(id)safe_initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
-(NSString *)statusText;
-(void)setStatus:(int)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(int)status;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
@end

