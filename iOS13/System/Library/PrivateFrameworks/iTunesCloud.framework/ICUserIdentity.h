/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (nonatomic,readonly) unsigned long long creationTime;               //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,readonly) BOOL allowsDelegation;                         //@synthesize allowsDelegation=_allowsDelegation - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountEstablishment;               //@synthesize allowsAccountEstablishment=_allowsAccountEstablishment - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activeAccount;
+(id)specificAccountWithDSID:(id)arg1 ;
+(id)autoupdatingActiveAccount;
+(id)activeLockerAccount;
+(id)nullIdentity;
+(id)autoupdatingActiveLockerAccount;
+(id)carrierBundleWithDeviceIdentifier:(id)arg1 ;
-(NSString *)accountDSID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(unsigned long long)creationTime;
-(NSNumber *)DSID;
-(BOOL)isEqualToIdentity:(id)arg1 inStore:(id)arg2 ;
-(unsigned long long)hashInStore:(id)arg1 ;
-(BOOL)_isComparableUsingResolvedDSID;
-(id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_setResolvedDSID:(id)arg1 ;
-(id)identityAllowingDelegation:(BOOL)arg1 ;
-(id)identityAllowingEstablishment:(BOOL)arg1 ;
-(BOOL)allowsDelegation;
-(BOOL)allowsAccountEstablishment;
@end

