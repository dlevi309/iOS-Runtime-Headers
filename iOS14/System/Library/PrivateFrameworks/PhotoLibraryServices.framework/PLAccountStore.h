/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Accounts/ACAccountStore.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount;

@interface PLAccountStore : ACAccountStore {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccount* _cachedPrimaryAppleAccount;

}

@property (__weak,readonly) ACAccount * cachedPrimaryAppleAccount; 
+(id)pl_sharedAccountStore;
-(id)init;
-(void)accountDidChange:(id)arg1 ;
-(void)clearCachedProperties;
-(ACAccount *)cachedPrimaryAppleAccount;
-(void)dealloc;
@end

