/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class THThreadNetwork, THThreadNetworkCredentials, NSUUID, NSString, NSDate;

@interface THThreadNetworkCredentialsStoreRecord : NSObject <NSSecureCoding> {

	THThreadNetwork* _network;
	THThreadNetworkCredentials* _credentials;
	NSUUID* _uniqueIdentifier;
	NSString* _keychainAccessGroup;
	NSDate* _creationDate;
	NSDate* _lastModificationDate;

}

@property (nonatomic,readonly) THThreadNetwork * network;                             //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) THThreadNetworkCredentials * credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * keychainAccessGroup;                        //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                         //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
+(id)recordFromKeychainDictionary:(id)arg1 ;
+(id)keyChainQueryForFetchOperationForNetwork:(id)arg1 ;
+(id)keyChainQueryForFetchAllOperation;
+(id)keyChainQueryForFetchOneOperationForUniqueIdentifier:(id)arg1 ;
+(id)keyChainQueryForDeleteOperationForUniqueIdentifier:(id)arg1 ;
+(id)computedUniqueIdentifierForNetwork:(id)arg1 keychainAccessGroup:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)keyChainItemRepresentationForAddOperation;
-(id)computedUniqueIdentifier;
-(id)keyChainQueryForUpdateOperation;
-(id)keyChainItemRepresentationForUpdateOperation;
-(NSDate *)lastModificationDate;
-(THThreadNetwork *)network;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSDate *)creationDate;
-(THThreadNetworkCredentials *)credentials;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keychainAccessGroup;
-(id)initWithNetwork:(id)arg1 credentials:(id)arg2 uniqueIdentifier:(id)arg3 keychainAccessGroup:(id)arg4 creationDate:(id)arg5 lastModificationDate:(id)arg6 ;
@end

