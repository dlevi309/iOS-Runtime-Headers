/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JDPointCloud;

@interface JDTimestampedPointCloud : NSObject {

	JDPointCloud* _pointCloud;
	SCD_Struct_JD2 _timestamp;

}

@property (readonly) JDPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
@property (readonly) SCD_Struct_JD2 timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(SCD_Struct_JD2)timestamp;
-(JDPointCloud *)pointCloud;
-(id)initWithPointCloud:(id)arg1 andTimestamp:(SCD_Struct_JD2)arg2 ;
@end

