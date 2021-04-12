/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
+(id)safe_initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3 ;
@end

