/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class HMFHTTPRequestInternal, NSURL, NSString, NSDictionary, NSData, NSURLRequest;

@interface HMFHTTPRequest : HMFObject {

	HMFHTTPRequestInternal* _internal;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;                           //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest; 
-(NSData *)body;
-(id)init;
-(NSString *)method;
-(NSURLRequest *)urlRequest;
-(HMFHTTPRequestInternal *)internal;
-(NSDictionary *)headerFields;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)attributeDescriptions;
-(NSURL *)URL;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

