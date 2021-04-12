/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDMultiUserStatusControllerDelegate;
@class NSObject, NSString;

@interface HMDMultiUserStatusController : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	long long _multiUserState;
	NSObject*<OS_dispatch_queue> _queue;
	id<HMDMultiUserStatusControllerDelegate> _delegate;
	unsigned long long _haveActiveSignedInAccount;
	unsigned long long _dataSyncState;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (__weak,readonly) id<HMDMultiUserStatusControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long multiUserState;                                                //@synthesize multiUserState=_multiUserState - In the implementation block
@property (assign) unsigned long long haveActiveSignedInAccount;                            //@synthesize haveActiveSignedInAccount=_haveActiveSignedInAccount - In the implementation block
@property (assign) unsigned long long dataSyncState;                                        //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDMultiUserStatusControllerDelegate>)delegate;
-(unsigned long long)dataSyncState;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(void)setMultiUserState:(long long)arg1 ;
-(long long)multiUserState;
-(unsigned long long)haveActiveSignedInAccount;
-(void)setHaveActiveSignedInAccount:(unsigned long long)arg1 ;
-(void)didUpdateDataSyncState:(unsigned long long)arg1 ;
-(void)didChangeHasActiveAccountState:(BOOL)arg1 ;
@end

