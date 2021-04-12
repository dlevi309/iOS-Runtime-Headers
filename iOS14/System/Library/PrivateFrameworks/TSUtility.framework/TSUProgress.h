/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)removeProgressObserver:(id)arg1 ;
-(id)init;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
-(void)dealloc;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(BOOL)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end

