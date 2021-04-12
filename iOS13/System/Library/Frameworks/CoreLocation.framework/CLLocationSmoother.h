/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain,readonly) _CLLocationSmootherProxy * locationManagerSmootherProxy; 
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(void)dealloc;
-(id<CLLocationManagerDelegateInternal>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(void)smoothLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)smoothLocations:(id)arg1 ;
@end

