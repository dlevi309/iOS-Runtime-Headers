/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSOrderedSet;


@protocol PXPlacesMapLayoutItem <NSObject>
@property (assign) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
@required
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSOrderedSet *)geotaggables;
-(BOOL)isEqualToLayoutItem:(id)arg1;

@end

