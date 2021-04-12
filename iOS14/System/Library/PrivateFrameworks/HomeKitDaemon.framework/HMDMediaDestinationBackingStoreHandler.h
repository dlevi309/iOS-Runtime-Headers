/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreHandler.h>

@protocol HMDMediaDestinationBackingStoreHandlerDelegate;
@class HMFUnfairLock, HMMutableMediaDestination, HMMediaDestination;

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {

	HMFUnfairLock* _lock;
	HMMutableMediaDestination* _destination;
	id<HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationBackingStoreHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMMediaDestination * destination; 
+(id)logCategory;
+(id)backingStoreObjectForMediaDestination:(id)arg1 ;
-(id<HMDMediaDestinationBackingStoreHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationBackingStoreHandlerDelegate>)arg1 ;
-(void)setAudioGroupIdentifier:(id)arg1 ;
-(void)setSupportedOptions:(unsigned long long)arg1 ;
-(HMMediaDestination *)destination;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithDestination:(id)arg1 backingStore:(id)arg2 delegate:(id)arg3 ;
-(void)updateSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAudioGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

