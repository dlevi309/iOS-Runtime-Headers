/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFHTTPResponseInternal, HMFHTTPRequest, NSDictionary, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {

	HMFHTTPResponseInternal* _internal;
	HMFHTTPRequest* _request;

}

@property (nonatomic,readonly) HMFHTTPResponseInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)statusCode;
-(HMFHTTPRequest *)request;
-(HMFHTTPResponseInternal *)internal;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(id)attributeDescriptions;
-(id)initWithRequest:(id)arg1 internalResponse:(id)arg2 ;
@end

