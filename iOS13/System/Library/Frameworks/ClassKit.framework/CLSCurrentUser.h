/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSPerson, NSString, NSDictionary;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasEDUAccount;
	int _devMode;
	CLSPerson* _person;
	NSString* _personaUniqueString;
	NSString* _organizationName;
	unsigned long long _roles;
	NSDictionary* _locationIDsByAXMRoleType;

}

@property (assign,nonatomic) int devMode;                                          //@synthesize devMode=_devMode - In the implementation block
@property (nonatomic,retain) CLSPerson * person;                                   //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSString * personaUniqueString;                         //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (assign,nonatomic) unsigned long long roles;                             //@synthesize roles=_roles - In the implementation block
@property (nonatomic,retain) NSDictionary * locationIDsByAXMRoleType;              //@synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType - In the implementation block
@property (assign,nonatomic) BOOL hasEDUAccount;                                   //@synthesize hasEDUAccount=_hasEDUAccount - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                            //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL isAdministrator; 
@property (nonatomic,readonly) BOOL isInstructor; 
@property (nonatomic,readonly) BOOL isStudent; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1 ;
+(id)magicValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)organizationName;
-(NSString *)personaUniqueString;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(CLSPerson *)person;
-(void)setPerson:(CLSPerson *)arg1 ;
-(BOOL)isAdministrator;
-(unsigned long long)roles;
-(void)setRoles:(unsigned long long)arg1 ;
-(unsigned long long)_useRoles;
-(BOOL)_hasRole:(unsigned long long)arg1 ;
-(BOOL)hasRole:(unsigned long long)arg1 ;
-(BOOL)isInstructor;
-(BOOL)isStudent;
-(int)devMode;
-(void)setDevMode:(int)arg1 ;
-(BOOL)hasEDUAccount;
-(void)setHasEDUAccount:(BOOL)arg1 ;
-(NSDictionary *)locationIDsByAXMRoleType;
-(void)setLocationIDsByAXMRoleType:(NSDictionary *)arg1 ;
@end

