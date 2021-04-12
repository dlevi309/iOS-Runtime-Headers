/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
*/


@protocol ACCNavigationShimProtocol
@required
-(void)notifyNavigationAccessoryClientsOfStateChange;
-(void)updateRouteGuidanceInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;
-(void)updateManeuverInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3;
-(id)navigationShimAccessoryList;
-(id)navigationShimAccessoryForConnectionID:(unsigned)arg1;

@end

