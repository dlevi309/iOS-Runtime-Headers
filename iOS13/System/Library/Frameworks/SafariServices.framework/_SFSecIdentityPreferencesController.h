/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {

	NSMutableSet* _domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;

}
+(id)sharedPersistentSecIdentityPreferencesController;
+(id)ephemeralSecIdentityPreferencesController;
-(void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg1 forDomainAndPort:(id)arg2 ;
-(BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1 ;
-(id)_initUsingEphemeralStorage:(BOOL)arg1 ;
@end

