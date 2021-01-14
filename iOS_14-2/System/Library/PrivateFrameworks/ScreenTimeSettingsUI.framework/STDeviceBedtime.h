/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class STBlueprintScheduleSimpleItem, NSDictionary, NSString;

@interface STDeviceBedtime : NSObject <NSCopying> {

	BOOL _deviceBedtimeEnabled;
	BOOL _askForMoreTime;
	BOOL _shouldAllowEditing;
	STBlueprintScheduleSimpleItem* _simpleSchedule;
	NSDictionary* _scheduleByWeekdayIndex;

}

@property (assign,nonatomic) BOOL deviceBedtimeEnabled;                       //@synthesize deviceBedtimeEnabled=_deviceBedtimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL askForMoreTime;                             //@synthesize askForMoreTime=_askForMoreTime - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowEditing;                         //@synthesize shouldAllowEditing=_shouldAllowEditing - In the implementation block
@property (copy,readonly) NSString * scheduleText; 
@property (copy) STBlueprintScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (copy) NSDictionary * scheduleByWeekdayIndex;                       //@synthesize scheduleByWeekdayIndex=_scheduleByWeekdayIndex - In the implementation block
+(id)defaultBedtimeSchedule;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(STBlueprintScheduleSimpleItem *)simpleSchedule;
-(void)setSimpleSchedule:(STBlueprintScheduleSimpleItem *)arg1 ;
-(BOOL)shouldAllowEditing;
-(NSString *)scheduleText;
-(BOOL)deviceBedtimeEnabled;
-(void)setShouldAllowEditing:(BOOL)arg1 ;
-(void)setScheduleByWeekdayIndex:(NSDictionary *)arg1 ;
-(NSDictionary *)scheduleByWeekdayIndex;
-(void)setAskForMoreTime:(BOOL)arg1 ;
-(void)setDeviceBedtimeEnabled:(BOOL)arg1 ;
-(BOOL)askForMoreTime;
-(id)initWithBlueprint:(id)arg1 ;
@end

