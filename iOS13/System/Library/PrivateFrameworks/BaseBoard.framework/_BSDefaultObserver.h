/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDefaultObserver.h>

@protocol OS_dispatch_queue;
@class BSAbstractDefaultDomain, NSObject, NSArray, NSString;

@interface _BSDefaultObserver : NSObject <BSDefaultObserver> {

	BSAbstractDefaultDomain* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _defaultsToObserve;
	/*^block*/id _fireBlock;
	BOOL _invalidated;
	AI _debounceCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAbstractDefaultDomain:(id)arg1 defaultsToObserve:(id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
@end

