/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)endpoint;
-(NSString *)url;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
@end

