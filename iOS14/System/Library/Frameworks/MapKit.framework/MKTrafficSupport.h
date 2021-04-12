/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(void)setupTrafficIncidents;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(long long)_convertType:(int)arg1 ;
@end

