/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _options;

}

@property (nonatomic,copy) NSString * endpoint;                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                       //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * caller;                           //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSNumber * timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long options;                         //@synthesize options=_options - In the implementation block
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(NSString *)endpoint;
-(void)setOptions:(long long)arg1 ;
-(NSNumber *)timeout;
-(void)setTimeout:(NSNumber *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
-(id)shortDescription;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)httpMethod;
-(void)setHttpMethod:(NSString *)arg1 ;
-(id)URLRequestWithConfiguration:(id)arg1 ;
@end

