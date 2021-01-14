/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {

	NSArray* _attachedMediaKeys;
	NSMutableDictionary* _attachedMediaFormatDescriptions;
	NSArray* _attachedMediaToPropagateToPrimaryOutput;
	NSMutableSet* _disabledAttachedMediaKeys;
	int _numOutputs;
	BOOL _emitsNodeErrorsForMissingAttachedMedia;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)initWithAttachedMediaKeys:(id)arg1 attachedMediaToPropagateToPrimaryOutput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 ;
-(BOOL)emitsNodeErrorsForMissingAttachedMedia;
-(void)setOutputRenderingEnabled:(BOOL)arg1 forAttachedMediaKey:(id)arg2 ;
-(BOOL)isOutputRenderingEnabledForAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
@end

