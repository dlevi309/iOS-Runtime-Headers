/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHFace, NSString;

@interface VCPCallerIdentificationResult : NSObject {

	float _confidence;
	PHFace* _face;
	NSString* _callerIdentifier;

}

@property (nonatomic,readonly) PHFace * face;                            //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) NSString * callerIdentifier;              //@synthesize callerIdentifier=_callerIdentifier - In the implementation block
@property (nonatomic,readonly) float confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(PHFace *)face;
-(id)initWithCallerIdentifier:(id)arg1 face:(id)arg2 andConfidence:(float)arg3 ;
-(NSString *)callerIdentifier;
@end

