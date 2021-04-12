/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKUUIDProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKSourceRevision, HKDevice, NSDictionary, NSString, HKContributor, NSDate, HKSource;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	HKSourceRevision* _sourceRevision;
	HKDevice* _device;
	NSDictionary* _metadata;
	long long _provenanceID;
	NSString* _sourceBundleIdentifier;
	double _creationTimestamp;
	HKContributor* _contributor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setSourceBundleIdentifier:,getter=_sourceBundleIdentifier,nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (setter=_setCreationDate:,getter=_creationDate,nonatomic,copy) NSDate * creationDate; 
@property (assign,setter=_setCreationTimestamp:,getter=_creationTimestamp,nonatomic) double creationTimestamp;                               //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (getter=_timeZoneName,nonatomic,copy,readonly) NSString * timeZoneName; 
@property (nonatomic,readonly) HKContributor * contributor;                                                                                  //@synthesize contributor=_contributor - In the implementation block
@property (readonly) NSUUID * UUID; 
@property (readonly) HKSource * source; 
@property (readonly) HKSourceRevision * sourceRevision;                                                                                      //@synthesize sourceRevision=_sourceRevision - In the implementation block
@property (readonly) HKDevice * device;                                                                                                      //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
+(id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(/*^block*/id)arg3 ;
+(BOOL)_isConcreteObjectClass;
-(void)_setMetadata:(id)arg1 ;
-(NSUUID *)UUID;
-(void)_validateForCreation;
-(id)_validateConfigurationAllowingPrivateMetadata:(BOOL)arg1 applicationSDKVersion:(unsigned)arg2 ;
-(HKContributor *)contributor;
-(id)_copyByArchiving;
-(BOOL)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)prepareForDelivery:(id*)arg1 ;
-(id)_validateConfiguration;
-(BOOL)_shouldNotifyOnInsert;
-(void)_setSourceRevision:(id)arg1 ;
-(void)_setContributor:(id)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(void)_setCreationTimestamp:(double)arg1 ;
-(id)init;
-(double)_creationTimestamp;
-(void)_setCreationDate:(id)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hk_UUID;
-(id)_creationDate;
-(HKDevice *)device;
-(NSString *)description;
-(id)_sourceBundleIdentifier;
-(id)_timeZoneName;
-(long long)hk_integerValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_source;
-(void)_setDevice:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(long long)_externalSyncObjectCode;
-(NSDictionary *)metadata;
-(HKSourceRevision *)sourceRevision;
-(id)_valueDescription;
-(BOOL)prepareForSaving:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
@end

