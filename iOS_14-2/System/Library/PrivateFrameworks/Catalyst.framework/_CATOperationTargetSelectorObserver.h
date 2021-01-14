/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver> {

	id _target;
	SEL _selector;
	unsigned long long _events;
	id _userInfo;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id target;                                               //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                            //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) unsigned long long events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) id userInfo;                                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SEL)selector;
-(void)operationDidStart:(id)arg1 ;
-(id)userInfo;
-(id)init;
-(void)invokeActionWithOperation:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)operationDidProgress:(id)arg1 ;
-(id)target;
-(unsigned long long)events;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5 ;
@end

