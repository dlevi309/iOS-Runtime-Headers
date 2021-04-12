/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned long long _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned long long errorCount;              //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2 ;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(unsigned long long)errorCount;
-(void)setErrorCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

