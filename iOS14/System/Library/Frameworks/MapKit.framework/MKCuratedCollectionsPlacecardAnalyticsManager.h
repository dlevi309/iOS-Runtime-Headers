/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCuratedCollectionsPlacecardAnalytics.h>

@interface MKCuratedCollectionsPlacecardAnalyticsManager : NSObject <MKCuratedCollectionsPlacecardAnalytics> {

	CollectionsPlacecardEvent _event;

}
-(id)init;
-(void)logEvent;
-(void)cleanUp;
-(void)placecardCollectionsScrollForward;
-(void)placecardCollectionsScrollBackward;
-(void)placecardCollectionTapped:(id)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(BOOL)arg3 ;
-(void)placecardCollectionsSeeAllTapped;
@end

