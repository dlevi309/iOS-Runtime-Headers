/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithBusinessHours:(id)arg1 frame:(CGRect)arg2 ;
-(MKPlaceHoursView *)hoursView;
-(void)_setUpViewsForPlaceHoursDayRow;
-(void)_setUpConstraints;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(void)setHoursView:(MKPlaceHoursView *)arg1 ;
-(NSLayoutConstraint *)topAnchorToTopLabelBaseline;
-(void)setTopAnchorToTopLabelBaseline:(NSLayoutConstraint *)arg1 ;
@end

