/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPCNNEspressoContext : NSObject {

	void* _espressoContext;

}

@property (nonatomic,readonly) void* espressoContext;              //@synthesize espressoContext=_espressoContext - In the implementation block
+(BOOL)supportGPU;
+(void*)createContextWithForceCPU:(BOOL)arg1 ;
+(void*)sharedEspressoContext:(BOOL)arg1 ;
-(id)initWithForceCPU:(BOOL)arg1 shared:(BOOL)arg2 ;
-(void*)espressoContext;
@end

