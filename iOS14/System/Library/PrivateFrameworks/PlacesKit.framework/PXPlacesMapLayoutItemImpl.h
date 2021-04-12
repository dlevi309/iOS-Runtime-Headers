/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)description;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSOrderedSet *)geotaggables;
-(BOOL)isEqualToLayoutItem:(id)arg1 ;
-(void)addGeotaggable:(id)arg1 ;
-(void)addGeotaggables:(id)arg1 ;
-(NSMutableOrderedSet *)layoutGeotaggables;
-(void)setLayoutGeotaggables:(NSMutableOrderedSet *)arg1 ;
@end

