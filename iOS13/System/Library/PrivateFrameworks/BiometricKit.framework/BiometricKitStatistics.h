/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)initEnrollmentValues;
-(void)enroll:(int)arg1 ;
-(void)enrollResult:(id)arg1 componentSet:(SCD_Struct_Bi0*)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollProgress:(id)arg1 ;
@end

