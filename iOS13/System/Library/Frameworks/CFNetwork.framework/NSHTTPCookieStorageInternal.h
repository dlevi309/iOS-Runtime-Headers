/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {

	OpaqueCFHTTPCookieStorageRef storage;
	OpaqueCFHTTPCookieStorageRef privateStorage;
	NSRecursiveLock* dataLock;
	BOOL privateBrowsing;

}
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)registerForPostingNotificationsWithContext:(id)arg1 ;
-(id)initInternalWithCFStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)_syncCookies;
-(void)_syncCookiesWithCompletionBlock:(/*^block*/id)arg1 ;
@end

