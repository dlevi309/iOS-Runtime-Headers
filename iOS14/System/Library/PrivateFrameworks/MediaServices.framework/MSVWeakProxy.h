/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSProxy.h>

@class Protocol;

@interface MSVWeakProxy : NSProxy {

	id _object;
	Protocol* _protocol;

}

@property (nonatomic,__weak,readonly) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)proxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(Protocol *)protocol;
-(id)object;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

