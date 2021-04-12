/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSArray, RTVisitHyperParameter;

@interface RTVisitDecoder : NSObject {

	NSArray* _beam;
	RTVisitHyperParameter* _hyperParameter;

}

@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
-(id)init;
-(void)reset;
-(id)initWithHyperParameter:(id)arg1 ;
-(RTVisitHyperParameter *)hyperParameter;
-(void)updateSuccessor:(id)arg1 newNode:(id)arg2 ;
-(id)createSuccessor:(id)arg1 probabilities:(const float*)arg2 firstTimeStepDate:(id)arg3 currentDate:(id)arg4 ;
-(id)decodeWithProbabilities:(const float*)arg1 batchSize:(unsigned long long)arg2 firstTimeStepDate:(id)arg3 ;
@end

