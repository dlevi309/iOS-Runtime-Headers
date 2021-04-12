/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTVisitModelController.h>

@class RTVisitHyperParameter, RTVisitTrajectorySequenceClassifierBatchMode, NSString;

@interface RTVisitModelControllerBatchMode : NSObject <RTVisitModelController> {

	void* _espressoContext;
	void* _espressoPlan;
	SCD_Struct_RT4* _inputBuffer;
	SCD_Struct_RT4* _outputBuffer;
	RTVisitHyperParameter* _hyperParameter;
	RTVisitTrajectorySequenceClassifierBatchMode* _model;

}

@property (nonatomic,readonly) RTVisitTrajectorySequenceClassifierBatchMode * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTVisitTrajectorySequenceClassifierBatchMode *)model;
-(id)init;
-(id)initWithHyperParameter:(id)arg1 ;
-(void)dealloc;
-(const float*)batchProcess:(const float*)arg1 featureVectorStride:(unsigned long long)arg2 firstSequenceIndex:(unsigned long long)arg3 firstSequenceLength:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(const float*)predictFromInput:(const float*)arg1 featureVectorStride:(unsigned long long)arg2 firstSequenceIndex:(unsigned long long)arg3 firstSequenceLength:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
@end

