/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol _CDContextPersisting;
@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting> {

	id<_CDContextPersisting> _persistenceSurvivingReboot;
	id<_CDContextPersisting> _persistenceSurvivingRelaunch;

}

@property (nonatomic,readonly) id<_CDContextPersisting> persistenceSurvivingReboot;                //@synthesize persistenceSurvivingReboot=_persistenceSurvivingReboot - In the implementation block
@property (nonatomic,readonly) id<_CDContextPersisting> persistenceSurvivingRelaunch;              //@synthesize persistenceSurvivingRelaunch=_persistenceSurvivingRelaunch - In the implementation block
+(id)persistenceWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)saveRegistration:(id)arg1 ;
-(void)deleteRegistration:(id)arg1 ;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2 ;
-(id<_CDContextPersisting>)persistenceSurvivingReboot;
-(id<_CDContextPersisting>)persistenceSurvivingRelaunch;
@end

