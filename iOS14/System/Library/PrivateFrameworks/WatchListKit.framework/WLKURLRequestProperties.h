/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, NSDictionary, NSNumber;

@interface WLKURLRequestProperties : NSObject {

	NSString* _endpoint;
	NSString* _httpMethod;
	NSDictionary* _queryParameters;
	NSDictionary* _headers;
	NSString* _caller;
	NSNumber* _timeout;
	NSNumber* _apiVersion;
	long long _options;

}

@property (nonatomic,copy) NSString * endpoint;                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                       //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * caller;                           //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSNumber * timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSNumber * apiVersion;                       //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign,nonatomic) long long options;                         //@synthesize options=_options - In the implementation block
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(long long)arg8 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(id)shortDescription;
-(long long)options;
-(NSString *)endpoint;
-(NSNumber *)timeout;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(NSNumber *)apiVersion;
-(NSString *)httpMethod;
-(id)description;
-(void)setApiVersion:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)queryParameters;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)URLRequestWithConfiguration:(id)arg1 ;
@end

