/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface NSProxy <NSObject> {

	Class isa;

}

@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
+(BOOL)isProxy;
+(id)alloc;
+(id)init;
+(unsigned long long)retainCount;
+(void)dealloc;
+(BOOL)isEqual:(id)arg1 ;
+(Class)class;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(BOOL)isKindOfClass:(Class)arg1 ;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)retain;
+(oneway void)release;
+(id)autorelease;
+(NSZone*)zone;
+(unsigned long long)hash;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(BOOL)retainWeakReference;
+(BOOL)allowsWeakReference;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)_tryRetain;
+(BOOL)_isDeallocating;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(id)copy;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)isAncestorOfObject:(id)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(BOOL)isFault;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)mutableCopy;
+(void)finalize;
+(id)_copyDescription;
-(BOOL)isNSDate__;
-(BOOL)isProxy;
-(unsigned long long)retainCount;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)retainWeakReference;
-(BOOL)allowsWeakReference;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(BOOL)isFault;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)finalize;
-(id)_copyDescription;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(BOOL)_allowsDirectEncoding;
@end

