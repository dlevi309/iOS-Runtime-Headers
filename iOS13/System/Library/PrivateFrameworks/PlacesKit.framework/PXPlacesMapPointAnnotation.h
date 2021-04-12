/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id<PXPlacesMapRenderer>)arg1 ;
-(void)setSelectionHandler:(id<PXPlacesMapSelectionHandler>)arg1 ;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(NSOrderedSet *)arg1 ;
@end

