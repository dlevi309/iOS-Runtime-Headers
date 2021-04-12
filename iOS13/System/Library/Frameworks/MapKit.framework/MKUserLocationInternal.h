/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAnnotationPrivate;
@class CLLocation, CLHeading, NSString;

@interface MKUserLocationInternal : NSObject {

	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	id<MKAnnotationPrivate> _annotation;
	double timestamp;
	BOOL updating;
	double course;
	id<MKAnnotationPrivate> annotation;

}

@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) id<MKAnnotationPrivate> annotation; 
@property (assign,nonatomic) double timestamp; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (assign,nonatomic) double course; 
-(double)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)subtitle;
-(void)setUpdating:(BOOL)arg1 ;
-(CLHeading *)heading;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(BOOL)isUpdating;
-(void)setSubtitle:(NSString *)arg1 ;
-(id<MKAnnotationPrivate>)annotation;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(CLLocation *)fixedLocation;
@end

