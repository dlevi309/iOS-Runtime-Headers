/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMCharacteristic, NSUUID, NSString;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                   //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(id)commonInitWith:(id)arg1 targetValue:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allowedTargetValueClasses;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3 ;
-(BOOL)isKindOfAllowedTargetValueClass:(id)arg1 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProtoBuf:(id)arg1 home:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)targetValue;
-(BOOL)_handleUpdates:(id)arg1 ;
-(BOOL)isValid;
-(unsigned long long)type;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)requiresDeviceUnlock;
-(id)initWithCoder:(id)arg1 ;
-(id)encodeAsProtoBuf;
-(HMCharacteristic *)characteristic;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(void)setTargetValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

