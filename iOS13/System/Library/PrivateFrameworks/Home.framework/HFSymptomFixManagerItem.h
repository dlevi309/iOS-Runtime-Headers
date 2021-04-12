/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HMSymptom, HMSymptomFixSession, HMAccessory;

@interface HFSymptomFixManagerItem : NSObject {

	HMSymptom* _symptom;
	HMSymptomFixSession* _fixSession;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HMSymptom * symptom;                           //@synthesize symptom=_symptom - In the implementation block
@property (nonatomic,readonly) HMSymptomFixSession * fixSession;              //@synthesize fixSession=_fixSession - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
-(id)description;
-(HMAccessory *)accessory;
-(HMSymptom *)symptom;
-(HMSymptomFixSession *)fixSession;
-(id)initWithSymptom:(id)arg1 fixSession:(id)arg2 accessory:(id)arg3 ;
@end

