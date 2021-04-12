/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


#import <OpusKit/OpusKit-Structs.h>
@class NSDate, NSString, NSArray, CLLocation;

@interface OKMediaItemMetadata : NSObject {

	unsigned long long _type;
	unsigned long long _subType;
	CGSize _resolution;
	NSDate* _creationDate;
	unsigned long long _orientation;
	double _duration;
	double _displayTime;
	double _latitude;
	double _longitude;
	BOOL _opaque;
	NSString* _UTI;
	NSString* _name;
	NSString* _caption;
	BOOL _regionsOfInterestDetected;
	NSArray* _regionsOfInterest;
	CGRect _regionOfInterestContainerBounds;

}

@property (assign) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (assign) unsigned long long subType;                               //@synthesize subType=_subType - In the implementation block
@property (assign) CGSize resolution;                                        //@synthesize resolution=_resolution - In the implementation block
@property (retain) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) unsigned long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (assign) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign) double displayTime;                                       //@synthesize displayTime=_displayTime - In the implementation block
@property (assign) double latitude;                                          //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                                         //@synthesize longitude=_longitude - In the implementation block
@property (assign) BOOL opaque;                                              //@synthesize opaque=_opaque - In the implementation block
@property (copy) NSString * UTI;                                             //@synthesize UTI=_UTI - In the implementation block
@property (copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (copy) NSString * caption;                                         //@synthesize caption=_caption - In the implementation block
@property (assign) BOOL regionsOfInterestDetected;                           //@synthesize regionsOfInterestDetected=_regionsOfInterestDetected - In the implementation block
@property (copy) NSArray * regionsOfInterest;                                //@synthesize regionsOfInterest=_regionsOfInterest - In the implementation block
@property (assign) CGRect regionOfInterestContainerBounds;                   //@synthesize regionOfInterestContainerBounds=_regionOfInterestContainerBounds - In the implementation block
@property (readonly) double aspectRatio; 
@property (readonly) CLLocation * location; 
@property (readonly) CLLocationCoordinate2D locationCoordinate; 
@property (readonly) BOOL hasRegionsOfInterest; 
@property (readonly) BOOL hasRegionsOfInterestName; 
@property (readonly) NSArray * regionsOfInterestName; 
+(unsigned long long)alignResolution:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingAspectRatio;
+(id)keyPathsForValuesAffectingLocation;
+(id)keyPathsForValuesAffectingLocationCoordinate;
+(id)keyPathsForValuesAffectingHasRegionsOfInterest;
+(id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+(id)keyPathsForValuesAffectingRegionsOfInterestName;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)orientation;
-(double)duration;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(void)setOrientation:(unsigned long long)arg1 ;
-(double)aspectRatio;
-(double)latitude;
-(double)longitude;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)UTI;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(unsigned long long)subType;
-(void)setSubType:(unsigned long long)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)opaque;
-(id)initWithFileURL:(id)arg1 ;
-(CLLocationCoordinate2D)locationCoordinate;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(NSArray *)regionsOfInterest;
-(BOOL)hasRegionsOfInterest;
-(BOOL)regionsOfInterestDetected;
-(unsigned long long)bestResolutionForSize:(CGSize)arg1 scale:(double)arg2 quality:(double)arg3 ;
-(void)setRegionsOfInterest:(NSArray *)arg1 ;
-(void)setRegionsOfInterestDetected:(BOOL)arg1 ;
-(void)setPropertiesFromDictionary:(id)arg1 ;
-(void)setDisplayTime:(double)arg1 ;
-(void)setRegionOfInterestContainerBounds:(CGRect)arg1 ;
-(id)regionsOfInterestDictionary;
-(id)dictionaryValueForKey:(id)arg1 ;
-(BOOL)hasRegionsOfInterestName;
-(NSArray *)regionsOfInterestName;
-(BOOL)writeToFileURL:(id)arg1 ;
-(double)displayTime;
-(CGRect)regionOfInterestContainerBounds;
@end

