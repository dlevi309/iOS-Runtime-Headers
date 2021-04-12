/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {

	GEOPDMapsIdentifier* _mapsIdentifier;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) int resultProviderID; 
@property (getter=hasCoordinate,nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,readonly) NSData * comparableRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1 ;
-(int)resultProviderID;
-(BOOL)hasCoordinate;
-(id)shortDebugDescription;
-(id)init;
-(id)initWithPlace:(id)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)isEqualToGEOMapItemIdentifier:(id)arg1 ;
-(id)mapsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 ;
-(id)debugDescription;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(NSData *)comparableRepresentation;
-(id)description;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMapsIdentifier:(id)arg1 ;
-(unsigned long long)muid;
-(id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(id)initWithXPCCoder:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

