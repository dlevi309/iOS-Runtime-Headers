/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ML3AccountInformationProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <ML3AccountInformationProviding, NSCopying, NSSecureCoding> {

	NSString* _deviceIdentifier;
	BOOL _allowsDelegation;
	BOOL _allowsAccountEstablishment;
	long long _type;
	unsigned long long _creationTime;
	NSNumber* _DSID;

}

@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long creationTime;               //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,readonly) BOOL allowsDelegation;                         //@synthesize allowsDelegation=_allowsDelegation - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountEstablishment;               //@synthesize allowsAccountEstablishment=_allowsAccountEstablishment - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)autoupdatingActiveAccount;
+(id)activeAccount;
+(id)activeLockerAccount;
+(id)specificAccountWithDSID:(id)arg1 ;
+(id)nullIdentity;
+(id)carrierBundleWithDeviceIdentifier:(id)arg1 ;
+(id)autoupdatingActiveLockerAccount;
-(NSString *)accountDSID;
-(NSString *)deviceIdentifier;
-(NSNumber *)DSID;
-(id)init;
-(BOOL)isEqualToIdentity:(id)arg1 inStore:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setResolvedDSID:(id)arg1 ;
-(BOOL)_isComparableUsingResolvedDSID;
-(id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(id)identityAllowingDelegation:(BOOL)arg1 ;
-(id)identityAllowingEstablishment:(BOOL)arg1 ;
-(BOOL)allowsDelegation;
-(BOOL)allowsAccountEstablishment;
-(NSString *)description;
-(unsigned long long)creationTime;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountDSID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hashInStore:(id)arg1 ;
@end

