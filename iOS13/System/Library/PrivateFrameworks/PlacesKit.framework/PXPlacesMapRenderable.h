/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSelectionHandler:(id)arg1;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;

@end

