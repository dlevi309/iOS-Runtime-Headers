/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <ARKitCore/ARResultData.h>

@class ARGeoTrackingStatus, NSString;

@interface ARVLStateData : NSObject <ARDaemonSecureCoding, NSCopying, ARResultData> {

	double _timeSinceLastLocalization;
	double _timeSinceInitialization;
	ARGeoTrackingStatus* _trackingStatus;

}

@property (nonatomic,readonly) double timeSinceLastLocalization;                  //@synthesize timeSinceLastLocalization=_timeSinceLastLocalization - In the implementation block
@property (nonatomic,readonly) double timeSinceInitialization;                    //@synthesize timeSinceInitialization=_timeSinceInitialization - In the implementation block
@property (nonatomic,readonly) ARGeoTrackingStatus * trackingStatus;              //@synthesize trackingStatus=_trackingStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)init:(double)arg1 timeSinceInitialization:(double)arg2 trackingStatus:(id)arg3 ;
-(double)timeSinceLastLocalization;
-(double)timeSinceInitialization;
-(ARGeoTrackingStatus *)trackingStatus;
@end

