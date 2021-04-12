/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationRenderer.h>

@protocol PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapPinRenderer : NSObject <PXPlacesMapAnnotationRenderer> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
-(void)reset;
-(long long)annotationType;
-(UIEdgeInsets)minimumEdgeInsets;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(BOOL)supportsMoveAnimations;
-(id)viewForAnnotation:(id)arg1 andMapView:(id)arg2 ;
-(id)annotationForGeotaggables:(id)arg1 initialCoordinate:(CLLocationCoordinate2D)arg2 ;
@end

