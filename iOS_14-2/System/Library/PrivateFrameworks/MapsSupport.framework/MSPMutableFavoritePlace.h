/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoritePlace.h>

@class NSString, NSUUID;

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) id<GEOMapItem> geoMapItem; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinateOfDroppedPin; 
@property (assign,nonatomic) int floorOrdinalOfDroppedPin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(void)setTitle:(NSString *)arg1 ;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id<GEOMapItem>)geoMapItem;
-(NSString *)title;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1 ;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
-(int)floorOrdinalOfDroppedPin;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(void)setCoordinateOfDroppedPin:(CLLocationCoordinate2D)arg1 ;
-(void)setFloorOrdinalOfDroppedPin:(int)arg1 ;
@end

