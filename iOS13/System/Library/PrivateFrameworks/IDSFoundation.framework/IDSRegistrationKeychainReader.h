/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSMutableArray, IMTimer;

@interface IDSRegistrationKeychainReader : NSObject {

	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;

}
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned long long)arg1 ;
+(id)keychainAccountForVersion:(unsigned long long)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_flush;
-(void)flushCache;
-(id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3 ;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionaryLocked:(id)arg1 ;
-(id)registrationData;
@end

