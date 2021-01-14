/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding> {

	LSBundleRecord* _realRecord;

}

@property (nonatomic,readonly) LSBundleRecord * _realRecord;              //@synthesize realRecord=_realRecord - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classFallbacksForKeyedArchiver;
+(Class)classForKeyedUnarchiver;
+(id)description;
-(id)entitlements;
-(id)localizedShortName;
-(id)SDKVersion;
-(id)dataContainerURL;
-(id)machOUUIDs;
-(LSBundleRecord *)_realRecord;
-(Class)classForKeyedArchiver;
-(id)localizedName;
-(char)developerType;
-(unsigned)platform;
-(BOOL)isUPPValidated;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)managedPersonas;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(id)accentColorName;
-(id)_loadRealRecord;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(void)detach;
-(id)intentDefinitionURLs;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(BOOL)isFreeProfileValidated;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(id)UIBackgroundModes;
-(id)serviceRecords;
-(id)WKBackgroundModes;
-(BOOL)isProfileValidated;
-(id)intentsRestrictedWhileLocked;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(BOOL)supportsNowPlaying;
-(id)supportedIntentMediaCategories;
-(id)signerOrganization;
-(id)init;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)bundleIdentifier;
-(id)debugDescription;
-(id)applicationIdentifier;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)description;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)URL;
-(unsigned long long)hash;
-(id)executableURL;
-(id)initWithCoder:(id)arg1 ;
-(id)supportedIntents;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

