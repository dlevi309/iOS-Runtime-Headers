/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class HDProfile, NSString;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {

	HDProfile* _profile;
	long long _wheelchairUse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(void)dealloc;
-(void)_stopObservingWorkouts;
-(void)_stopObservingUserCharacteristics;
-(void)_startObservingWorkouts;
-(long long)_currentWheelchairUse;
-(void)_startObservingUserCharacteristics;
-(void)_reloadWidgetTimelines;
@end

