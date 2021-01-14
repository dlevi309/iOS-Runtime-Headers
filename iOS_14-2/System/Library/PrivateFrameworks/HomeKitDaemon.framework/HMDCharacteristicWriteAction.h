/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class HMDCharacteristic, NSDictionary, NSString;

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	HMDCharacteristic* _characteristic;
	id _targetValue;
	NSDictionary* _actionInformation;
	NSString* _dumpState;

}

@property (nonatomic,__weak,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                             //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionInformation;                       //@synthesize actionInformation=_actionInformation - In the implementation block
@property (nonatomic,readonly) NSString * dumpState;                                   //@synthesize dumpState=_dumpState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)dictionaryRepresentation;
-(id)init;
-(NSString *)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)targetValue;
-(unsigned long long)type;
-(BOOL)requiresDeviceUnlock;
-(id)initWithCoder:(id)arg1 ;
-(HMDCharacteristic *)characteristic;
-(void)setTargetValue:(id)arg1 ;
-(id)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)stateDump;
-(unsigned long long)entitlementsForNotification;
-(BOOL)isActionForCharacteristic:(id)arg1 ;
-(id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4 ;
-(void)replaceCharacteristic:(id)arg1 ;
-(void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2 ;
-(BOOL)isSecureAction;
-(NSDictionary *)actionInformation;
@end

