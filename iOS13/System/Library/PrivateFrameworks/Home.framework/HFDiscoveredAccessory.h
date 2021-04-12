/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFHomeKitObject.h>

@class NSUUID, NSString, HMAccessoryCategory, HMAccessory, SFDevice, NSDate, NSError;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {

	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMAccessoryCategory* _category;
	HMAccessory* _accessory;
	SFDevice* _sharingDevice;
	NSString* _manufacturer;
	NSDate* _discoveryDate;
	unsigned long long _status;
	NSError* _error;
	unsigned long long _certificationStatus;

}

@property (nonatomic,retain) HMAccessory * accessory;                             //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                               //@synthesize manufacturer=_manufacturer - In the implementation block
@property (assign,nonatomic) unsigned long long certificationStatus;              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,readonly) SFDevice * sharingDevice;                          //@synthesize sharingDevice=_sharingDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * discoveryDate;                            //@synthesize discoveryDate=_discoveryDate - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL requiresSetupCode; 
@property (nonatomic,readonly) BOOL requiresSoftwareUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)discoveredAccessoryFromSetupDescription:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(unsigned long long)status;
-(NSUUID *)uniqueIdentifier;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSDate *)discoveryDate;
-(unsigned long long)certificationStatus;
-(void)setCertificationStatus:(unsigned long long)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(BOOL)requiresSetupCode;
-(void)updateStatus:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3 ;
-(id)_descriptionForStatus:(unsigned long long)arg1 ;
-(SFDevice *)sharingDevice;
-(id)initWithSharingDevice:(id)arg1 ;
-(BOOL)requiresSoftwareUpdate;
-(id)identify;
@end

