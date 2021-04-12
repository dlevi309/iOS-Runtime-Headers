/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, NSDictionary;

@interface ACDKeychainItem : NSObject {

	NSMutableDictionary* _properties;
	NSMutableSet* _dirtyProperties;
	const CFDataRef _persistentRef;

}

@property (nonatomic,readonly) const CFDataRef persistentRef;                     //@synthesize persistentRef=_persistentRef - In the implementation block
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy) NSString * accessibility; 
@property (assign,nonatomic) BOOL synchronizable; 
@property (nonatomic,readonly) BOOL useDataProtectionKeychain; 
@property (nonatomic,readonly) SecAccessControlRef accessControlRef; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (assign,nonatomic) long long version; 
+(id)new;
-(BOOL)save:(id*)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)init;
-(void)_clearDirtyProperties;
-(id)debugDescription;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)description;
-(void)_reloadProperties;
-(void)reload;
-(void)setService:(NSString *)arg1 ;
-(void)setAccessibility:(NSString *)arg1 ;
-(SecAccessControlRef)accessControlRef;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setVersion:(long long)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(const CFDataRef)persistentRef;
-(long long)version;
-(NSString *)accessibility;
-(NSString *)service;
-(void)dealloc;
-(id)initWithPersistentRef:(const CFDataRef)arg1 properties:(id)arg2 ;
-(id)_modifiedProperties;
-(id)_metadataWithError:(id*)arg1 ;
-(BOOL)synchronizable;
-(BOOL)_setMetadata:(id)arg1 withError:(id*)arg2 ;
-(id)initWithPersistentRef:(const CFDataRef)arg1 ;
-(void)migrateToKeyBagFromLegacy;
-(BOOL)useDataProtectionKeychain;
-(void)setSynchronizable:(BOOL)arg1 ;
@end

