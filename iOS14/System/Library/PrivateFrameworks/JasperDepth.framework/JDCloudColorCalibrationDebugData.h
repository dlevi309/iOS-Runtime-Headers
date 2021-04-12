/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class NSData, NSDictionary;

@interface JDCloudColorCalibrationDebugData : NSObject {

	unsigned _debugPointCloudSize;
	CVBufferRef _debugImage;
	NSData* _debugPointCloud;
	NSDictionary* _debugDict;

}

@property (nonatomic,readonly) CVBufferRef debugImage;                    //@synthesize debugImage=_debugImage - In the implementation block
@property (nonatomic,readonly) NSData * debugPointCloud;                  //@synthesize debugPointCloud=_debugPointCloud - In the implementation block
@property (nonatomic,readonly) unsigned debugPointCloudSize;              //@synthesize debugPointCloudSize=_debugPointCloudSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDict;                  //@synthesize debugDict=_debugDict - In the implementation block
-(CVBufferRef)debugImage;
-(void)dealloc;
-(id)initWithDebugImage:(CVBufferRef)arg1 pointCloud:(id)arg2 pointCloudSize:(unsigned)arg3 ;
-(NSData *)debugPointCloud;
-(unsigned)debugPointCloudSize;
-(NSDictionary *)debugDict;
@end

