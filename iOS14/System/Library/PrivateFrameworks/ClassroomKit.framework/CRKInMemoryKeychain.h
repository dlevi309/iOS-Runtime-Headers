/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKKeychain.h>

@protocol CRKInMemoryKeychainDelegate;
@class NSMutableDictionary, NSString;

@interface CRKInMemoryKeychain : NSObject <CRKKeychain> {

	id<CRKInMemoryKeychainDelegate> _delegate;
	NSMutableDictionary* _keychainItemsByPersistentID;
	NSMutableDictionary* _passwordDatasByService;

}

@property (nonatomic,readonly) NSMutableDictionary * keychainItemsByPersistentID;              //@synthesize keychainItemsByPersistentID=_keychainItemsByPersistentID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * passwordDatasByService;                   //@synthesize passwordDatasByService=_passwordDatasByService - In the implementation block
@property (assign,nonatomic,__weak) id<CRKInMemoryKeychainDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CRKInMemoryKeychainDelegate>)delegate;
-(void)setDelegate:(id<CRKInMemoryKeychainDelegate>)arg1 ;
-(void)removeItemWithPersistentID:(id)arg1 ;
-(id)addCertificate:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)certificateWithPersistentID:(id)arg1 ;
-(id)addIdentity:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)identityWithPersistentID:(id)arg1 ;
-(void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 ;
-(id)passwordForService:(id)arg1 ;
-(id)makeIdentityWithConfiguration:(id)arg1 ;
-(id)addItem:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)privateKeyWithPersistentID:(id)arg1 ;
-(id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
-(id)makeCertificateWithData:(id)arg1 ;
-(id)makePrivateKeyWithData:(id)arg1 ;
-(NSMutableDictionary *)passwordDatasByService;
-(id)itemWithPersistentID:(id)arg1 expectedProtocol:(id)arg2 ;
-(NSMutableDictionary *)keychainItemsByPersistentID;
-(id)validityDateIntervalForConfiguration:(id)arg1 ;
-(id)existingPersistentIDForItem:(id)arg1 ;
-(void)enumerateKeychainUsingBlock:(/*^block*/id)arg1 ;
@end

