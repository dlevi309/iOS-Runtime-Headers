/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWMeaningfulSubjectTracker;

@interface BWMeaningfulSubjectTrackingNode : BWNode {

	BWMeaningfulSubjectTracker* _tracker;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(id)init;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)dealloc;
@end

