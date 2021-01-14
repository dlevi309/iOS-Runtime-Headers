/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, CATOperation, NSString;

@interface _CATObserverManager : NSObject <CATOperationObserver> {

	NSMutableSet* mObservers;
	int mState;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_source> mProgressSource;
	CATOperation* mOperation;
	CATOperation* mStrongOperation;
	BOOL mIsObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOperation:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)operationDidStart:(id)arg1 ;
-(void)notifyObserversOperationDidProgress:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 ;
@end

