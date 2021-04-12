/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <MapKit/MKCircle.h>

@protocol MKAnnotation;
@interface FMAccuracyOverlay : MKCircle {

	id<MKAnnotation> _parentAnnotation;
	double _horizontalAccuracy;

}

@property (assign,nonatomic,__weak) id<MKAnnotation> parentAnnotation;              //@synthesize parentAnnotation=_parentAnnotation - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                             //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
-(id)description;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id<MKAnnotation>)parentAnnotation;
-(void)setParentAnnotation:(id<MKAnnotation>)arg1 ;
@end

