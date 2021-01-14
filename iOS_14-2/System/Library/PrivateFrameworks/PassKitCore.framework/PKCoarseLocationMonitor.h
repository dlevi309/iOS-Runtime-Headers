/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	BOOL _coarseLocationEnabled;

}

@property (nonatomic,readonly) BOOL coarseLocationEnabled;              //@synthesize coarseLocationEnabled=_coarseLocationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(BOOL)coarseLocationEnabled;
@end

