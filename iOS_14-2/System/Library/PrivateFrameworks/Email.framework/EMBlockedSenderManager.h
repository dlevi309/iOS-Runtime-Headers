/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EMBlockedSenderReader.h>

@protocol EFScheduler, OS_dispatch_queue;
@class NSSet, NSObject, NSString;

@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPromptForBlockedSender;
+(void)setPromptForBlockedSender:(BOOL)arg1 ;
+(BOOL)shouldMoveToTrashForMailboxType:(long long)arg1 ;
-(void)test_tearDown;
-(id<EFScheduler>)resetScheduler;
-(id)init;
-(void)_unblockPhoneNumber:(id)arg1 ;
-(BOOL)isMoveToTrashEnabled;
-(void)blockTokenAddress:(id)arg1 ;
-(void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
-(void)setBlockedSenderEnabled:(BOOL)arg1 ;
-(void)unblockEmailAddresses:(id)arg1 ;
-(BOOL)isTokenAddressIsBlocked:(id)arg1 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setMoveToTrashEnabled:(BOOL)arg1 ;
-(void)blockEmailAddresses:(id)arg1 ;
-(BOOL)isEmailAddressBlocked:(id)arg1 ;
-(BOOL)_isEmailAddressBlocked:(id)arg1 ;
-(void)unblockEmailAddress:(id)arg1 ;
-(void)setResetScheduler:(id<EFScheduler>)arg1 ;
-(void)blockContact:(id)arg1 ;
-(BOOL)isBlockedSenderEnabled;
-(NSSet *)blockedSenderCache;
-(void)setBlockedSenderCache:(NSSet *)arg1 ;
-(BOOL)isContactBlocked:(id)arg1 ;
-(void)_blockPhoneNumber:(id)arg1 ;
-(BOOL)areAnyEmailAddressesBlocked:(id)arg1 ;
-(void)_resetBlockedSenderCache;
-(void)unblockTokenAddress:(id)arg1 ;
-(void)_blockContact:(id)arg1 block:(BOOL)arg2 ;
-(void)blockEmailAddress:(id)arg1 ;
-(void)unblockContact:(id)arg1 ;
-(void)_blockedSenderListDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_removeObserversIfNeeded;
@end

