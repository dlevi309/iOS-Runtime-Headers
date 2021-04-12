/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@class SRDefaults, SRFrameStore;

@interface SRSensorDatastore : NSObject {

	unsigned long long _permission;
	unsigned long long _maxAllowedPages;
	float _segmentResizeFactor;
	SRDefaults* _defaults;
	SRFrameStore* _framesStore;
	SRFrameStore* _metadata;

}

@property (retain) SRFrameStore * framesStore;                      //@synthesize framesStore=_framesStore - In the implementation block
@property (retain) SRFrameStore * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (readonly) double startTimeOfCurrentSegment; 
+(void)initialize;
-(void)dealloc;
-(void)setMetadata:(SRFrameStore *)arg1 ;
-(SRFrameStore *)metadata;
-(id)initForPruningWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3 ;
-(double)startTimeOfCurrentSegment;
-(void)removeSamplesFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(id)initForWritingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3 ;
-(BOOL)writeSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(SRFrameStore *)framesStore;
-(void)writeMetadataBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(void)syncMappedFiles;
-(id)initForReadingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3 ;
-(void)fetchSamplesFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithSampleFile:(id)arg1 metadataFile:(id)arg2 permission:(unsigned long long)arg3 defaults:(id)arg4 ;
-(void)setFramesStore:(SRFrameStore *)arg1 ;
-(id)findClosestMetadataFrameTo:(double)arg1 offset:(unsigned long long)arg2 ;
-(void)fetchMetadataWithTime:(double)arg1 offset:(unsigned long long)arg2 metadataFrame:(void*)arg3 next:(void*)arg4 ;
@end

