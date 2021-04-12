/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface TSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject*<OS_dispatch_queue> mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) BOOL indeterminate; 
@property (copy) NSString * message; 
-(id)init;
-(void)dealloc;
-(double)value;
-(BOOL)isIndeterminate;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(BOOL)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end

