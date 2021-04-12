/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, HMFUnfairLock, NSUUID, HMFKey;

@interface HMDevice : NSObject <HMFObject, HMObjectMerge, NSSecureCoding> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(HMFKey *)rapportIRK;
-(NSArray *)attributeDescriptions;
-(NSUUID *)idsIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)setRapportIRK:(HMFKey *)arg1 ;
-(BOOL)isCurrentDevice;
-(id)IDSDeviceForIDSService:(id)arg1 ;
@end

