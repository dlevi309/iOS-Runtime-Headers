/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/

#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
#import <libobjc.A.dylib/SRMultiSampleExporting.h>

@class NSMutableArray, NSString;

@interface HAECGExporter : NSObject <SRMultiSampleExporting> {

	unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs> >* _cinAlgs;
	NSMutableArray* _currentLiveWaveform;
	BOOL _fromRightWrist;

}

@property (nonatomic,readonly) BOOL fromRightWrist;                 //@synthesize fromRightWrist=_fromRightWrist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetFilter;
-(void)sr_beginMultiSampleStream;
-(id)sr_endMultiSampleStream;
-(id)sr_dictionaryRepresentationWithSample:(id)arg1 ;
-(BOOL)fromRightWrist;
-(id)dumpCurrentWaveform;
-(void)handleRealtimeSamples:(const float*)arg1 count:(unsigned)arg2 startTimestamp:(unsigned long long)arg3 ;
@end

