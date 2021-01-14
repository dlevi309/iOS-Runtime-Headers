/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;
	double _expectedHeadingUpdateInterval;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (assign,nonatomic) double expectedHeadingUpdateInterval;                 //@synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
+(id)title;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLHeading *)heading;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(id)annotation;
-(BOOL)isUpdating;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)init;
-(void)setUpdating:(BOOL)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)timestamp;
-(CLLocation *)location;
-(NSString *)subtitle;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(double)expectedCoordinateUpdateInterval;
-(double)headingDegrees;
-(void)_updateCoordinate;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)hasValidHeading;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocation *)fixedLocation;
-(double)expectedHeadingUpdateInterval;
-(double)accuracy;
-(void)reset;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

