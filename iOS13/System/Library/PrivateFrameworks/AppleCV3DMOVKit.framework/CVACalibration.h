/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CVAIMUCalibration;

@interface CVACalibration : NSObject <NSSecureCoding> {

	NSArray* _cameraCalibrations;
	CVAIMUCalibration* _imuCalibration;

}

@property (nonatomic,retain) NSArray * cameraCalibrations;                    //@synthesize cameraCalibrations=_cameraCalibrations - In the implementation block
@property (nonatomic,retain) CVAIMUCalibration * imuCalibration;              //@synthesize imuCalibration=_imuCalibration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCameraCalibrations:(NSArray *)arg1 ;
-(void)setImuCalibration:(CVAIMUCalibration *)arg1 ;
-(NSArray *)cameraCalibrations;
-(CVAIMUCalibration *)imuCalibration;
@end

