/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)title;
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
-(id)init;
-(void)dealloc;
-(CLLocationCoordinate2D)coordinate;
-(void)reset;
-(double)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)subtitle;
-(NSString *)shortDescription;
-(void)setUpdating:(BOOL)arg1 ;
-(CLHeading *)heading;
-(double)accuracy;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)isUpdating;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)annotation;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(double)expectedCoordinateUpdateInterval;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
-(CLLocation *)fixedLocation;
-(void)_updateCoordinate;
-(double)headingDegrees;
-(double)expectedHeadingUpdateInterval;
@end

