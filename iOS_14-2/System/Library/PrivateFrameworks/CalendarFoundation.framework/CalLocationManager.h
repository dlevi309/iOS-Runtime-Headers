/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface CalLocationManager : NSObject
+(id)placemarkForLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)placemarkForAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)_loadMapKit;
+(id)currentLocationWithCompletionBlock:(/*^block*/id)arg1 ;
+(BOOL)isCurrentProcessEntitledToUseLocationServices;
+(id)strictGeocodeString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

