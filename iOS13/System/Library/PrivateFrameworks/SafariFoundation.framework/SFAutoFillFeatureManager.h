/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {

	int _cachedAutoFillRestrictionValue;
	int _cachedPasswordAutoFillEffectiveValue;

}

@property (assign,nonatomic) BOOL shouldAutoFillPasswordsFromKeychain; 
@property (nonatomic,retain) NSString * preferredCredentialProviderForSaving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFeatureManager;
+(id)_syncManager;
+(const CFStringRef)autoFillPreferencesDomain;
+(BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+(void)autoFillPreferencesDidChange;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)shouldAutoFillPasswordsFromKeychain;
-(BOOL)shouldAutoFillPasswords;
-(void)setShouldAutoFillPasswordsFromKeychain:(BOOL)arg1 ;
-(void)_refreshCachedAutoFillRestrictionValues;
@end

