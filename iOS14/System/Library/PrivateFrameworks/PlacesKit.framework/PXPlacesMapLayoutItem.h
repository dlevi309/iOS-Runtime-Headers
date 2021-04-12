/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

