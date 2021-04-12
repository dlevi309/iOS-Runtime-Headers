/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceCompleteHoursView, GEOLinkedService;

@interface MKServiceHoursRow : MKPlaceSectionRowView {

	MKPlaceCompleteHoursView* _completePlaceHoursView;
	GEOLinkedService* _linkedService;

}

@property (nonatomic,retain) MKPlaceCompleteHoursView * completePlaceHoursView;              //@synthesize completePlaceHoursView=_completePlaceHoursView - In the implementation block
@property (nonatomic,retain) GEOLinkedService * linkedService;                               //@synthesize linkedService=_linkedService - In the implementation block
-(GEOLinkedService *)linkedService;
-(void)setLinkedService:(GEOLinkedService *)arg1 ;
-(void)_setUpConstraints;
-(id)initWithLinkedService:(id)arg1 frame:(CGRect)arg2 showTodaysHoursOnly:(BOOL)arg3 ;
-(MKPlaceCompleteHoursView *)completePlaceHoursView;
-(void)setCompletePlaceHoursView:(MKPlaceCompleteHoursView *)arg1 ;
@end

