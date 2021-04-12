/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id<GEOMapItem>)geoMapItem;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1 ;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
-(int)floorOrdinalOfDroppedPin;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(void)setCoordinateOfDroppedPin:(CLLocationCoordinate2D)arg1 ;
-(void)setFloorOrdinalOfDroppedPin:(int)arg1 ;
@end

