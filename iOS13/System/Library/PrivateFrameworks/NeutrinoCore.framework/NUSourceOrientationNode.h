/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUOrientationNode.h>

@interface NUSourceOrientationNode : NUOrientationNode {

	BOOL _skipOrientation;

}

@property (nonatomic,readonly) BOOL skipOrientation;              //@synthesize skipOrientation=_skipOrientation - In the implementation block
+(long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(BOOL)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)skipOrientation;
@end

