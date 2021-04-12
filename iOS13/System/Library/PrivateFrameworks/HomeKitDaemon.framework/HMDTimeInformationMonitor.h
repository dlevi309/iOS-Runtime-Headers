/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)systemTimeChanged:(id)arg1 ;
-(void)_updateWithTimerInterval;
-(HMFTimer *)expirationTimer;
-(void)_handleExpiration;
@end

