/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain,readonly) _CLLocationSmootherProxy * locationManagerSmootherProxy; 
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(id<CLLocationManagerDelegateInternal>)delegate;
-(void)smoothLocations:(id)arg1 ;
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(void)smoothLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)dealloc;
@end

