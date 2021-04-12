/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierWithNoAccess;
+(id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1 ;
+(id)accessSpecifierForCurrentProcess;
+(id)accessSpecifierForXPCConnection:(id)arg1 ;
+(id)accessSpecifierForAuditToken:(SCD_Struct_VC1)arg1 ;
+(id)accessSpecifierForTask:(SecTaskRef)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)entitlements;
-(NSString *)associatedAppBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3 ;
-(BOOL)hasEntitlements:(long long)arg1 ;
-(BOOL)allowConnection;
-(BOOL)allowUnrestrictedAccess;
-(BOOL)allowWriteAccessToVoiceShortcuts;
-(BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowWriteAccessForTriggers;
-(BOOL)allowReadAccessForTriggers;
-(BOOL)allowReadAccessToShortcutsLibrary;
-(BOOL)allowReadAccessToPodcastsDatabase;
-(BOOL)allowBackgroundShortcutRunning;
-(BOOL)allowHomeResidentShortcutRunning;
-(BOOL)isSettingsApp;
-(BOOL)isRemovalService;
@end

