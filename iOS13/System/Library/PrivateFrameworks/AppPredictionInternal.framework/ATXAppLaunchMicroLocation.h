/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASLock, _ATXDuetHelper, NSString;

@interface ATXAppLaunchMicroLocation : NSObject {

	_PASLock* _lock;
	_ATXDuetHelper* _duetHelper;
	NSString* _path;

}
-(id)init;
-(void)train;
-(id)initWithDuetHelper:(id)arg1 directory:(id)arg2 forTesting:(BOOL)arg3 ;
-(void)_subscribeToDKInsertionEvents;
-(void)_receivedNotificationOfNewMicroLocation;
-(double)popularityAtCurrentMicroLocationForApp:(id)arg1 ;
-(double)popularityAtCurrentMicroLocationForActionKey:(id)arg1 ;
-(void)_writeAppLaunchCorrelationMatrix:(id)arg1 actionKeyCorrelationMatrix:(id)arg2 ;
-(BOOL)loadCorrelationMatrices;
-(id)_getHistoricalData;
-(id)_getAppLaunchCorrelationMatrix;
-(id)_getActionKeyCorrelationMatrix;
@end

