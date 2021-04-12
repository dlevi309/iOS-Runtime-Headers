/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithInvocation:(id)arg1 ;
-(NSInvocation *)invocation;
-(unsigned long long)errorCount;
-(void)setErrorCount:(unsigned long long)arg1 ;
@end

