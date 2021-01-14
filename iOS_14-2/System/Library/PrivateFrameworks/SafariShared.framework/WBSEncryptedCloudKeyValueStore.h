/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)backingStore;
-(id)decryptEntry:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)_dsidForPrimaryAccount;
-(void)synchronize;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)encryptPropertyList:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(int)_currentPCSConfiguration;
-(void)dealloc;
@end

