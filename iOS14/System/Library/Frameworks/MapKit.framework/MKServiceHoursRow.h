/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setUpConstraints;
-(GEOLinkedService *)linkedService;
-(id)initWithLinkedService:(id)arg1 frame:(CGRect)arg2 showTodaysHoursOnly:(BOOL)arg3 ;
-(MKPlaceCompleteHoursView *)completePlaceHoursView;
-(void)setCompletePlaceHoursView:(MKPlaceCompleteHoursView *)arg1 ;
-(void)setLinkedService:(GEOLinkedService *)arg1 ;
@end

