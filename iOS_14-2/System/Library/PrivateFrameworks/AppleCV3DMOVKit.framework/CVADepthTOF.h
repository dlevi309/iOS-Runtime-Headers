/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ADJasperPointCloud, NSDictionary;

@interface CVADepthTOF : NSObject <NSSecureCoding> {

	double _timestamp;
	long long _projectorMode;
	ADJasperPointCloud* _pointCloud;
	NSDictionary* _data;

}

@property (nonatomic,retain) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long projectorMode;                      //@synthesize projectorMode=_projectorMode - In the implementation block
@property (nonatomic,retain) ADJasperPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDictionary *)data;
-(long long)projectorMode;
-(void)setProjectorMode:(long long)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(ADJasperPointCloud *)pointCloud;
-(void)setPointCloud:(ADJasperPointCloud *)arg1 ;
-(id)initWithAVPointCloudData:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithADJasperPointCloud:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithJasperDepth:(id)arg1 timestamp:(double)arg2 projectorMode:(long long)arg3 ;
@end

