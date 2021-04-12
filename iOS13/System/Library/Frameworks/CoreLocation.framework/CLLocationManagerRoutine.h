/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
@end

