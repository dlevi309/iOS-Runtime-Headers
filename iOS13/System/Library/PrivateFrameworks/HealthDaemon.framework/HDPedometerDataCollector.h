/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)persistentIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)queue_newDataSource;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(BOOL)queue_userConditionIsSet;
-(BOOL)queue_userIsAbleBodied;
@end

