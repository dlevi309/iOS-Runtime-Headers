/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
*/


@protocol ACCNavigationShimProtocol
@required
-(id)navigationShimAccessoryForConnectionID:(unsigned)arg1;
-(void)updateRouteGuidanceInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;
-(void)notifyNavigationAccessoryClientsOfStateChange;
-(id)navigationShimAccessoryList;
-(void)updateManeuverInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;

@end

