/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)method;
-(NSURL *)URL;
-(HMFHTTPRequestInternal *)internal;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(NSURLRequest *)urlRequest;
-(id)attributeDescriptions;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

