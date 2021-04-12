/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitLine.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitSystem;
@class NSString, GEOMapItemIdentifier, NSArray, GEOPBTransitLine, GEOStyleAttributes;

@interface _GEOTransitLine : NSObject <GEOTransitLine, NSSecureCoding> {

	GEOPBTransitLine* _line;
	id<GEOTransitSystem> _system;
	GEOCoarseLocationLatLng _locationHint;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) BOOL isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(GEOStyleAttributes *)styleAttributes;
-(BOOL)isBus;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)operatingHours;
-(NSString *)name;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitSystem>)system;
-(NSString *)lineColorString;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(id)initWithLine:(id)arg1 system:(id)arg2 locationHint:(GEOCoarseLocationLatLng)arg3 ;
-(GEOMapItemIdentifier *)identifier;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)hasLineColorString;
@end

