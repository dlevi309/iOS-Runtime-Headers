/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSData, NSNumber;

@interface SignpostMetrics : NSObject {

	NSData* _binarySnapshot;
	NSNumber* _cpuTimeNsec;
	NSNumber* _dirtyMemoryKB;
	NSNumber* _dirtyMemoryLifetimePeakKB;
	NSNumber* _storageDirtiedKB;
	NSNumber* _cpuInstructionsKI;

}

@property (nonatomic,readonly) NSData * binarySnapshot;                           //@synthesize binarySnapshot=_binarySnapshot - In the implementation block
@property (nonatomic,readonly) NSNumber * cpuTimeNsec;                            //@synthesize cpuTimeNsec=_cpuTimeNsec - In the implementation block
@property (nonatomic,readonly) NSNumber * dirtyMemoryKB;                          //@synthesize dirtyMemoryKB=_dirtyMemoryKB - In the implementation block
@property (nonatomic,readonly) NSNumber * dirtyMemoryLifetimePeakKB;              //@synthesize dirtyMemoryLifetimePeakKB=_dirtyMemoryLifetimePeakKB - In the implementation block
@property (nonatomic,readonly) NSNumber * storageDirtiedKB;                       //@synthesize storageDirtiedKB=_storageDirtiedKB - In the implementation block
@property (nonatomic,readonly) NSNumber * cpuInstructionsKI;                      //@synthesize cpuInstructionsKI=_cpuInstructionsKI - In the implementation block
+(id)_newMetricsFromData:(id)arg1 ;
+(id)_deltaDescription:(id)arg1 ;
+(id)newMetricsForSignpostEvent:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSNumber *)cpuTimeNsec;
-(NSNumber *)dirtyMemoryKB;
-(NSNumber *)dirtyMemoryLifetimePeakKB;
-(NSNumber *)storageDirtiedKB;
-(id)initWithSnapshotDict:(id)arg1 data:(id)arg2 ;
-(NSNumber *)cpuInstructionsKI;
-(NSData *)binarySnapshot;
@end

