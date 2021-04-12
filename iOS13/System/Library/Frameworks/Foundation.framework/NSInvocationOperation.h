/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@class NSInvocation, NSException;

@interface NSInvocationOperation : NSOperation {

	NSInvocation* _inv;
	NSException* _exception;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(id)init;
-(void)dealloc;
-(void)main;
-(id)initWithInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(NSInvocation *)invocation;
-(id)result;
@end

