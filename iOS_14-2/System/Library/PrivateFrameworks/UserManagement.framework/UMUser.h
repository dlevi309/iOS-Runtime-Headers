/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSURL, NSDate, NSArray, NSError;

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {

	NSString* _displayName;
	BOOL _shouldFetchAttributes;
	BOOL _isLoginUser;
	BOOL _isAuditor;
	BOOL _isDisabled;
	BOOL _isTransientUser;
	BOOL _hasManagedCredentials;
	BOOL _hasDataToSync;
	unsigned _uid;
	unsigned _gid;
	NSString* _alternateDSID;
	NSURL* _homeDirectoryURL;
	NSString* _username;
	NSString* _givenName;
	NSString* _familyName;
	NSURL* _photoURL;
	NSString* _userAuxiliaryString;
	id __photo;
	NSDate* _creationDate;
	NSDate* _lastLoginDate;
	NSDate* _lastRemoteAuthDate;
	unsigned long long _passcodeType;
	unsigned long long _passcodeLockGracePeriod;
	NSArray* _languages;
	unsigned long long _dataQuota;
	unsigned long long _dataUsed;
	NSError* _errorCausingLogout;
	NSError* _debugErrorCausingLogout;
	NSDate* _firstLoginStartDate;
	NSDate* _firstLoginEndDate;
	NSDate* _lastCachedLoginStartDate;
	NSDate* _lastCachedLoginEndDate;
	NSDate* _lastLogoutStartDate;
	NSDate* _lastLogoutEndDate;

}

