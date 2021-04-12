/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSInvocation;

@interface _UIActionWhenIdle : NSObject {

	NSInvocation* _invocation;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
+(id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)invoke;
-(NSInvocation *)invocation;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(BOOL)isValid;
-(id)initWithInvocation:(id)arg1 ;
-(void)addObserverToRunLoop;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

