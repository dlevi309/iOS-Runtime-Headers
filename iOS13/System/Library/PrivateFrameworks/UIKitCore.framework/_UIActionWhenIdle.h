/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSInvocation;

@interface _UIActionWhenIdle : NSObject {

	NSInvocation* _invocation;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
+(id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)invoke;
-(id)initWithInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(NSInvocation *)invocation;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(void)addObserverToRunLoop;
@end

