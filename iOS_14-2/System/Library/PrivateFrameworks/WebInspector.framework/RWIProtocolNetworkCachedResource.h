/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
+(id)safe_initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(RWIProtocolNetworkResponse *)response;
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(long long)type;
-(double)bodySize;
-(void)setBodySize:(double)arg1 ;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
@end

