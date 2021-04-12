/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)postData;
-(void)setPostData:(NSString *)arg1 ;
-(NSString *)method;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
@end

