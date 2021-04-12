/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NTKFace *)face;
-(id)completionHandler;
-(id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMemberOfBatch;
-(long long)detailMode;
@end

