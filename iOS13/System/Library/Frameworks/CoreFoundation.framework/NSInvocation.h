/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id _signedTarget;
	SEL _signedSelector;
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
-(id)debugDescription;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)_hasBlockArgument;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(void)retainArguments;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)invoke;
-(id)_initWithMethodSignature:(id)arg1 frame:(void*)arg2 buffer:(void*)arg3 size:(unsigned long long)arg4 ;
-(NSMethodSignature *)methodSignature;
-(BOOL)argumentsRetained;
-(void)_addAttachedObject:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(void)getReturnValue:(void*)arg1 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
-(void)invokeWithTarget:(id)arg1 ;
@end

