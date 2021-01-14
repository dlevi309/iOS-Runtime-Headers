/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {

	BWStillImageCoordinatorNode* _stillImageCoordinator;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithStillImageCoordinator:(id)arg1 ;
-(void)dealloc;
@end

