/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate> {

	unsigned long long _state;
	double _accuracy;
	/*^block*/id _handler;
	CLLocationManager* _locationManager;

}

@property (assign,getter=isClosed,nonatomic) BOOL closed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_open;
-(void)_cleanup;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)isClosed;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setClosed:(BOOL)arg1 ;
-(id)initWithAccuracy:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestAuthorization;
-(void)_requestLocation;
-(void)_emitLocation:(id)arg1 ;
-(void)_closeStreamWithError;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)dealloc;
@end

