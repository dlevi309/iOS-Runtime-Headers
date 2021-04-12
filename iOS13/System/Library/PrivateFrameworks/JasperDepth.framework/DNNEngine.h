/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class FrontendDNNEspressoModel, BackendDNNEspressoModel;

@interface DNNEngine : NSObject {

	FrontendDNNEspressoModel* mFrontendDNN;
	BackendDNNEspressoModel* mBackendDNN;

}
-(id)init;
-(id)initWithFrontendMode:(long long)arg1 andBackendMode:(long long)arg2 ;
-(int)runBackend:(CVBufferRef)arg1 sparseBuffer:(float*)arg2 numDepthPoints:(unsigned)arg3 result:(float*)arg4 ;
-(int)runFrontend:(float*)arg1 withSize:(int)arg2 result:(JDCloudColorCalibrationResult*)arg3 ;
-(id)getBackendDNNFeatureVectorDim;
@end

