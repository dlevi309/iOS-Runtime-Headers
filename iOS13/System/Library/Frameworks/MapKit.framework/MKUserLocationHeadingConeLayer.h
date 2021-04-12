/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>

@class _MKPuckAnnotationView, CALayer, NSString;

@interface MKUserLocationHeadingConeLayer : CALayer <MKUserLocationHeadingIndicator> {

	_MKPuckAnnotationView* _userLocationView;
	CALayer* _maskLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTintColor:(id)arg1 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)updateHeading:(double)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_updateHeadingImage;
-(id)_headingImage:(CGPoint*)arg1 ;
@end

