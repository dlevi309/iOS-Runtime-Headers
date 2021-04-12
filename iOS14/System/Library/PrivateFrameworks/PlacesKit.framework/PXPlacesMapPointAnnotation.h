/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <libobjc.A.dylib/PXPlacesMapRenderable.h>

@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;
@class NSString, NSOrderedSet;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable> {

	id<PXPlacesMapRenderer> renderer;
	id<PXPlacesMapSelectionHandler> selectionHandler;
	NSOrderedSet* geotaggables;
	long long index;
	CLLocationCoordinate2D coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
-(long long)index;
-(CLLocationCoordinate2D)coordinate;
-(void)setIndex:(long long)arg1 ;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id<PXPlacesMapRenderer>)arg1 ;
-(NSString *)description;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(void)setSelectionHandler:(id<PXPlacesMapSelectionHandler>)arg1 ;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(NSOrderedSet *)arg1 ;
@end

