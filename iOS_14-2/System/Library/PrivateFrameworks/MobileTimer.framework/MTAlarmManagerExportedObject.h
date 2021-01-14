/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmClient.h>

@class MTAlarmManager, NSString;

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient> {

	MTAlarmManager* _alarmManager;

}

@property (nonatomic,__weak,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTAlarmManager *)alarmManager;
-(void)_didReceiveAlarmServerReadyNotification:(id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(id)initWithAlarmManager:(id)arg1 ;
-(void)nextAlarmChanged:(id)arg1 ;
-(void)alarmSnoozed:(id)arg1 ;
-(void)alarmsRemoved:(id)arg1 ;
-(void)alarmDismissed:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)dealloc;
@end

