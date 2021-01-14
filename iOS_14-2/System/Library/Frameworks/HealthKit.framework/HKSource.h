/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;
	BOOL _localDevice;
	NSString* _owningAppBundleIdentifier;
	NSNumber* _sourceID;
	NSString* _productType;
	unsigned long long _options;

}

@property (setter=_setOwningAppBundleIdentifier:,getter=_owningAppBundleIdentifier,nonatomic,copy) NSString * owningAppBundleIdentifier;              //@synthesize owningAppBundleIdentifier=_owningAppBundleIdentifier - In the implementation block
@property (setter=_setSourceID:,getter=_sourceID,nonatomic,retain) NSNumber * sourceID;                                                               //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,setter=_setLocalDevice:,getter=_isLocalDevice,nonatomic) BOOL localDevice;                                                          //@synthesize localDevice=_localDevice - In the implementation block
@property (setter=_setProductType:,getter=_productType,nonatomic,copy) NSString * productType;                                                        //@synthesize productType=_productType - In the implementation block
@property (assign,setter=_setOptions:,getter=_options,nonatomic) unsigned long long options;                                                          //@synthesize options=_options - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * bundleIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)_privateSourceForClinicalAccountIdentifier:(id)arg1 name:(id)arg2 ;
+(id)_publicSourceForGatewayExternalIdentifier:(id)arg1 name:(id)arg2 ;
+(id)_uncachedDefaultSource;
+(id)_currentSourceProductType:(BOOL)arg1 ;
+(id)_uncachedDefaultSourceWithEntitlements:(id)arg1 ;
+(BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)arg1 ;
+(id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(BOOL)arg3 ;
+(unsigned long long)_sourceOptionsForAppEntitlements:(id)arg1 ;
+(id)_sourceNameWithRepresentsCurrentDevice:(BOOL)arg1 defaultSource:(BOOL)arg2 ;
+(id)_localDeviceSource;
+(id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1 ;
+(id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4 ;
+(id)defaultSource;
+(id)_researchStudiesDirectoryURL;
+(id)_connectedGymSource;
+(id)_generateIdentifierForAppleDevice;
+(BOOL)_isPlaceholderBundleIdentifier:(id)arg1 ;
+(id)_sourceWithBundleIdentifier:(id)arg1 defaultBundleIdentifier:(id)arg2 appEntitlements:(id)arg3 name:(id)arg4 ;
-(void)_setName:(id)arg1 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(BOOL)_isApplication;
-(unsigned long long)_options;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)_setProductType:(id)arg1 ;
-(void)_setLocalDevice:(BOOL)arg1 ;
-(id)_owningAppBundleIdentifier;
-(BOOL)_isClinicalSource;
-(BOOL)_isResearchStudy;
-(id)_deducedClinicalAccountIdentifier;
-(id)_fetchBundleWithError:(id*)arg1 ;
-(BOOL)_isAppleDevice;
-(BOOL)_isConnectedGymSource;
-(BOOL)_hasFirstPartyBundleID;
-(void)_setOwningAppBundleIdentifier:(id)arg1 ;
-(void)_setSourceID:(id)arg1 ;
-(BOOL)_isLocalDevice;
-(NSString *)name;
-(BOOL)_requiresAuthorization;
-(id)description;
-(id)_sourceID;
-(BOOL)_isHidden;
-(void)_setBundleIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_productType;
-(BOOL)_isAppleWatch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isPreferredSource;
-(BOOL)isEqual:(id)arg1 ;
@end

