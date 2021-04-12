/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKUUIDProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKSourceRevision, HKDevice, NSDictionary, NSString, NSDate, HKSource;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	HKSourceRevision* _sourceRevision;
	HKDevice* _device;
	NSDictionary* _metadata;
	long long _provenanceID;
	NSString* _sourceBundleIdentifier;
	double _creationTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setSourceBundleIdentifier:,getter=_sourceBundleIdentifier,nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (setter=_setCreationDate:,getter=_creationDate,nonatomic,copy) NSDate * creationDate; 
@property (assign,setter=_setCreationTimestamp:,getter=_creationTimestamp,nonatomic) double creationTimestamp;                               //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (getter=_timeZoneName,nonatomic,copy,readonly) NSString * timeZoneName; 
@property (readonly) NSUUID * UUID; 
@property (readonly) HKSource * source; 
@property (readonly) HKSourceRevision * sourceRevision;                                                                                      //@synthesize sourceRevision=_sourceRevision - In the implementation block
@property (readonly) HKDevice * device;                                                                                                      //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(/*^block*/id)arg3 ;
+(id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(HKSource *)source;
-(NSUUID *)UUID;
-(void)_setUUID:(id)arg1 ;
-(HKDevice *)device;
-(NSDictionary *)metadata;
-(id)_creationDate;
-(id)_source;
-(id)_valueDescription;
-(void)_setMetadata:(id)arg1 ;
-(id)_timeZoneName;
-(double)_creationTimestamp;
-(void)_setCreationDate:(id)arg1 ;
-(void)_setCreationTimestamp:(double)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(id)_sourceBundleIdentifier;
-(void)_setDevice:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(long long)_externalSyncObjectCode;
-(HKSourceRevision *)sourceRevision;
-(BOOL)prepareForSaving:(id*)arg1 ;
-(id)hk_UUID;
-(void)_validateForCreation;
-(id)_validateConfigurationAllowingPrivateMetadata:(BOOL)arg1 applicationSDKVersion:(unsigned)arg2 ;
-(id)_validateConfiguration;
-(id)_copyByArchiving;
-(BOOL)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)prepareForDelivery:(id*)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
-(void)_setSourceRevision:(id)arg1 ;
-(long long)hk_integerValue;
@end

