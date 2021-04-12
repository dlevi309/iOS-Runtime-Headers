/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNCoreLocationProvider;
@interface CALNCalendarCoreLocationManager : NSObject {

	id<CALNCoreLocationProvider> _coreLocationProvider;

}

@property (nonatomic,readonly) id<CALNCoreLocationProvider> coreLocationProvider;              //@synthesize coreLocationProvider=_coreLocationProvider - In the implementation block
@property (nonatomic,readonly) BOOL allowsLocationAlerts; 
-(void)markAsHavingReceivedLocation;
-(id<CALNCoreLocationProvider>)coreLocationProvider;
-(id)initWithCoreLocationProvider:(id)arg1 ;
-(BOOL)allowsLocationAlerts;
@end

