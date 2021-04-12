/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ADJasperPointCloud, NSDictionary;

@interface CVADepthTOF : NSObject <NSSecureCoding> {

	double _timestamp;
	ADJasperPointCloud* _pointCloud;
	NSDictionary* _data;

}

@property (nonatomic,retain) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) ADJasperPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(ADJasperPointCloud *)pointCloud;
-(void)setPointCloud:(ADJasperPointCloud *)arg1 ;
-(id)initWithADJasperPointCloud:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithAVPointCloudData:(id)arg1 timestamp:(double)arg2 ;
@end

