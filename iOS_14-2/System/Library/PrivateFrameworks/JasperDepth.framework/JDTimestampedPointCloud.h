/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JDPointCloud;

@interface JDTimestampedPointCloud : NSObject {

	JDPointCloud* _pointCloud;
	SCD_Struct_JD3 _timestamp;

}

@property (readonly) JDPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
@property (readonly) SCD_Struct_JD3 timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(SCD_Struct_JD3)timestamp;
-(id)initWithPointCloud:(id)arg1 andTimestamp:(SCD_Struct_JD3)arg2 ;
-(JDPointCloud *)pointCloud;
@end

