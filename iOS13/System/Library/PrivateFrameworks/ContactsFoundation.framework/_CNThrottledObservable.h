/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler, CNCancelable;
@class CNObservable;

@interface _CNThrottledObservable : CNObservable {

	id<CNObservable> _observable;
	double _interval;
	unsigned long long _options;
	id<CNScheduler> _observerScheduler;
	id<CNScheduler> _resourceLock;
	id _mostRecentResult;
	id<CNCancelable> _delayToken;
	BOOL _isCoalescing;

}

@property (readonly) CNObservable * observable;                      //@synthesize observable=_observable - In the implementation block
@property (readonly) double interval;                                //@synthesize interval=_interval - In the implementation block
@property (readonly) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (readonly) id<CNScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) id<CNScheduler> resourceLock;                   //@synthesize resourceLock=_resourceLock - In the implementation block
@property (retain) id mostRecentResult;                              //@synthesize mostRecentResult=_mostRecentResult - In the implementation block
@property (retain) id<CNCancelable> delayToken;                      //@synthesize delayToken=_delayToken - In the implementation block
@property (assign) BOOL isCoalescing;                                //@synthesize isCoalescing=_isCoalescing - In the implementation block
-(void)dealloc;
-(unsigned long long)options;
-(double)interval;
-(BOOL)isCoalescing;
-(id<CNScheduler>)resourceLock;
-(id)subscribe:(id)arg1 ;
-(CNObservable *)observable;
-(id)initWithInterval:(double)arg1 options:(unsigned long long)arg2 observable:(id)arg3 schedulerProvider:(id)arg4 ;
-(id<CNScheduler>)observerScheduler;
-(id<CNCancelable>)delayToken;
-(void)setMostRecentResult:(id)arg1 ;
-(void)setIsCoalescing:(BOOL)arg1 ;
-(void)observerScheduler_sendResultToObserver:(id)arg1 ;
-(void)setDelayToken:(id<CNCancelable>)arg1 ;
-(id)mostRecentResult;
@end

