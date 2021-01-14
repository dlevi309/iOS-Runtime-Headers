/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, HMFUnfairLock, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate> {

	CXCallObserver* _observer;
	HMFUnfairLock* _lock;

}

@property (readonly) CXCallObserver * observer;                     //@synthesize observer=_observer - In the implementation block
@property (readonly) HMFUnfairLock * lock;                          //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPhoneCallObserver;
-(void)startObserving;
-(id)init;
-(CXCallObserver *)observer;
-(HMFUnfairLock *)lock;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)hasActiveCalls;
-(BOOL)isActiveCall:(id)arg1 ;
@end

