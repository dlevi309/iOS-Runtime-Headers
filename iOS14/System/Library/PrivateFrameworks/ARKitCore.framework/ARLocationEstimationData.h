/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class CLLocation, NSString;

@interface ARLocationEstimationData : NSObject <ARResultData, ARDaemonSecureCoding> {

	double _heading;
	CLLocation* _location;

}

@property (nonatomic,readonly) double heading;                      //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) CLLocation * location;               //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)heading;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocation:(id)arg1 heading:(double)arg2 ;
-(id)initWithCoordinates:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 heading:(double)arg3 ;
@end

