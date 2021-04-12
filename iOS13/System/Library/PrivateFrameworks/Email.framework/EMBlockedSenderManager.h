/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EFScheduler, OS_dispatch_queue;
#import <Email/Email-Structs.h>
@class NSSet, NSObject;

@interface EMBlockedSenderManager : NSObject {

	atomic_flag _didRemoveObservers;
	NSSet* _blockedSenderCache;
	id<EFScheduler> _resetScheduler;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSSet * blockedSenderCache;                                           //@synthesize blockedSenderCache=_blockedSenderCache - In the implementation block
@property (nonatomic,retain) id<EFScheduler> resetScheduler;                                       //@synthesize resetScheduler=_resetScheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                              //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (assign,getter=isMoveToTrashEnabled,nonatomic) BOOL moveToTrashEnabled; 
@property (assign,getter=isBlockedSenderEnabled,nonatomic) BOOL blockedSenderEnabled; 
+(BOOL)shouldPromptForBlockedSender;
+(void)setPromptForBlockedSender:(BOOL)arg1 ;
+(BOOL)shouldMoveToTrashForMailboxType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmailAddressBlocked:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)_blockedSenderListDidChange:(id)arg1 ;
-(void)_resetBlockedSenderCache;
-(void)_removeObserversIfNeeded;
-(id<EFScheduler>)resetScheduler;
-(BOOL)isBlockedSenderEnabled;
-(NSSet *)blockedSenderCache;
-(void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
-(BOOL)_isEmailAddressBlocked:(id)arg1 ;
-(void)_blockContact:(id)arg1 block:(BOOL)arg2 ;
-(void)blockEmailAddress:(id)arg1 ;
-(void)unblockEmailAddress:(id)arg1 ;
-(BOOL)isContactBlocked:(id)arg1 ;
-(void)blockContact:(id)arg1 ;
-(void)unblockContact:(id)arg1 ;
-(void)blockEmailAddresses:(id)arg1 ;
-(void)unblockEmailAddresses:(id)arg1 ;
-(void)_blockPhoneNumber:(id)arg1 ;
-(void)_unblockPhoneNumber:(id)arg1 ;
-(void)test_tearDown;
-(void)setMoveToTrashEnabled:(BOOL)arg1 ;
-(BOOL)isMoveToTrashEnabled;
-(void)setBlockedSenderEnabled:(BOOL)arg1 ;
-(BOOL)isTokenAddressIsBlocked:(id)arg1 ;
-(void)blockTokenAddress:(id)arg1 ;
-(void)unblockTokenAddress:(id)arg1 ;
-(BOOL)areAnyEmailAddressesBlocked:(id)arg1 ;
-(void)setBlockedSenderCache:(NSSet *)arg1 ;
-(void)setResetScheduler:(id<EFScheduler>)arg1 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

