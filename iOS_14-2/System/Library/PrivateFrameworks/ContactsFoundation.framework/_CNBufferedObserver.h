/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver;
@class CNSuspendableSchedulerDecorator, NSString;

@interface _CNBufferedObserver : NSObject <CNObserver> {

	CNSuspendableSchedulerDecorator* _observerScheduler;
	id<CNObserver> _observer;

}

@property (nonatomic,readonly) id<CNObserver> observer;                                          //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNObserver>)observer;
-(CNSuspendableSchedulerDecorator *)observerScheduler;
-(id)initWithObserver:(id)arg1 scheduler:(id)arg2 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)resume;
@end

