/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)dealloc;
@end

