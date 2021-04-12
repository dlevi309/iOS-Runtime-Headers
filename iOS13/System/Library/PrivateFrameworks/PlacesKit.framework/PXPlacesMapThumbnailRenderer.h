/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationPopoverImageRenderer.h>
#import <libobjc.A.dylib/PXPlacesMapGeotaggableInfoDelegate.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesMapGeotaggableInfoDelegate;
@class PKExtendedTraitCollection, NSString;

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate> {

	unsigned long long _popoverImageType;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id _extendedTraitObserver;

}

@property (retain) id<PXPlacesMapGeotaggableInfoDelegate> informationDelegate;                                       //@synthesize informationDelegate=_informationDelegate - In the implementation block
@property (retain) PKExtendedTraitCollection * extendedTraitCollection;                                              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (retain) id extendedTraitObserver;                                                                         //@synthesize extendedTraitObserver=_extendedTraitObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
@property (readonly) unsigned long long popoverImageType;                                                            //@synthesize popoverImageType=_popoverImageType - In the implementation block
-(void)dealloc;
-(void)reset;
-(long long)annotationType;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(id)initWithTraitCollection:(id)arg1 andInforamtionDelegate:(id)arg2 popoverImageType:(unsigned long long)arg3 ;
-(void)imageForGeotaggable:(id)arg1 ofSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(BOOL)supportsMoveAnimations;
-(id)viewForAnnotation:(id)arg1 andMapView:(id)arg2 ;
-(id)annotationForGeotaggables:(id)arg1 initialCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)extendedTraitObserver;
-(void)setExtendedTraitObserver:(id)arg1 ;
-(unsigned long long)popoverImageType;
-(id<PXPlacesMapGeotaggableInfoDelegate>)informationDelegate;
-(void)setInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
@end

