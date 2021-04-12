/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class ADJasperPointCloud;

@interface AVPointCloudData : NSObject {

	CVBufferRef _dataBuffer;
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
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)pointCount;
-(const *)points;
-(unsigned)pointCloudFormatType;
-(const char*)bankIdentifiers;
-(ADJasperPointCloud *)jasperPointCloud;
-(const float*)confidenceScores;
-(const *)pointsAndConfidenceScores;
-(const char*)spotIdentifiers;
-(CVBufferRef)pointCloudDataBuffer;
-(id)initWithDataBuffer:(CVBufferRef)arg1 ;
@end

