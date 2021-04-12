/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPCNNEspressoContext : NSObject {

	void* _espressoContext;

}

@property (nonatomic,readonly) void* espressoContext;              //@synthesize espressoContext=_espressoContext - In the implementation block
+(BOOL)supportGPU;
+(void*)sharedEspressoContext;
-(void*)espressoContext;
-(id)initNewContext;
@end

