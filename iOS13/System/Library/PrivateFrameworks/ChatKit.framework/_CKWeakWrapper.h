/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(IMWeakReference *)weakReference;
-(void)setWeakReference:(IMWeakReference *)arg1 ;
@end

