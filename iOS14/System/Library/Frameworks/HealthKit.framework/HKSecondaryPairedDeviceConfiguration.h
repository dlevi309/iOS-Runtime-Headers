/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDateComponents, NSString, NSNumber;

@interface HKSecondaryPairedDeviceConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _nanoRegistryDeviceUUID;
	unsigned long long _setupType;
	NSDateComponents* _dateOfBirth;
	NSString* _firstName;
	NSString* _lastName;
	NSNumber* _dsid;
	NSString* _guardianFirstName;
	NSString* _guardianLastName;
	NSNumber* _guardianDSID;
	NSString* _hashedDSID;
	NSString* _guardianHashedDSID;

}

@property (nonatomic,copy) NSUUID * nanoRegistryDeviceUUID;              //@synthesize nanoRegistryDeviceUUID=_nanoRegistryDeviceUUID - In the implementation block
@property (assign,nonatomic) unsigned long long setupType;               //@synthesize setupType=_setupType - In the implementation block
@property (nonatomic,copy) NSDateComponents * dateOfBirth;               //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,copy) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                              //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * guardianFirstName;                 //@synthesize guardianFirstName=_guardianFirstName - In the implementation block
@property (nonatomic,copy) NSString * guardianLastName;                  //@synthesize guardianLastName=_guardianLastName - In the implementation block
@property (nonatomic,copy) NSNumber * guardianDSID;                      //@synthesize guardianDSID=_guardianDSID - In the implementation block
@property (nonatomic,copy) NSString * hashedDSID;                        //@synthesize hashedDSID=_hashedDSID - In the implementation block
@property (nonatomic,copy) NSString * guardianHashedDSID;                //@synthesize guardianHashedDSID=_guardianHashedDSID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secondaryPairedDeviceConfigurationWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)hashedDSID;
-(unsigned long long)setupType;
-(NSDateComponents *)dateOfBirth;
-(void)setNanoRegistryDeviceUUID:(NSUUID *)arg1 ;
-(NSUUID *)nanoRegistryDeviceUUID;
-(void)setDateOfBirth:(NSDateComponents *)arg1 ;
-(NSString *)guardianFirstName;
-(void)setGuardianFirstName:(NSString *)arg1 ;
-(NSNumber *)guardianDSID;
-(void)setGuardianDSID:(NSNumber *)arg1 ;
-(void)setHashedDSID:(NSString *)arg1 ;
-(NSString *)guardianLastName;
-(void)setGuardianLastName:(NSString *)arg1 ;
-(NSString *)guardianHashedDSID;
-(void)setGuardianHashedDSID:(NSString *)arg1 ;
-(id)_initWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(void)setSetupType:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

