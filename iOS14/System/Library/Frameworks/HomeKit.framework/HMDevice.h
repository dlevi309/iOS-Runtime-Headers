/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMFUnfairLock, NSUUID, HMFKey, NSArray;

@interface HMDevice : NSObject <HMFObject, HMObjectMerge, NSSecureCoding> {

	NSString* _idsDestination;
	HMFUnfairLock* _lock;
	BOOL _currentDevice;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMFKey* _rapportIRK;
	NSUUID* _idsIdentifier;
	NSUUID* _uuid;

}

@property (copy,readonly) NSUUID * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (copy) HMFKey * rapportIRK;                                             //@synthesize rapportIRK=_rapportIRK - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isCurrentDevice,readonly) BOOL currentDevice;                   //@synthesize currentDevice=_currentDevice - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSUUID *)uuid;
-(NSString *)privateDescription;
-(id)init;
-(NSUUID *)idsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(HMFKey *)rapportIRK;
-(NSString *)name;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setRapportIRK:(HMFKey *)arg1 ;
-(BOOL)isCurrentDevice;
-(id)IDSDeviceForIDSService:(id)arg1 ;
-(id)IDSDestinationForIDSService:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

