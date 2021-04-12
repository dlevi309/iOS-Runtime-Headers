/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(id)description;
-(void*)espressoContext;
-(BOOL)isPrepared;
-(int)executionTarget;
-(id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(BOOL)arg2 ;
-(id)initWithExecutionTarget:(int)arg1 ;
-(int)prepareForInferenceUsingProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPrebuild:(void*)arg1 ;
-(int)configureIntermediateBufferSharingForPlanPostbuild:(void*)arg1 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
@end

