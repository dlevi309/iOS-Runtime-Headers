/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKPredictedLocationOfInterest, NSString, NSData, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {

	BOOL _imprecise;
	EKPredictedLocationOfInterest* _predictedLOI;

}

@property (nonatomic,copy) NSString * contactLabel; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,retain) NSString * routing; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,readonly) BOOL hasKnownSpatialData; 
@property (nonatomic,retain) NSString * address; 
@property (assign,getter=isImprecise,nonatomic) BOOL imprecise;                         //@synthesize imprecise=_imprecise - In the implementation block
@property (nonatomic,retain) EKPredictedLocationOfInterest * predictedLOI;              //@synthesize predictedLOI=_predictedLOI - In the implementation block
@property (getter=isPrediction,nonatomic,readonly) BOOL prediction; 
@property (nonatomic,copy) NSString * derivedFrom; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) CLLocation * geoLocation; 
@property (assign,nonatomic) double radius; 
+(id)displayLabelForContact:(id)arg1 unlocalizedLabel:(id)arg2 ;
+(id)locationWithTitle:(id)arg1 ;
+(id)_stringByStrippingControlCharactersFromString:(id)arg1 ;
+(id)knownIdentityKeysForComparison;
+(id)locationWithPlacemark:(id)arg1 ;
+(id)knownSingleValueKeysForComparison;
+(id)locationWithGEOMapItem:(id)arg1 ;
+(id)locationWithMapItem:(id)arg1 ;
+(Class)frozenClass;
-(id)cacheKey;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)latitude;
-(void)setRouting:(NSString *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(id)semanticIdentifier;
-(BOOL)isPrediction;
-(EKPredictedLocationOfInterest *)predictedLOI;
-(CLLocation *)geoLocation;
-(void)setPredictedLOI:(EKPredictedLocationOfInterest *)arg1 ;
-(NSData *)mapKitHandle;
-(BOOL)hasKnownSpatialData;
-(void)setDerivedFrom:(NSString *)arg1 ;
-(id)radiusRaw;
-(void)updateFromMapItem:(id)arg1 ;
-(id)longitude;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)referenceFrame;
-(void)setRadiusRaw:(id)arg1 ;
-(void)_clearGeoLocationCache;
-(BOOL)isImprecise;
-(void)setImprecise:(BOOL)arg1 ;
-(id)geoURLString;
-(void)setLatitude:(id)arg1 ;
-(double)radius;
-(id)description;
-(void)setReferenceFrame:(id)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setContactLabel:(NSString *)arg1 ;
-(NSString *)routing;
-(BOOL)_reset;
-(BOOL)isStructured;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id)calLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contactLabel;
-(NSString *)title;
-(NSString *)derivedFrom;
-(void)setGeoLocation:(CLLocation *)arg1 ;
@end

