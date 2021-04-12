/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class STBatteryStatusDomainPublisher, NSString;

@interface SBSystemStatusBatteryDataProvider : NSObject <BSInvalidatable> {

	BOOL _shouldExposeNotChargingState;
	STBatteryStatusDomainPublisher* _batteryDataPublisher;

}

@property (nonatomic,readonly) STBatteryStatusDomainPublisher * batteryDataPublisher;              //@synthesize batteryDataPublisher=_batteryDataPublisher - In the implementation block
@property (assign,nonatomic) BOOL shouldExposeNotChargingState;                                    //@synthesize shouldExposeNotChargingState=_shouldExposeNotChargingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_updateData;
-(void)_registerForNotifications;
-(void)_noteNotChargingStatusChanged;
-(id)_internalBatteryDevice;
-(STBatteryStatusDomainPublisher *)batteryDataPublisher;
-(BOOL)shouldExposeNotChargingState;
-(BOOL)_isInNotChargingState;
-(void)_updateShouldExposeNotChargingState;
-(void)setShouldExposeNotChargingState:(BOOL)arg1 ;
@end

