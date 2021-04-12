/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSString * userPersonaUniqueString;                //@synthesize userPersonaUniqueString=_userPersonaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * userPersonaNickName;                    //@synthesize userPersonaNickName=_userPersonaNickName - In the implementation block
@property (assign,nonatomic) unsigned long long userPersonaType;              //@synthesize userPersonaType=_userPersonaType - In the implementation block
+(id)currentPersona;
+(BOOL)currentPersonaMatchesPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)uid;
-(BOOL)isSystemPersona;
-(NSString *)userPersonaUniqueString;
-(id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1 ;
-(NSString *)userPersonaNickName;
-(BOOL)isEnterprisePersona;
-(BOOL)isPersonalPersona;
-(BOOL)isDefaultPersona;
-(id)copyCurrentPersonaContextWithError:(id*)arg1 ;
-(id)restorePersonaWithSavedPersonaContext:(id)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(BOOL)isDisabled;
-(void)setIsDisabled:(BOOL)arg1 ;
-(BOOL)commitChanges;
-(unsigned long long)userPersonaType;
-(void)setUserPersonaUniqueString:(NSString *)arg1 ;
-(void)setUserPersonaType:(unsigned long long)arg1 ;
-(void)setIsPersonalPersona:(BOOL)arg1 ;
-(void)setIsEnterprisePersona:(BOOL)arg1 ;
-(void)setIsSystemPersona:(BOOL)arg1 ;
-(void)setIsDefaultPersona:(BOOL)arg1 ;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(void)fetchAttributesIfNeeded;
-(unsigned)gid;
-(BOOL)commitChangesWithError:(id*)arg1 ;
-(id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1 ;
-(void)setUserPersonaNickName:(NSString *)arg1 ;
-(id)generateAndRestorePersonaContextWithIdentityString:(id)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1 ;
-(BOOL)isEqualToPersona:(id)arg1 ;
@end

