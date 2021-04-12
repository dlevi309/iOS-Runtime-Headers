/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying> {

	NSString* _associatedAppBundleIdentifier;
	NSString* _bundleIdentifier;
	long long _entitlements;

}

@property (nonatomic,readonly) long long entitlements;                                     //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(void)initialize;
+(id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1 ;
+(id)accessSpecifierForCurrentProcess;
+(id)accessSpecifierForTask:(SecTaskRef)arg1 ;
+(id)accessSpecifierForCurrentConnection;
+(id)accessSpecifierForXPCConnection:(id)arg1 ;
+(id)accessSpecifierForAuditToken:(SCD_Struct_VC4)arg1 ;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierWithNoAccess;
-(long long)entitlements;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)description;
-(BOOL)hasEntitlements:(long long)arg1 ;
-(BOOL)allowConnection;
-(id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3 ;
-(BOOL)allowUnrestrictedAccess;
-(BOOL)allowWriteAccessToVoiceShortcuts;
-(BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowWriteAccessForTriggers;
-(BOOL)allowReadAccessForTriggers;
-(BOOL)isRemovalService;
-(BOOL)allowReadAccessToShortcutsLibrary;
-(BOOL)allowReadAccessToPodcastsDatabase;
-(BOOL)allowBackgroundShortcutRunning;
-(BOOL)allowHomeResidentShortcutRunning;
-(BOOL)allowWriteAccessForSleepWorkflows;
-(BOOL)isSettingsApp;
-(BOOL)allowReadAccessForSleepWorkflows;
-(BOOL)allowReadAccessForDonations;
-(BOOL)allowIntentsExtensionDiscovery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)associatedAppBundleIdentifier;
@end

