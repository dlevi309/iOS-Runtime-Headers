/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFActionBuilder.h>

@protocol NSCopying;
@class HMCharacteristic, HMCharacteristicWriteAction;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder {

	HMCharacteristic* _characteristic;
	id<NSCopying> _targetValue;

}

@property (nonatomic,readonly) HMCharacteristicWriteAction * action; 
@property (nonatomic,retain) HMCharacteristic * characteristic;                   //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id<NSCopying> targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
+(Class)homeKitRepresentationClass;
-(id<NSCopying>)targetValue;
-(void)setTargetValue:(id<NSCopying>)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(BOOL)requiresDeviceUnlock;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)createNewAction;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(id)copyForCreatingNewAction;
-(BOOL)hasSameTargetAsAction:(id)arg1 ;
-(id)performValidation;
@end

