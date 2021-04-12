/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocation, CLLocationManager, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	CLLocation* _currentLocation;
	/*^block*/id _completionBlock;
	CLLocationManager* _manager;
	NSString* _currentBundleID;
	BOOL _didFinish;

}

@property (retain) CLLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL didFinish;                                  //@synthesize didFinish=_didFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocation *)currentLocation;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)timeout;
-(void)setDidFinish:(BOOL)arg1 ;
-(id)initWithCurrentBundleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(BOOL)didFinish;
-(void)dealloc;
@end

