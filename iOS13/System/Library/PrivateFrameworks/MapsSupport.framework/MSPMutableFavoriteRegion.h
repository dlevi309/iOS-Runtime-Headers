/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRegion.h>

@class NSString, GEOMapRegion, NSUUID;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) GEOMapRegion * geoMapRegion; 
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
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
@end

