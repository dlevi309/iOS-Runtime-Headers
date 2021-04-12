/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(void)setupTrafficIncidents;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
-(long long)_convertType:(int)arg1 ;
@end

