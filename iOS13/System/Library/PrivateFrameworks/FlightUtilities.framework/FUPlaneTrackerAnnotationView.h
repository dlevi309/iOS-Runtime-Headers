/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, NSMutableArray;

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {

	BOOL _showsPlane;
	NSMutableArray* _viewAddedBlock;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) NSMutableArray * viewAddedBlock;                             //@synthesize viewAddedBlock=_viewAddedBlock - In the implementation block
@property (assign,nonatomic) double currentProgress; 
@property (assign,nonatomic) CLLocationCoordinate2D startLocation; 
@property (assign,nonatomic) CLLocationCoordinate2D endLocation; 
@property (readonly) CLLocationCoordinate2D currentLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(Class)layerClass;
+(id)defaultAnotation;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(double)currentProgress;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)startLocation;
-(CLLocationCoordinate2D)endLocation;
-(void)didMoveToSuperview;
-(void)setStartLocation:(CLLocationCoordinate2D)arg1 ;
-(void)setEndLocation:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)currentLocation;
-(id)planeLayer;
-(void)setPlaneImage:(id)arg1 ;
-(NSMutableArray *)viewAddedBlock;
-(void)setViewAddedBlock:(NSMutableArray *)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4 ;
-(void)setShowsPlane:(BOOL)arg1 ;
-(void)notifyWhenIsVisibleWithBlock:(/*^block*/id)arg1 ;
@end

