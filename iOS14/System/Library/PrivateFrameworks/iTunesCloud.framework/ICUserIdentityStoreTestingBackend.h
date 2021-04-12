/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)setDefaultStorefrontIdentifier:(id)arg1 ;
+(void)setDefaultActiveLockerAccountDSID:(id)arg1 ;
+(id)defaultActiveLockerAccountDSID;
+(id)defaultStorefrontIdentifier;
+(id)defaultActiveAccountDSID;
+(void)setDefaultActiveAccountDSID:(id)arg1 ;
-(BOOL)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(id)activeLockerAccountDSIDWithError:(id*)arg1 ;
-(id)init;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1 ;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateActiveAccountDSID:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1 ;
-(id)_propertiesToSaveForProperties:(id)arg1 ;
-(void)synchronize;
-(BOOL)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2 ;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2 ;
-(BOOL)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localStoreAccountPropertiesWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)activeAccountDSIDWithError:(id*)arg1 ;
@end

