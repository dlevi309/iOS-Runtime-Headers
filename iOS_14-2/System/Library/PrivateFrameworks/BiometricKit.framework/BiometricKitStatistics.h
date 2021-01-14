/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


#import <BiometricKit/BiometricKit-Structs.h>
@class NSDate;

@interface BiometricKitStatistics : NSObject {

	BOOL _fingerOn;
	BOOL _enrolling;
	BOOL _badImagePerFingerDown;
	NSDate* _enrollmentStarTime;
	unsigned _touchesPerEnroll;
	unsigned _badImagesPerEnroll;
	unsigned _rejectedImagesPerEnroll;
	unsigned _primaryClusterAdditions;
	unsigned _primaryClusterFailedAdditions;
	unsigned _otherClustersAdditions;
	unsigned _joinEvents;
	double _area;
	double _primaryClusterArea;

}
+(id)statistics;
-(void)initEnrollmentValues;
-(void)enrollResult:(id)arg1 componentSet:(SCD_Struct_Bi0*)arg2 ;
-(id)init;
-(void)enrollProgress:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enroll:(int)arg1 ;
@end

