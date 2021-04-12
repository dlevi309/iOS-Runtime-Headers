/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <Foundation/NSProxy.h>

@class IMWeakReference;

@interface _CKWeakWrapper : NSProxy {

	IMWeakReference* _weakReference;
	Class _targetClass;

}

@property (nonatomic,retain) IMWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (nonatomic,retain) Class targetClass;                            //@synthesize targetClass=_targetClass - In the implementation block
-(Class)class;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(Class)targetClass;
-(IMWeakReference *)weakReference;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(void)setTargetClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setWeakReference:(IMWeakReference *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

