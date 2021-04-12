/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)timeout;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(BOOL)didFinish;
-(id)initWithCurrentBundleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2 ;
-(void)setDidFinish:(BOOL)arg1 ;
@end

