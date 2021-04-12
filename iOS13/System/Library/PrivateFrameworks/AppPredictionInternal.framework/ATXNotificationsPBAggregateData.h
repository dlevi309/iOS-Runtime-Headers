/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXNotificationsPBAggregateData : PBCodable <NSCopying> {

	int _appsAllowed;
	int _appsAllowedThird;
	int _appsDenied;
	int _appsDeniedThird;
	int _appsInstalled;
	int _appsInstalledThird;
	int _appsLockscreen;
	int _appsLockscreenThird;
	SCD_Struct_AT32 _has;

}

@property (assign,nonatomic) BOOL hasAppsInstalled; 
@property (assign,nonatomic) int appsInstalled;                        //@synthesize appsInstalled=_appsInstalled - In the implementation block
@property (assign,nonatomic) BOOL hasAppsAllowed; 
@property (assign,nonatomic) int appsAllowed;                          //@synthesize appsAllowed=_appsAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasAppsDenied; 
@property (assign,nonatomic) int appsDenied;                           //@synthesize appsDenied=_appsDenied - In the implementation block
@property (assign,nonatomic) BOOL hasAppsLockscreen; 
@property (assign,nonatomic) int appsLockscreen;                       //@synthesize appsLockscreen=_appsLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasAppsInstalledThird; 
@property (assign,nonatomic) int appsInstalledThird;                   //@synthesize appsInstalledThird=_appsInstalledThird - In the implementation block
@property (assign,nonatomic) BOOL hasAppsAllowedThird; 
@property (assign,nonatomic) int appsAllowedThird;                     //@synthesize appsAllowedThird=_appsAllowedThird - In the implementation block
@property (assign,nonatomic) BOOL hasAppsDeniedThird; 
@property (assign,nonatomic) int appsDeniedThird;                      //@synthesize appsDeniedThird=_appsDeniedThird - In the implementation block
@property (assign,nonatomic) BOOL hasAppsLockscreenThird; 
@property (assign,nonatomic) int appsLockscreenThird;                  //@synthesize appsLockscreenThird=_appsLockscreenThird - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAppsInstalled:(int)arg1 ;
-(void)setHasAppsInstalled:(BOOL)arg1 ;
-(BOOL)hasAppsInstalled;
-(void)setAppsAllowed:(int)arg1 ;
-(void)setHasAppsAllowed:(BOOL)arg1 ;
-(BOOL)hasAppsAllowed;
-(void)setAppsDenied:(int)arg1 ;
-(void)setHasAppsDenied:(BOOL)arg1 ;
-(BOOL)hasAppsDenied;
-(void)setAppsLockscreen:(int)arg1 ;
-(void)setHasAppsLockscreen:(BOOL)arg1 ;
-(BOOL)hasAppsLockscreen;
-(void)setAppsInstalledThird:(int)arg1 ;
-(void)setHasAppsInstalledThird:(BOOL)arg1 ;
-(BOOL)hasAppsInstalledThird;
-(void)setAppsAllowedThird:(int)arg1 ;
-(void)setHasAppsAllowedThird:(BOOL)arg1 ;
-(BOOL)hasAppsAllowedThird;
-(void)setAppsDeniedThird:(int)arg1 ;
-(void)setHasAppsDeniedThird:(BOOL)arg1 ;
-(BOOL)hasAppsDeniedThird;
-(void)setAppsLockscreenThird:(int)arg1 ;
-(void)setHasAppsLockscreenThird:(BOOL)arg1 ;
-(BOOL)hasAppsLockscreenThird;
-(int)appsInstalled;
-(int)appsAllowed;
-(int)appsDenied;
-(int)appsLockscreen;
-(int)appsInstalledThird;
-(int)appsAllowedThird;
-(int)appsDeniedThird;
-(int)appsLockscreenThird;
@end

