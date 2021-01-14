/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class MCProfileConnection, NSHashTable, NSObject, NSString;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {

	MCProfileConnection* _profileConnection;
	BOOL _isPasscodeSet;
	os_unfair_lock_s _lock;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,readonly) BOOL isPasscodeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)addObserver:(id)arg1 ;
-(BOOL)isPasscodeSet;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
@end

