/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSString, ENRegion;

@interface ENXPCClient : NSObject {

	BOOL _entitledForDeviceIdentity;
	BOOL _entitledForDifferentialPrivacy;
	BOOL _entitledForLogging;
	BOOL _entitledForTestVerification;
	BOOL _entitledToSkipFileSigningVerification;
	BOOL _entitledToSkipKeyReleasePrompt;
	BOOL _entitledToShowBuddy;
	int _accessLevel;
	int _pid;
	int _appAPIVersion;
	NSString* _signingIdentity;
	ENRegion* _appRegion;

}

@property (assign,nonatomic) int accessLevel;                                         //@synthesize accessLevel=_accessLevel - In the implementation block
@property (assign,nonatomic) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * signingIdentity;                                //@synthesize signingIdentity=_signingIdentity - In the implementation block
@property (assign,nonatomic) BOOL entitledForDeviceIdentity;                          //@synthesize entitledForDeviceIdentity=_entitledForDeviceIdentity - In the implementation block
@property (assign,nonatomic) BOOL entitledForLogging;                                 //@synthesize entitledForLogging=_entitledForLogging - In the implementation block
@property (assign,nonatomic) BOOL entitledToSkipFileSigningVerification;              //@synthesize entitledToSkipFileSigningVerification=_entitledToSkipFileSigningVerification - In the implementation block
@property (assign,nonatomic) BOOL entitledToSkipKeyReleasePrompt;                     //@synthesize entitledToSkipKeyReleasePrompt=_entitledToSkipKeyReleasePrompt - In the implementation block
@property (assign,nonatomic) BOOL entitledToShowBuddy;                                //@synthesize entitledToShowBuddy=_entitledToShowBuddy - In the implementation block
@property (nonatomic,readonly) int appAPIVersion;                                     //@synthesize appAPIVersion=_appAPIVersion - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * appRegion;                             //@synthesize appRegion=_appRegion - In the implementation block
@property (nonatomic,readonly) BOOL entitledForDifferentialPrivacy;                   //@synthesize entitledForDifferentialPrivacy=_entitledForDifferentialPrivacy - In the implementation block
@property (nonatomic,readonly) BOOL entitledForTestVerification;                      //@synthesize entitledForTestVerification=_entitledForTestVerification - In the implementation block
+(id)clientWithAuditToken:(SCD_Struct_EN2)arg1 pid:(int)arg2 ;
-(int)pid;
-(NSString *)signingIdentity;
-(int)accessLevel;
-(id)description;
-(void)setAccessLevel:(int)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)appAPIVersion;
-(BOOL)entitledForLogging;
-(BOOL)entitledToSkipFileSigningVerification;
-(void)activateWithAppAPIVersion:(int)arg1 regionISO:(id)arg2 ;
-(ENRegion *)appRegion;
-(BOOL)entitledToSkipKeyReleasePrompt;
-(BOOL)entitledForDifferentialPrivacy;
-(BOOL)entitledForDeviceIdentity;
-(BOOL)entitledForTestVerification;
-(BOOL)entitledToShowBuddy;
-(void)setSigningIdentity:(NSString *)arg1 ;
-(void)setEntitledForDeviceIdentity:(BOOL)arg1 ;
-(void)setEntitledForLogging:(BOOL)arg1 ;
-(void)setEntitledToSkipFileSigningVerification:(BOOL)arg1 ;
-(void)setEntitledToSkipKeyReleasePrompt:(BOOL)arg1 ;
-(void)setEntitledToShowBuddy:(BOOL)arg1 ;
@end

