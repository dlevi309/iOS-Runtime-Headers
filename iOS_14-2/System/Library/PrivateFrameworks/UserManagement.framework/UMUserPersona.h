/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {

	NSString* personaName;
	BOOL shouldFetchAttributes;
	BOOL _isSystemPersona;
	BOOL _isDefaultPersona;
	BOOL _isGuestPersona;
	BOOL _isDataSeparatedPersona;
	BOOL _isEnterprisePersona;
	BOOL _isPersonalPersona;
	BOOL _isDisabled;
	unsigned _uid;
	unsigned _gid;
	NSString* _userPersonaUniqueString;
	NSString* _userPersonaNickName;
	unsigned long long _userPersonaType;

}

@property (assign,nonatomic) unsigned uid;                                    //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned gid;                                    //@synthesize gid=_gid - In the implementation block
@property (assign,nonatomic) BOOL isEnterprisePersona;                        //@synthesize isEnterprisePersona=_isEnterprisePersona - In the implementation block
@property (assign,nonatomic) BOOL isPersonalPersona;                          //@synthesize isPersonalPersona=_isPersonalPersona - In the implementation block
@property (assign,nonatomic) BOOL isSystemPersona;                            //@synthesize isSystemPersona=_isSystemPersona - In the implementation block
@property (assign,nonatomic) BOOL isDefaultPersona;                           //@synthesize isDefaultPersona=_isDefaultPersona - In the implementation block
@property (assign,nonatomic) BOOL isGuestPersona;                             //@synthesize isGuestPersona=_isGuestPersona - In the implementation block
@property (assign,nonatomic) BOOL isDataSeparatedPersona;                     //@synthesize isDataSeparatedPersona=_isDataSeparatedPersona - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSString * userPersonaUniqueString;                //@synthesize userPersonaUniqueString=_userPersonaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * userPersonaNickName;                    //@synthesize userPersonaNickName=_userPersonaNickName - In the implementation block
@property (assign,nonatomic) unsigned long long userPersonaType;              //@synthesize userPersonaType=_userPersonaType - In the implementation block
+(BOOL)currentPersonaMatchesPath:(id)arg1 ;
+(id)currentPersona;
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1 ;
-(id)init;
-(BOOL)isDefaultPersona;
-(void)setIsDataSeparatedPersona:(BOOL)arg1 ;
-(void)setIsDefaultPersona:(BOOL)arg1 ;
-(BOOL)isPersonalPersona;
-(BOOL)isDisabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1 ;
-(void)setUserPersonaUniqueString:(NSString *)arg1 ;
-(void)setIsGuestPersona:(BOOL)arg1 ;
-(void)fetchAttributesIfNeeded;
-(NSString *)userPersonaUniqueString;
-(id)copyCurrentPersonaContextWithError:(id*)arg1 ;
-(NSString *)userPersonaNickName;
-(id)generateAndRestorePersonaContextWithIdentityString:(id)arg1 ;
-(BOOL)isSystemPersona;
-(void)setIsPersonalPersona:(BOOL)arg1 ;
-(unsigned long long)userPersonaType;
-(void)setIsEnterprisePersona:(BOOL)arg1 ;
-(BOOL)isGuestPersona;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(BOOL)isDataSeparatedPersona;
-(void)setIsDisabled:(BOOL)arg1 ;
-(void)setUserPersonaType:(unsigned long long)arg1 ;
-(void)setIsSystemPersona:(BOOL)arg1 ;
-(unsigned)gid;
-(BOOL)isEnterprisePersona;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)restorePersonaWithSavedPersonaContext:(id)arg1 ;
-(void)setUserPersonaNickName:(NSString *)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(BOOL)isEqualToPersona:(id)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1 ;
@end

