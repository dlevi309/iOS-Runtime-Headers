/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFKnownNetworksViewControllerDelegate <NSObject>
@required
-(id)getKnownNetworksList;
-(void)removeKnownNetworkWithSsid:(id)arg1;
-(id)getSecurityTypeStringForNetwork:(id)arg1;
-(id)getPasswordForNetwork:(id)arg1;
-(BOOL)isNetworkHidden:(id)arg1;
-(id)getDateAddedForNetwork:(id)arg1;
-(id)getDateLastJoinedForNetwork:(id)arg1;
-(BOOL)isNetworkBlacklisted:(id)arg1;
-(id)getScoreForNetwork:(id)arg1;
-(id)getGeoTagsForNetwork:(id)arg1;

@end

