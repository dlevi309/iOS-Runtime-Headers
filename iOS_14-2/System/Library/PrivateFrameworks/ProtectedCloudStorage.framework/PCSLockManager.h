/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)dropAssertion;
+(id)manager;
+(BOOL)holdAssertion;
-(NSHashTable *)observers;
-(NSObject*<OS_os_log>)log;
-(void)removeAssertion:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)initManager;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)holders;
-(BOOL)holdAssertion:(id)arg1 ;
-(void)dropAssertion:(id)arg1 ;
-(void)_onlockDropAssertion:(id)arg1 ;
-(id)lockAssertion:(id)arg1 ;
-(void)setHolders:(NSHashTable *)arg1 ;
@end

