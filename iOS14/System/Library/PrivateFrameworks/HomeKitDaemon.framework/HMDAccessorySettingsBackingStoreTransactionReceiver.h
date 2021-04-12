/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate;
@class NSString;

@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject <HMDBackingStoreObjectProtocol> {

	id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> _delegate;

}

@property (__weak) id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
@end

