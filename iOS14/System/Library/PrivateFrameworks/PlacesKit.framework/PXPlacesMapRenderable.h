/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSOrderedSet;


@protocol PXPlacesMapRenderable <NSObject>
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
@required
-(long long)index;
-(void)setIndex:(long long)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id)arg1;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(void)setSelectionHandler:(id)arg1;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;

@end

