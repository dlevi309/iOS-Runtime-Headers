/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	NSMethodSignature* _signature;
	NSMutableArray* _container;
	BOOL* _replacedByPointerBacking;
	unsigned _magic;
	unsigned char _retainedArgs;
	unsigned char _stackAllocated;

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) BOOL argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(unsigned long long)requiredStackSizeForSignature:(id)arg1 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)debugDescription;
-(BOOL)_hasBlockArgument;
-(void)invoke;
-(void)retainArguments;
-(void)setTarget:(id)arg1 ;
-(NSMethodSignature *)methodSignature;
-(void)getReturnValue:(void*)arg1 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)_addAttachedObject:(id)arg1 ;
-(BOOL)argumentsRetained;
-(void)invokeWithTarget:(id)arg1 ;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(id)_initWithMethodSignature:(id)arg1 frame:(void*)arg2 buffer:(void*)arg3 size:(unsigned long long)arg4 ;
-(SEL)selector;
-(id)init;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

