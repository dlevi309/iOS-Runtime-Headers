/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * postData; 
+(id)safe_initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
+(id)ik_networkRequestFromURLRequest:(id)arg1 ;
-(NSString *)method;
-(NSString *)url;
-(void)setMethod:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setPostData:(NSString *)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
@end

