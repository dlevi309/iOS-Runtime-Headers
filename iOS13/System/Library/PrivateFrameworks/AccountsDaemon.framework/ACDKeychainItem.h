/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) SecAccessControlRef accessControlRef; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (assign,nonatomic) long long version; 
+(id)new;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(NSString *)service;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)reload;
-(void)setAccessibility:(NSString *)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_reloadProperties;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(const CFDataRef)persistentRef;
-(void)setSynchronizable:(BOOL)arg1 ;
-(NSString *)accessibility;
-(id)initWithPersistentRef:(const CFDataRef)arg1 properties:(id)arg2 ;
-(id)_modifiedProperties;
-(id)_metadataWithError:(id*)arg1 ;
-(BOOL)synchronizable;
-(BOOL)_setMetadata:(id)arg1 withError:(id*)arg2 ;
-(id)initWithPersistentRef:(const CFDataRef)arg1 ;
-(SecAccessControlRef)accessControlRef;
@end

