/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <FMF/FMAnnotation.h>

@class FMAccuracyOverlay, UIColor, UIImage, NSString, CLLocation, FMFPlacemark, FMFHandle, NSDate;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation> {

	BOOL _locatingInProgress;
	BOOL _isBorderEnabled;
	CLLocation* _location;
	FMAccuracyOverlay* _overlay;
	double _horizontalAccuracy;
	UIImage* _smallAnnotationIcon;
	UIImage* _smallOverlayIcon;
	UIImage* _largeOverlayIcon;
	UIImage* _largeAnnotationIcon;
	double _distanceFromUser;
	UIColor* _tintColor;
	FMFPlacemark* _placemark;
	FMFHandle* _handle;
	NSString* _longAddress;
	NSDate* _timestamp;
	NSString* _label;
	NSString* _shortAddressString;
	double _maxLocatingInterval;
	double _TTL;
	double _distance;
	NSString* _distanceDescription;
	NSString* _age;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) FMFHandle * handle;                                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) FMFPlacemark * placemark;                                         //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * label;                                                 //@synthesize label=_label - In the implementation block
@property (assign,getter=isLocatingInProgress,nonatomic) BOOL locatingInProgress;              //@synthesize locatingInProgress=_locatingInProgress - In the implementation block
@property (nonatomic,copy) NSString * shortAddressString;                                      //@synthesize shortAddressString=_shortAddressString - In the implementation block
@property (nonatomic,copy) NSString * longAddress;                                             //@synthesize longAddress=_longAddress - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double maxLocatingInterval;                                       //@synthesize maxLocatingInterval=_maxLocatingInterval - In the implementation block
@property (assign,nonatomic) double TTL;                                                       //@synthesize TTL=_TTL - In the implementation block
@property (assign,nonatomic) double distance;                                                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSString * distanceDescription;                                   //@synthesize distanceDescription=_distanceDescription - In the implementation block
@property (nonatomic,retain) NSString * age;                                                   //@synthesize age=_age - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortAddress; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMAccuracyOverlay * overlay;                                      //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                                        //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double distanceFromUser;                                          //@synthesize distanceFromUser=_distanceFromUser - In the implementation block
@property (assign,nonatomic) BOOL isBorderEnabled;                                             //@synthesize isBorderEnabled=_isBorderEnabled - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * largeAnnotationIcon;                                    //@synthesize largeAnnotationIcon=_largeAnnotationIcon - In the implementation block
@property (nonatomic,retain) UIImage * smallAnnotationIcon;                                    //@synthesize smallAnnotationIcon=_smallAnnotationIcon - In the implementation block
@property (nonatomic,retain) UIImage * largeOverlayIcon;                                       //@synthesize largeOverlayIcon=_largeOverlayIcon - In the implementation block
@property (nonatomic,retain) UIImage * smallOverlayIcon;                                       //@synthesize smallOverlayIcon=_smallOverlayIcon - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FMFHandle *)handle;
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)timestamp;
-(NSString *)title;
-(CLLocation *)location;
-(void)setTimestamp:(NSDate *)arg1 ;
-(FMAccuracyOverlay *)overlay;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)subtitle;
-(void)setHandle:(FMFHandle *)arg1 ;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(FMFPlacemark *)placemark;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(BOOL)hasKnownLocation;
-(NSString *)shortAddress;
-(NSString *)age;
-(void)setAge:(NSString *)arg1 ;
-(BOOL)isThisDevice;
-(void)setPlacemark:(FMFPlacemark *)arg1 ;
-(void)setOverlay:(FMAccuracyOverlay *)arg1 ;
-(id)locationShortAddressWithAgeIncludeLocating;
-(double)maxLocatingInterval;
-(void)updateLocationForCache:(id)arg1 ;
-(void)setMaxLocatingInterval:(double)arg1 ;
-(void)setTTL:(double)arg1 ;
-(void)setShortAddressString:(NSString *)arg1 ;
-(void)setLongAddress:(NSString *)arg1 ;
-(NSString *)shortAddressString;
-(NSString *)longAddress;
-(BOOL)isLocatingInProgress;
-(void)setLocatingInProgress:(BOOL)arg1 ;
-(double)TTL;
-(id)locationAge;
-(id)locationShortAddressWithAge;
-(void)resetLocateInProgressTimer;
-(void)resetLocateInProgress:(id)arg1 ;
-(void)_updateLocation:(id)arg1 ;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1 ;
-(BOOL)isBorderEnabled;
-(void)setIsBorderEnabled:(BOOL)arg1 ;
-(UIImage *)largeAnnotationIcon;
-(void)setLargeAnnotationIcon:(UIImage *)arg1 ;
-(UIImage *)smallAnnotationIcon;
-(void)setSmallAnnotationIcon:(UIImage *)arg1 ;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(UIImage *)arg1 ;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(UIImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4 ;
-(id)agingItemTimestamp;
-(long long)distanceThenNameCompare:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)updateHandle:(id)arg1 ;
-(NSString *)distanceDescription;
-(void)setDistanceDescription:(NSString *)arg1 ;
@end

