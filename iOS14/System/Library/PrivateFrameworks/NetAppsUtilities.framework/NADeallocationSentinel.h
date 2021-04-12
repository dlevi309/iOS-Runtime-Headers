/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NADeallocationTracer *)tracer;
-(id)initWithTargetObject:(id)arg1 finalizer:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)tracerIsDeallocating;
-(id)targetObject;
-(id)finalizer;
@end

