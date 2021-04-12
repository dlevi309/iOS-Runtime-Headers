/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {

	id _accountUpdateObserver;
	NSString* _dsid;
	RetainPtr<_PCSIdentitySetData *>* _pcsIdentitySet;
	RetainPtr<_OpaquePCSShareProtection *>* _pcsShareProtection;
	RetainPtr<const __CFData *>* _serializedPCSObject;
	NSUbiquitousKeyValueStore* _backingStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)defaultStore;
+(id)additionalStoreWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)synchronize;
-(void)removeObjectForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)backingStore;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_dsidForPrimaryAccount;
-(int)_currentPCSConfiguration;
-(id)decryptEntry:(id)arg1 ;
-(id)encryptPropertyList:(id)arg1 ;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
@end

