/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {

	NSMutableSet* _domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;

}
+(id)ephemeralSecIdentityPreferencesController;
+(id)sharedPersistentSecIdentityPreferencesController;
-(id)_initUsingEphemeralStorage:(BOOL)arg1 ;
-(void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg1 forDomainAndPort:(id)arg2 ;
-(BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1 ;
@end

