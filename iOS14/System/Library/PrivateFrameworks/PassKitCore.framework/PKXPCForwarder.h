/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKXPCForwarder : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	id _target;
	Class _targetClass;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)clearTarget;
-(id)_initWithTarget:(id)arg1 targetClass:(Class)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

