/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(BOOL)arg3 value:(id)arg4 ;
-(id)init;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionaryLocked:(id)arg1 ;
-(void)flushCache;
-(void)_flush;
-(id)registrationData;
-(void)dealloc;
@end

