/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
+(id)safe_initWithHeaders:(id)arg1 ;
-(id)initWithHeaders:(id)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
@end

