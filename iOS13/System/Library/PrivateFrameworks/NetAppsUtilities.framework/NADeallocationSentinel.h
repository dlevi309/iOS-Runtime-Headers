/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NADeallocationTracerDelegate.h>

@class NADeallocationTracer, NSString;

@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate> {

	id _targetObject;
	/*^block*/id _finalizer;
	NADeallocationTracer* _tracer;

}

@property (nonatomic,readonly) id targetObject;                                   //@synthesize targetObject=_targetObject - In the implementation block
@property (nonatomic,copy,readonly) id finalizer;                                 //@synthesize finalizer=_finalizer - In the implementation block
@property (nonatomic,__weak,readonly) NADeallocationTracer * tracer;              //@synthesize tracer=_tracer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tracerIsDeallocating;
-(NADeallocationTracer *)tracer;
-(id)targetObject;
-(id)finalizer;
-(id)initWithTargetObject:(id)arg1 finalizer:(/*^block*/id)arg2 ;
@end

