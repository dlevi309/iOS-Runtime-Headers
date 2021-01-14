/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOPrivacyManager : NSObject {

	BOOL _lastKnownLocationServicesEnabled;
	BOOL _hasLastKnownLocationServicesEnabled;

}
-(id)init;
-(void)_fireResetLocationAndPrivacyNotification;
-(void)_fireRecentsClearedNotification;
-(void)_locationServicesStateChanged;
-(void)dealloc;
@end

