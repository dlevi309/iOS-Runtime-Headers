/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAOutputStream, SASamplePrintOptions, SATimestamp, NSMutableDictionary, NSMutableArray, SASampleStore, NSString, NSUUID;

@interface SASamplePrinter : NSObject {

	SAOutputStream* _stream;
	SASamplePrintOptions* _options;
	BOOL _hasFilterApplied;
	SATimestamp* _reportStartTime;
	SATimestamp* _reportEndTime;
	unsigned long long _reportStartSampleIndex;
	unsigned long long _reportEndSampleIndex;
	unsigned long long _numSamples;
	NSMutableDictionary* _binaryImagesHit;
	NSMutableDictionary* _indexForImageUUID;
	double _minimumSamplingInterval;
	NSMutableArray* _timeJumps;
	BOOL _avoided65324447;
	BOOL _shareWithAppDevs;
	SASampleStore* _sampleStore;
	NSString* _headerNote;
	NSUUID* _incidentUUID;

}

@property (readonly) SASampleStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
@property (copy) SASamplePrintOptions * options; 
@property (copy) NSString * headerNote;                        //@synthesize headerNote=_headerNote - In the implementation block
@property (copy) NSUUID * incidentUUID;                        //@synthesize incidentUUID=_incidentUUID - In the implementation block
@property (assign) BOOL shareWithAppDevs;                      //@synthesize shareWithAppDevs=_shareWithAppDevs - In the implementation block
-(SASamplePrintOptions *)options;
-(void)setOptions:(SASamplePrintOptions *)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(id)callTreeForTask:(id)arg1 ;
-(id)callTreesForThreadsInTask:(id)arg1 ;
-(id)callTreeForDispatchQueue:(id)arg1 andThread:(id)arg2 inTask:(id)arg3 ;
-(id)callTreeForThread:(id)arg1 inTask:(id)arg2 ;
-(id)callTreeForExecutable:(id)arg1 ;
-(void)filterToTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)filterToMachAbsTimeRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)printToMutableData:(id)arg1 ;
-(SASampleStore *)sampleStore;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
-(NSUUID *)incidentUUID;
-(void)setIncidentUUID:(NSUUID *)arg1 ;
-(BOOL)shareWithAppDevs;
-(void)setShareWithAppDevs:(BOOL)arg1 ;
@end

