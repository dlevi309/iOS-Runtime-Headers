/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ICDelegateToken, NSNumber, NSDate, NSArray, NSDictionary;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSString* _alternateDSID;
	NSString* _carrierBundleDeviceIdentifier;
	BOOL _cloudBackupEnabled;
	BOOL _delegated;
	ICDelegateToken* _delegateToken;
	NSNumber* _dsid;
	NSString* _firstName;
	NSString* _iCloudPersonID;
	NSString* _lastName;
	BOOL _managedAppleID;
	BOOL _sandboxed;
	NSString* _storefrontIdentifier;
	BOOL _subscriptionStatusEnabled;
	NSString* _username;
	NSDate* _ageVerificationExpirationDate;
	NSNumber* _mergeToCloudLibraryPreference;
	NSArray* _homeUserIdentifiers;
	NSDictionary* _cloudLibraryStateReason;
	NSNumber* _privateListeningEnabled;
	BOOL _activeLocker;
	BOOL _active;
	NSDictionary* _privateListeningEnabledForHomeUsers;

}

@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;                              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
@property (setter=setICloudPersonID:,nonatomic,copy) NSString * iCloudPersonID;                                //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,copy) NSArray * homeUserIdentifiers;                                                      //@synthesize homeUserIdentifiers=_homeUserIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * privateListeningEnabledForHomeUsers;                                 //@synthesize privateListeningEnabledForHomeUsers=_privateListeningEnabledForHomeUsers - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateDSID; 
@property (nonatomic,copy,readonly) NSString * carrierBundleDeviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                                                           //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID;                                    //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (getter=isSandboxed,nonatomic,readonly) BOOL sandboxed;                                              //@synthesize sandboxed=_sandboxed - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (getter=isSubscriptionStatusEnabled,nonatomic,readonly) BOOL subscriptionStatusEnabled;              //@synthesize subscriptionStatusEnabled=_subscriptionStatusEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSDate * ageVerificationExpirationDate; 
@property (nonatomic,copy,readonly) NSNumber * mergeToCloudLibraryPreference; 
@property (nonatomic,copy,readonly) NSDictionary * cloudLibraryStateReason; 
@property (nonatomic,copy,readonly) NSNumber * privateListeningEnabled;                                        //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isActiveLocker,nonatomic,readonly) BOOL activeLocker;                                        //@synthesize activeLocker=_activeLocker - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                                    //@synthesize active=_active - In the implementation block
@property (getter=isDelegated,nonatomic,readonly) BOOL delegated;                                              //@synthesize delegated=_delegated - In the implementation block
@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;                                           //@synthesize delegateToken=_delegateToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isManagedAppleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)DSID;
-(NSString *)storefrontIdentifier;
-(ICDelegateToken *)delegateToken;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)ageVerificationExpirationDate;
-(BOOL)isDelegated;
-(NSString *)alternateDSID;
-(BOOL)isSubscriptionStatusEnabled;
-(NSNumber *)mergeToCloudLibraryPreference;
-(NSDictionary *)cloudLibraryStateReason;
-(void)setHomeUserIdentifiers:(NSArray *)arg1 ;
-(void)setPrivateListeningEnabledForHomeUsers:(NSDictionary *)arg1 ;
-(NSString *)carrierBundleDeviceIdentifier;
-(NSArray *)homeUserIdentifiers;
-(NSDictionary *)privateListeningEnabledForHomeUsers;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
-(BOOL)isCloudBackupEnabled;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(NSNumber *)privateListeningEnabled;
-(BOOL)isActiveLocker;
-(NSString *)iCloudPersonID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSandboxed;
@end

