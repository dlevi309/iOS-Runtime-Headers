/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITraitCollection *)traitCollection;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CLLocationCoordinate2D)arg2 ;
-(UIImage *)image;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_prepareForRenderWithAnnotationViews:(id)arg1 ;
-(void)_displayAppleLogoForMapType:(unsigned long long)arg1 withScale:(double)arg2 forDarkMode:(BOOL)arg3 ;
-(id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2 ;
-(CLLocationCoordinate2D)_coordinateForPoint:(CGPoint)arg1 ;
-(BOOL)_hasNoDataPlaceholders;
@end

