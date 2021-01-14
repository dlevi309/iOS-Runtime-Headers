/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)runFrontend:(float*)arg1 withSize:(int)arg2 result:(id*)arg3 ;
-(id)getBackendDNNFeatureVectorDim;
@end

