/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class JFXEffectsPreviewGenerationRequest, JFXEffectsPreviewGeneratorJob;

@interface JFXEffectsPreviewRequestHandler : NSObject {

	JFXEffectsPreviewGenerationRequest* _req;
	JFXEffectsPreviewGeneratorJob* _job;

}

@property (nonatomic,retain) JFXEffectsPreviewGenerationRequest * req;              //@synthesize req=_req - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGeneratorJob * job;                   //@synthesize job=_job - In the implementation block
-(JFXEffectsPreviewGenerationRequest *)req;
-(JFXEffectsPreviewGeneratorJob *)job;
-(id)initWithRequest:(id)arg1 ;
-(void)setReq:(JFXEffectsPreviewGenerationRequest *)arg1 ;
-(void)setJob:(JFXEffectsPreviewGeneratorJob *)arg1 ;
-(id)buildPVRenderRequest;
-(id)buildCallbackMap:(id)arg1 ;
@end

