/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload {

	BOOL _allowAccessWithoutPasscode;
	BOOL _forceAllowSupervisorAccess;
	NSArray* _whitelistedAppsAndOptions;

}

@property (nonatomic,retain) NSArray * whitelistedAppsAndOptions;              //@synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions - In the implementation block
@property (assign,nonatomic) BOOL allowAccessWithoutPasscode;                  //@synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode - In the implementation block
@property (assign,nonatomic) BOOL forceAllowSupervisorAccess;                  //@synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess - In the implementation block
+(id)knownOptionsKeys;
+(id)knownUserEnabledOptionKeys;
-(id)verboseDescription;
-(void)setWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(NSArray *)whitelistedAppsAndOptions;
-(BOOL)allowAccessWithoutPasscode;
-(BOOL)forceAllowSupervisorAccess;
-(void)setAllowAccessWithoutPasscode:(BOOL)arg1 ;
-(void)setForceAllowSupervisorAccess:(BOOL)arg1 ;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

