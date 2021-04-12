/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_CDContextPersisting>)persistenceSurvivingRelaunch;
-(id<_CDContextPersisting>)persistenceSurvivingReboot;
-(void)saveRegistration:(id)arg1 ;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(void)deleteAllData;
-(id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2 ;
-(id)loadValues;
-(void)deleteRegistration:(id)arg1 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
@end

