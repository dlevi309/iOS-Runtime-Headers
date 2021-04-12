/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSManagedObjectID, NSArray;

@interface STUIUser : NSObject <NSCopying> {

	BOOL _screenTimeEnabled;
	BOOL _managed;
	BOOL _webUsageEnabled;
	BOOL _remoteUser;
	BOOL _hasAllowances;
	BOOL _hasDeviceWithoutUsageReported;
	unsigned long long _source;
	NSString* _name;
	NSNumber* _dsid;
	NSString* _altDSID;
	unsigned long long _type;
	NSString* _passcode;
	NSString* _recoveryAltDSID;
	NSManagedObjectID* _userObjectID;
	NSArray* _devices;

}

@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                 //@synthesize userObjectID=_userObjectID - In the implementation block
@property (nonatomic,copy) NSArray * devices;                                                //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                                  //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                               //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,getter=isScreenTimeEnabled,nonatomic) BOOL screenTimeEnabled;              //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                                  //@synthesize managed=_managed - In the implementation block
@property (assign,getter=isWebUsageEnabled,nonatomic) BOOL webUsageEnabled;                  //@synthesize webUsageEnabled=_webUsageEnabled - In the implementation block
@property (assign,getter=isRemoteUser,nonatomic) BOOL remoteUser;                            //@synthesize remoteUser=_remoteUser - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAllowances;                                             //@synthesize hasAllowances=_hasAllowances - In the implementation block
@property (nonatomic,readonly) BOOL hasPasscode; 
@property (nonatomic,copy) NSString * passcode;                                              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) NSString * recoveryAltDSID;                                       //@synthesize recoveryAltDSID=_recoveryAltDSID - In the implementation block
@property (nonatomic,readonly) BOOL needsRecoveryAppleID; 
@property (nonatomic,readonly) BOOL canRecoveryAuthenticate; 
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isChild; 
@property (assign) BOOL hasDeviceWithoutUsageReported;                                       //@synthesize hasDeviceWithoutUsageReported=_hasDeviceWithoutUsageReported - In the implementation block
+(id)keyPathsForValuesAffectingGivenName;
+(id)keyPathsForValuesAffectingHasPasscode;
-(BOOL)isScreenTimeEnabled;
-(BOOL)isWebUsageEnabled;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(NSNumber *)dsid;
-(id)initWithUser:(id)arg1 ;
-(BOOL)isManaged;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isChild;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)givenName;
-(void)setRemoteUser:(BOOL)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setHasDeviceWithoutUsageReported:(BOOL)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setWebUsageEnabled:(BOOL)arg1 ;
-(NSString *)name;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)hasDeviceWithoutUsageReported;
-(NSString *)passcode;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(BOOL)hasAllowances;
-(unsigned long long)type;
-(NSString *)recoveryAltDSID;
-(void)setHasAllowances:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasPasscode;
-(BOOL)needsRecoveryAppleID;
-(BOOL)isRemoteUser;
-(BOOL)isParent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManaged:(BOOL)arg1 ;
-(NSManagedObjectID *)userObjectID;
-(BOOL)canRecoveryAuthenticate;
-(unsigned long long)source;
@end

