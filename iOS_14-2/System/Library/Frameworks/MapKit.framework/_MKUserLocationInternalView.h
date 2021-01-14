/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKUserLocationView.h>

@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView {

	MKUserLocationView* _parentView;

}

@property (assign,nonatomic,__weak) MKUserLocationView * parentView;              //@synthesize parentView=_parentView - In the implementation block
-(id)_mapView;
-(id)_containerView;
-(double)_pointsForDistance:(double)arg1 ;
-(MKUserLocationView *)parentView;
-(void)setParentView:(MKUserLocationView *)arg1 ;
-(id)_annotationContainer;
@end

