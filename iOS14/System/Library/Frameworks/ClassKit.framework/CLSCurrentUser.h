/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSPerson, NSString, NSDictionary;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasDataSeparatedAccount;
	BOOL _hasMatchingPersona;
	BOOL _hasEDUAccount;
	BOOL _organizationProgressTrackingAllowed;
	int _devMode;
	int _rosterServiceAuthenticationState;
	int _handoutServiceAuthenticationState;
	CLSPerson* _person;
	NSString* _personaUniqueString;
	NSString* _clientPersonaUniqueString;
	NSString* _organizationName;
	long long _catalogEnvironment;
	unsigned long long _roles;
	NSDictionary* _locationIDsByAXMRoleType;

}

@property (assign,nonatomic) int devMode;                                           //@synthesize devMode=_devMode - In the implementation block
@property (nonatomic,retain) CLSPerson * person;                                    //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSString * personaUniqueString;                          //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * clientPersonaUniqueString;                    //@synthesize clientPersonaUniqueString=_clientPersonaUniqueString - In the implementation block
@property (assign,nonatomic) BOOL hasDataSeparatedAccount;                          //@synthesize hasDataSeparatedAccount=_hasDataSeparatedAccount - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingPersona;                               //@synthesize hasMatchingPersona=_hasMatchingPersona - In the implementation block
@property (assign,nonatomic) unsigned long long roles;                              //@synthesize roles=_roles - In the implementation block
@property (nonatomic,retain) NSDictionary * locationIDsByAXMRoleType;               //@synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType - In the implementation block
@property (assign,nonatomic) BOOL hasEDUAccount;                                    //@synthesize hasEDUAccount=_hasEDUAccount - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                             //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) BOOL organizationProgressTrackingAllowed;              //@synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed - In the implementation block
@property (assign,nonatomic) long long catalogEnvironment;                          //@synthesize catalogEnvironment=_catalogEnvironment - In the implementation block
@property (assign,nonatomic) int rosterServiceAuthenticationState;                  //@synthesize rosterServiceAuthenticationState=_rosterServiceAuthenticationState - In the implementation block
@property (assign,nonatomic) int handoutServiceAuthenticationState;                 //@synthesize handoutServiceAuthenticationState=_handoutServiceAuthenticationState - In the implementation block
@property (nonatomic,readonly) BOOL isAdministrator; 
@property (nonatomic,readonly) BOOL isInstructor; 
@property (nonatomic,readonly) BOOL isStudent; 
+(BOOL)supportsSecureCoding;
+(id)magicValue;
+(unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1 ;
-(CLSPerson *)person;
-(BOOL)hasEDUAccount;
-(long long)catalogEnvironment;
-(void)setOrganizationProgressTrackingAllowed:(BOOL)arg1 ;
-(BOOL)organizationProgressTrackingAllowed;
-(int)rosterServiceAuthenticationState;
-(NSString *)organizationName;
-(void)setDevMode:(int)arg1 ;
-(BOOL)isAdministrator;
-(BOOL)hasDataSeparatedAccount;
-(void)setHasDataSeparatedAccount:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocationIDsByAXMRoleType:(NSDictionary *)arg1 ;
-(void)setRosterServiceAuthenticationState:(int)arg1 ;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(int)handoutServiceAuthenticationState;
-(BOOL)isInstructor;
-(BOOL)_hasRole:(unsigned long long)arg1 ;
-(int)devMode;
-(id)description;
-(NSDictionary *)locationIDsByAXMRoleType;
-(unsigned long long)roles;
-(void)setOrganizationName:(NSString *)arg1 ;
-(BOOL)hasRole:(unsigned long long)arg1 ;
-(void)setHandoutServiceAuthenticationState:(int)arg1 ;
-(void)setHasMatchingPersona:(BOOL)arg1 ;
-(BOOL)isStudent;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personaUniqueString;
-(unsigned long long)_useRoles;
-(void)setPerson:(CLSPerson *)arg1 ;
-(void)setCatalogEnvironment:(long long)arg1 ;
-(id)_init;
-(BOOL)hasMatchingPersona;
-(void)setClientPersonaUniqueString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)clientPersonaUniqueString;
-(void)setRoles:(unsigned long long)arg1 ;
-(void)setHasEDUAccount:(BOOL)arg1 ;
@end

