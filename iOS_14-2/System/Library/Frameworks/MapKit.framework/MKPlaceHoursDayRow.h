/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate> {

	MKPlaceHoursView* _hoursView;
	NSLayoutConstraint* _topAnchorToTopLabelBaseline;

}

@property (nonatomic,retain) MKPlaceHoursView * hoursView;                                  //@synthesize hoursView=_hoursView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topAnchorToTopLabelBaseline;              //@synthesize topAnchorToTopLabelBaseline=_topAnchorToTopLabelBaseline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setUpConstraints;
-(MKPlaceHoursView *)hoursView;
-(id)initWithBusinessHours:(id)arg1 frame:(CGRect)arg2 ;
-(void)_setUpViewsForPlaceHoursDayRow;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(void)setHoursView:(MKPlaceHoursView *)arg1 ;
-(NSLayoutConstraint *)topAnchorToTopLabelBaseline;
-(void)setTopAnchorToTopLabelBaseline:(NSLayoutConstraint *)arg1 ;
@end

