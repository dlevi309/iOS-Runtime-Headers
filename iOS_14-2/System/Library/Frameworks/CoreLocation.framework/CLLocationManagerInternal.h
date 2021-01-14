/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManager, CLLocationManagerStateTracker, NSString, CLTimer, NSMutableSet, CLSilo;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManager* fManager;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CLTimer* fLocationRequestTimer;
	double fLocationRequestTimeout;
	CLTimer* fRangingRequestTimer;
	double fLastRangingRequestTimeout;
	unsigned long long fLastRangingRequestMachTime;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;
	NSMutableSet* fRangedConstraints;
	/*^block*/id fPlaceInferenceHandler;
	unsigned long long fFidelityPolicy;
	CLTimer* fPlaceInferenceTimer;
	CLSilo* fSilo;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
@property (nonatomic,readonly) NSMutableSet * rangedConstraints; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (assign,nonatomic,__weak) CLLocationManager * manager; 
-(id<CLLocationManagerDelegate>)delegate;
-(void)setManager:(CLLocationManager *)arg1 ;
-(void)stopUpdatingLocationAutoPaused;
-(NSMutableSet *)rangedRegions;
-(int)PausesLocationUpdatesAutomatically;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(BOOL)hasLingeringRangingRequest;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(void)cancelLingeringRangingRequest;
-(void)cancelLocationRequest;
-(BOOL)allowsBackgroundLocationUpdates;
-(CLLocationManager *)manager;
-(void)performCourtesyPromptIfNeeded;
-(void)invalidate;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 delegate:(id)arg4 silo:(id)arg5 ;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(NSMutableSet *)rangedConstraints;
-(void)cancelRangingRequest;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)dealloc;
@end

