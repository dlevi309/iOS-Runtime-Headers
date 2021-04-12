/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSManagedObjectID;

@interface STUIUser : NSObject <NSCopying> {

	BOOL _screenTimeEnabled;
	BOOL _managed;
	BOOL _webUsageEnabled;
	BOOL _remoteUser;
	BOOL _hasAllowances;
	unsigned long long _source;
	NSString* _name;
	NSNumber* _dsid;
	NSString* _altDSID;
	unsigned long long _type;
	NSString* _passcode;
	NSString* _recoveryAltDSID;
	NSManagedObjectID* _userObjectID;

}

@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                 //@synthesize userObjectID=_userObjectID - In the implementation block
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
+(id)keyPathsForValuesAffectingHasPasscode;
+(id)keyPathsForValuesAffectingGivenName;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)source;
-(NSString *)givenName;
-(id)initWithUser:(id)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)isChild;
-(BOOL)isParent;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)isManaged;
-(void)setManaged:(BOOL)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(BOOL)hasPasscode;
-(void)setRemoteUser:(BOOL)arg1 ;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(NSString *)recoveryAltDSID;
-(BOOL)canRecoveryAuthenticate;
-(BOOL)isRemoteUser;
-(BOOL)isScreenTimeEnabled;
-(NSManagedObjectID *)userObjectID;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(BOOL)needsRecoveryAppleID;
-(BOOL)isWebUsageEnabled;
-(BOOL)hasAllowances;
-(void)setWebUsageEnabled:(BOOL)arg1 ;
-(void)setHasAllowances:(BOOL)arg1 ;
@end

