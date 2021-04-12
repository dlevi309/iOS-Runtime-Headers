/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                   //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(id)commonInitWith:(id)arg1 targetValue:(id)arg2 ;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allowedTargetValueClasses;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3 ;
-(BOOL)isKindOfAllowedTargetValueClass:(id)arg1 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProtoBuf:(id)arg1 home:(id)arg2 ;
@end

