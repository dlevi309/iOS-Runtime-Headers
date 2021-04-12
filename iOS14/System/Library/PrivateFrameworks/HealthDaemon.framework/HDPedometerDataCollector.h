/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class NSNumber, NSString;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {

	NSNumber* _userCondition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPedometerDataCollectionSupported;
-(id)collectedTypes;
-(id)initWithProfile:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)persistentIdentifier;
-(id)queue_newDataSource;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(BOOL)queue_userIsAbleBodied;
-(BOOL)queue_userConditionIsSet;
-(void)dealloc;
@end

