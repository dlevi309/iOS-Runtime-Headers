/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLHeading *)heading;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(id<MKAnnotationPrivate>)annotation;
-(BOOL)isUpdating;
-(void)setUpdating:(BOOL)arg1 ;
-(double)timestamp;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(CLLocation *)fixedLocation;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)title;
@end

