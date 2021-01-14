/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSLockdownDefaults, BKSIAPDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults, BKSKeyboardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults {

	BKSLockdownDefaults* _lazy_lockdownDefaults;
	BKSIAPDefaults* _lazy_iapDefaults;
	BKSPersistentConnectionDefaults* _lazy_persistentConnectionDefaults;
	BKSSpringBoardDefaults* _lazy_springBoardDefaults;
	BKSKeyboardDefaults* _lazy_keyboardDefaults;

}

@property (nonatomic,retain,readonly) BKSLockdownDefaults * lockdownDefaults; 
@property (nonatomic,retain,readonly) BKSIAPDefaults * iapDefaults; 
@property (nonatomic,retain,readonly) BKSPersistentConnectionDefaults * persistentConnectionDefaults; 
@property (nonatomic,retain,readonly) BKSSpringBoardDefaults * springBoardDefaults; 
@property (nonatomic,retain,readonly) BKSKeyboardDefaults * keyboardDefaults; 
-(BKSIAPDefaults *)iapDefaults;
-(BKSPersistentConnectionDefaults *)persistentConnectionDefaults;
-(BKSKeyboardDefaults *)keyboardDefaults;
-(BKSSpringBoardDefaults *)springBoardDefaults;
-(BKSLockdownDefaults *)lockdownDefaults;
@end

