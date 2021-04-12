/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@interface BWStillImageConditionalRouterNode : BWFanOutNode {

	/*^block*/id _shouldEmitSampleBufferDecisionProvider;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithRoutingConfiguration:(id)arg1 ;
-(void)dealloc;
@end

