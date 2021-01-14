/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


#import <BackBoardServices/BackBoardServices-Structs.h>
@class BSCompoundAssertion, BKSHIDUISensorMode, BKSHIDUISensorCharacteristics;

@interface BKSHIDUISensorService : NSObject {

	BSCompoundAssertion* _modeAssertion;
	BKSHIDUISensorMode* _prevailingMode;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) BKSHIDUISensorCharacteristics * sensorCharacteristics; 
+(id)sharedInstance;
-(id)init;
-(BKSHIDUISensorCharacteristics *)sensorCharacteristics;
-(id)requestUISensorMode:(id)arg1 ;
-(void)_lock_setupAssertion;
@end

