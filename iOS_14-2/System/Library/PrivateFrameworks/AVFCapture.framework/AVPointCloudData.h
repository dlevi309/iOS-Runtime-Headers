/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class ADJasperPointCloud;

@interface AVPointCloudData : NSObject {

	CVBufferRef _dataBuffer;
	long long _projectorMode;
	ADJasperPointCloud* _jasperPointCloud;

}

@property (nonatomic,retain,readonly) ADJasperPointCloud * jasperPointCloud; 
@property (readonly) unsigned pointCloudFormatType; 
@property (readonly) long long pointCount; 
@property (readonly) const * points; 
@property (readonly) const float* confidenceScores; 
@property (readonly) const * pointsAndConfidenceScores; 
@property (readonly) const char* spotIdentifiers; 
@property (readonly) const char* bankIdentifiers; 
@property (readonly) CVBufferRef pointCloudDataBuffer; 
@property (readonly) long long projectorMode; 
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(long long)projectorMode;
-(const float*)confidenceScores;
-(const *)points;
-(long long)pointCount;
-(void)dealloc;
-(unsigned)pointCloudFormatType;
-(const char*)bankIdentifiers;
-(ADJasperPointCloud *)jasperPointCloud;
-(const *)pointsAndConfidenceScores;
-(const char*)spotIdentifiers;
-(CVBufferRef)pointCloudDataBuffer;
-(id)initWithDataBuffer:(CVBufferRef)arg1 ;
@end

