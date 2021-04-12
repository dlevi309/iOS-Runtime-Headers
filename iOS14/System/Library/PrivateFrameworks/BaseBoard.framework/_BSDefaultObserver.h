/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

