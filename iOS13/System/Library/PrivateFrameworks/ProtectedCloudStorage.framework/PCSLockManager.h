/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


@protocol OS_os_log;
@class NSHashTable, NSObject;

@interface PCSLockManager : NSObject {

	NSHashTable* _observers;
	NSHashTable* _holders;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSHashTable * observers;               //@synthesize observers=_observers - In the implementation block
@property (retain) NSHashTable * holders;                 //@synthesize holders=_holders - In the implementation block
@property (retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)manager;
+(void)dropAssertion;
+(BOOL)holdAssertion;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)holdAssertion:(id)arg1 ;
-(void)dropAssertion:(id)arg1 ;
-(id)initManager;
-(void)_onlockDropAssertion:(id)arg1 ;
-(id)lockAssertion:(id)arg1 ;
-(NSHashTable *)holders;
-(void)setHolders:(NSHashTable *)arg1 ;
@end