@property (assign,nonatomic) BOOL shouldFetchAttributes;                              //@synthesize shouldFetchAttributes=_shouldFetchAttributes - In the implementation block
@property (assign,nonatomic) unsigned uid;                                            //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned gid;                                            //@synthesize gid=_gid - In the implementation block
@property (nonatomic,copy) NSString * alternateDSID;                                  //@synthesize alternateDSID=_alternateDSID - In the implementation block
@property (nonatomic,copy) NSURL * homeDirectoryURL;                                  //@synthesize homeDirectoryURL=_homeDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * username;                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                      //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                     //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSURL * photoURL;                                          //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,copy) NSString * userAuxiliaryString;                            //@synthesize userAuxiliaryString=_userAuxiliaryString - In the implementation block
@property (nonatomic,copy) id _photo;                                                 //@synthesize _photo=__photo - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLoginDate;                                    //@synthesize lastLoginDate=_lastLoginDate - In the implementation block
@property (nonatomic,copy) NSDate * lastRemoteAuthDate;                               //@synthesize lastRemoteAuthDate=_lastRemoteAuthDate - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeType;                         //@synthesize passcodeType=_passcodeType - In the implementation block
@property (assign,nonatomic) BOOL isLoginUser;                                        //@synthesize isLoginUser=_isLoginUser - In the implementation block
@property (assign,nonatomic) BOOL isAuditor;                                          //@synthesize isAuditor=_isAuditor - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                         //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic) BOOL isTransientUser;                                    //@synthesize isTransientUser=_isTransientUser - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeLockGracePeriod;              //@synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod - In the implementation block
@property (nonatomic,copy) NSArray * languages;                                       //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) BOOL hasManagedCredentials;                              //@synthesize hasManagedCredentials=_hasManagedCredentials - In the implementation block
@property (assign,nonatomic) unsigned long long dataQuota;                            //@synthesize dataQuota=_dataQuota - In the implementation block
@property (assign,nonatomic) unsigned long long dataUsed;                             //@synthesize dataUsed=_dataUsed - In the implementation block
@property (assign,nonatomic) BOOL hasDataToSync;                                      //@synthesize hasDataToSync=_hasDataToSync - In the implementation block
@property (nonatomic,retain) NSError * errorCausingLogout;                            //@synthesize errorCausingLogout=_errorCausingLogout - In the implementation block
@property (nonatomic,copy) NSError * debugErrorCausingLogout;                         //@synthesize debugErrorCausingLogout=_debugErrorCausingLogout - In the implementation block
@property (nonatomic,copy) NSDate * firstLoginStartDate;                              //@synthesize firstLoginStartDate=_firstLoginStartDate - In the implementation block
@property (nonatomic,copy) NSDate * firstLoginEndDate;                                //@synthesize firstLoginEndDate=_firstLoginEndDate - In the implementation block
@property (nonatomic,copy) NSDate * lastCachedLoginStartDate;                         //@synthesize lastCachedLoginStartDate=_lastCachedLoginStartDate - In the implementation block
@property (nonatomic,copy) NSDate * lastCachedLoginEndDate;                           //@synthesize lastCachedLoginEndDate=_lastCachedLoginEndDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLogoutStartDate;                              //@synthesize lastLogoutStartDate=_lastLogoutStartDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLogoutEndDate;                                //@synthesize lastLogoutEndDate=_lastLogoutEndDate - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * allUserPersonas; 
@property (nonatomic,readonly) unsigned long long userType; 
@property (nonatomic,readonly) double passcodeBackOffInterval; 
+(id)userWithUID:(unsigned)arg1 ;
-(BOOL)commitChanges;
-(NSString *)familyName;
-(BOOL)commitChangesWithError:(id*)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(id)_photo;
-(NSArray *)languages;
-(void)setUsername:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)init;
-(NSURL *)homeDirectoryURL;
-(NSString *)givenName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(BOOL)inFirstLoginSession;
-(NSString *)alternateDSID;
-(BOOL)isDisabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)dataQuota;
-(BOOL)isTransientUser;
-(NSString *)userAuxiliaryString;
-(NSDate *)lastRemoteAuthDate;
-(BOOL)hasManagedCredentials;
-(NSError *)errorCausingLogout;
-(NSString *)username;
-(unsigned long long)passcodeLockGracePeriod;
-(NSError *)debugErrorCausingLogout;
-(BOOL)isEqualToUser:(id)arg1 ;
-(void)setHomeDirectoryURL:(NSURL *)arg1 ;
-(void)setPhotoURL:(NSURL *)arg1 ;
-(void)setUserAuxiliaryString:(NSString *)arg1 ;
-(void)setLastRemoteAuthDate:(NSDate *)arg1 ;
-(void)setIsLoginUser:(BOOL)arg1 ;
-(void)setIsAuditor:(BOOL)arg1 ;
-(void)setIsTransientUser:(BOOL)arg1 ;
-(void)setPasscodeLockGracePeriod:(unsigned long long)arg1 ;
-(void)setDataQuota:(unsigned long long)arg1 ;
-(void)setDataUsed:(unsigned long long)arg1 ;
-(void)setHasDataToSync:(BOOL)arg1 ;
-(void)setFirstLoginStartDate:(NSDate *)arg1 ;
-(void)setFirstLoginEndDate:(NSDate *)arg1 ;
-(void)setLastCachedLoginStartDate:(NSDate *)arg1 ;
-(void)setLastCachedLoginEndDate:(NSDate *)arg1 ;
-(void)setLastLogoutStartDate:(NSDate *)arg1 ;
-(void)setLastLogoutEndDate:(NSDate *)arg1 ;
-(void)setHasManagedCredentials:(BOOL)arg1 ;
-(id)description;
-(void)setPasscodeType:(unsigned long long)arg1 ;
-(BOOL)hasDataToSync;
-(NSDate *)creationDate;
-(NSDate *)lastLoginDate;
-(unsigned long long)passcodeType;
-(void)fetchAttributesIfNeeded;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setErrorCausingLogout:(NSError *)arg1 ;
-(void)setDebugErrorCausingLogout:(NSError *)arg1 ;
-(BOOL)fetchAttributesWithOutError:(id*)arg1 ;
-(NSDate *)lastLogoutStartDate;
-(NSDate *)lastLogoutEndDate;
-(NSDate *)lastCachedLoginStartDate;
-(NSDate *)lastCachedLoginEndDate;
-(NSDate *)firstLoginStartDate;
-(NSDate *)firstLoginEndDate;
-(void)setShouldFetchAttributes:(BOOL)arg1 ;
-(BOOL)shouldFetchAttributes;
-(dqblk)_diskQuota;
-(void)set_photo:(id)arg1 ;
-(void)setPropertiesFromUser:(id)arg1 ;
-(double)passcodeBackOffInterval;
-(NSArray *)allUserPersonas;
-(id)userPersonaFromIdentityString:(id)arg1 ;
-(NSURL *)photoURL;
-(void)setLanguages:(NSArray *)arg1 ;
-(unsigned long long)dataUsed;
-(BOOL)isAuditor;
-(void)setIsDisabled:(BOOL)arg1 ;
-(unsigned long long)userType;
-(void)setAlternateDSID:(NSString *)arg1 ;
-(unsigned)gid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setLastLoginDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(BOOL)isLoginUser;
@end

