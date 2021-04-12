/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)init;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
-(NSString *)dumpState;
-(HMDCharacteristic *)characteristic;
-(BOOL)requiresDeviceUnlock;
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

