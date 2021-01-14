/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSLock;

@interface AALoginContextTransientStorage : NSObject {

	BOOL _hasBeenCleared;
	NSLock* _clearLock;

}
+(id)sharedStorage;
-(void)clear;
-(void)save:(id)arg1 ;
-(id)init;
-(void)_saveNonsensitiveParameters:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(id)_readNonsensitiveParameters;
-(id)_keychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(id)storedContext;
@end

