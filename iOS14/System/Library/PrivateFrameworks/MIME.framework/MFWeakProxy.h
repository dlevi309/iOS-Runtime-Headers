/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <Foundation/NSProxy.h>

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {

	Class _objectClass;
	MFWeakReferenceHolder* _weakRef;
	unsigned long long _hash;

}
+(id)weakProxyForObject:(id)arg1 ;
-(id)self;
-(Class)class;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(BOOL)isProxy;
-(Class)superclass;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

