/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)object;
-(Protocol *)protocol;
@end

