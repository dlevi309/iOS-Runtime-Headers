/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSInvocation *)invocation;
-(void)main;
-(id)initWithInvocation:(id)arg1 ;
-(id)result;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)dealloc;
@end

