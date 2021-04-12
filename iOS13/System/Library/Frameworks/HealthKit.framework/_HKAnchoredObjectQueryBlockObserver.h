/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKAnchoredObjectQueryObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSString;

@interface _HKAnchoredObjectQueryBlockObserver : NSObject <_HKAnchoredObjectQueryObserver> {

	/*^block*/id _updateHandler;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)queryManager:(id)arg1 didReceiveUpdatesForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(id)initWithHandler:(/*^block*/id)arg1 operationQueue:(id)arg2 ;
-(id)initWithHandler:(/*^block*/id)arg1 dispatchQueue:(id)arg2 ;
@end

