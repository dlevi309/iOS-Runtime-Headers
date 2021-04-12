/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject {

	NTKFace* _face;
	long long _detailMode;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NTKFace * face;                                         //@synthesize face=_face - In the implementation block
@property (getter=isMemberOfBatch,nonatomic,readonly) BOOL memberOfBatch; 
@property (nonatomic,readonly) long long detailMode;                                   //@synthesize detailMode=_detailMode - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(NTKFace *)face;
-(id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMemberOfBatch;
-(long long)detailMode;
@end

