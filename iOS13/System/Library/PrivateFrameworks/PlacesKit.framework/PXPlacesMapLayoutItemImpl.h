/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapLayoutItem.h>

@class NSOrderedSet, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem> {

	NSMutableOrderedSet* _layoutGeotaggables;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) NSMutableOrderedSet * layoutGeotaggables;              //@synthesize layoutGeotaggables=_layoutGeotaggables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSOrderedSet *)geotaggables;
-(BOOL)isEqualToLayoutItem:(id)arg1 ;
-(void)addGeotaggable:(id)arg1 ;
-(void)addGeotaggables:(id)arg1 ;
-(NSMutableOrderedSet *)layoutGeotaggables;
-(void)setLayoutGeotaggables:(NSMutableOrderedSet *)arg1 ;
@end

