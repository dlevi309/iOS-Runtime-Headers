/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesMapSelectionHandler.h>

@protocol PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2 ;
@end

