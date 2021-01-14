/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/TSLocationDetectionManagerType.h>

@class CLLocation;

@interface NewsUI2.LocationDetectionManager : NSObject <CLLocationManagerDelegate, TSLocationDetectionManagerType> {

	 locationManager;
	 observableMostFrequentLocation;

}

@property (retain,nonatomic) id observableMostFrequentLocation; 
@property (readonly,nonatomic) CLLocation * mostFrequentLocation; 
@property (readonly,nonatomic) BOOL locationServicesEnabled; 
@property (readonly,nonatomic) BOOL authorized; 
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)init;
-(BOOL)authorized;
-(CLLocation *)mostFrequentLocation;
-(id)observableMostFrequentLocation;
-(BOOL)locationServicesEnabled;
-(void)setObservableMostFrequentLocation:(id)arg1 ;
@end

