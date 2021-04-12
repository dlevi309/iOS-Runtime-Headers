/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICUserIdentityStoreBackend.h>

@protocol ICUserIdentityStoreBackendDelegate;
@class NSNumber, NSMutableDictionary, ICLocalStoreAccountProperties, NSString;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {

	NSNumber* _activeAccountDSID;
	NSNumber* _activeLockerAccountDSID;
	NSMutableDictionary* _identityProperties;
	ICLocalStoreAccountProperties* _localStoreAccountProperties;
	id<ICUserIdentityStoreBackendDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultActiveAccountDSID;
+(void)setDefaultActiveAccountDSID:(id)arg1 ;
+(id)defaultActiveLockerAccountDSID;
+(void)setDefaultActiveLockerAccountDSID:(id)arg1 ;
+(id)defaultStorefrontIdentifier;
+(void)setDefaultStorefrontIdentifier:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)synchronize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)localStoreAccountPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(id)localStoreAccountPropertiesWithError:(id*)arg1 ;
-(void)setLocalStoreAccountProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1 ;
-(id)_propertiesToSaveForProperties:(id)arg1 ;
@end

