/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,copy) NSData * body; 
@property (nonatomic,copy) NSDictionary * headerFields; 
-(void)setBody:(NSData *)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

