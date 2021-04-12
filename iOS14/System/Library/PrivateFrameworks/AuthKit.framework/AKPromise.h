/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSError, NSMutableArray;

@interface AKPromise : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _completed;
	id _value;
	NSError* _error;
	NSMutableArray* _callbacks;

}
-(id)then:(/*^block*/id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)_chain:(/*^block*/id)arg1 ;
-(id)catch:(/*^block*/id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_startWithBlock:(/*^block*/id)arg1 ;
-(void)_completeWithValue:(id)arg1 error:(id)arg2 ;
-(void)onComplete:(/*^block*/id)arg1 ;
@end

