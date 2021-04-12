/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNCoreLocationProvider;
@interface CALNCalendarCoreLocationManager : NSObject {

	id<CALNCoreLocationProvider> _coreLocationProvider;

}

@property (nonatomic,readonly) id<CALNCoreLocationProvider> coreLocationProvider;              //@synthesize coreLocationProvider=_coreLocationProvider - In the implementation block
@property (nonatomic,readonly) BOOL allowsLocationAlerts; 
-(id)initWithCoreLocationProvider:(id)arg1 ;
-(id<CALNCoreLocationProvider>)coreLocationProvider;
-(BOOL)allowsLocationAlerts;
-(void)markAsHavingReceivedLocation;
@end

