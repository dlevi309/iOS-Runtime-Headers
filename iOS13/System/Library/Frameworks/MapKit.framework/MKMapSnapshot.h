/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, UIImage, UITraitCollection;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	UIImage* _image;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2 ;
-(UIImage *)image;
-(UITraitCollection *)traitCollection;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_prepareForRenderWithAnnotationViews:(id)arg1 ;
-(void)_displayAppleLogoForMapType:(unsigned long long)arg1 withScale:(double)arg2 forDarkMode:(BOOL)arg3 ;
-(id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2 ;
-(CLLocationCoordinate2D)_coordinateForPoint:(CGPoint)arg1 ;
-(BOOL)_hasNoDataPlaceholders;
@end

