/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)alarmsRemoved:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(id)initWithAlarmManager:(id)arg1 ;
-(void)_didReceiveAlarmServerReadyNotification:(id)arg1 ;
-(void)alarmSnoozed:(id)arg1 ;
-(void)alarmDismissed:(id)arg1 ;
-(void)nextAlarmChanged:(id)arg1 ;
@end

