/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMFTimer, NSHashTable, NSObject, NSString;

@interface HMDTimeInformationMonitor : HMFObject <HMFTimerDelegate> {

	HMFTimer* _expirationTimer;
	NSHashTable* _delegates;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) HMFTimer * expirationTimer;                            //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSHashTable *)delegates;
-(void)timerDidFire:(id)arg1 ;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(HMFTimer *)expirationTimer;
-(void)systemTimeChanged:(id)arg1 ;
-(void)_updateWithTimerInterval;
-(void)_handleExpiration;
@end

