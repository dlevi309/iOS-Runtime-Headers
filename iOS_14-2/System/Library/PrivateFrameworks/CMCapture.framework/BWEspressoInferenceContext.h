/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString;

@interface BWEspressoInferenceContext : NSObject {

	int _executionTarget;
	void* _espressoContext;
	unsigned long long _options;
	BOOL _shareIntermediateBuffer;
	void* _rootIntermediateBufferPlan;
	NSString* _sharedBufferNetworksPath;

}

@property (nonatomic,readonly) int executionTarget;                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,readonly) void* espressoContext; 
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(BOOL)arg2 ;
-(id)initWithExecutionTarget:(int)arg1 ;
-(int)prepareForInferenceUsingProcessingSession:(id)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPrebuild:(void*)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPostbuild:(void*)arg1 ;
-(BOOL)isPrepared;
-(id)description;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
-(int)executionTarget;
-(void*)espressoContext;
-(void)dealloc;
@end

