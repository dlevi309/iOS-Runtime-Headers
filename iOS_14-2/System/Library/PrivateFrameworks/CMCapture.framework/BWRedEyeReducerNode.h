/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, CIContext, CIDualRedEyeRepairSession, NSString;

@interface BWRedEyeReducerNode : BWNode {

	NSDictionary* _redEyeReductionParametersByPortType;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	CIContext* _ciContext;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMSampleBufferRef _primaryImageSampleBuffer;
	BOOL _skipRepair;
	int _redEyeReductionVersion;
	int _inferenceType;
	NSString* _inferenceAttachmentKey;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)inferenceAttachmentKey;
-(int)inferenceType;
-(void)setInferenceType:(int)arg1 ;
-(id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setInferenceAttachmentKey:(id)arg1 ;
-(void)dealloc;
@end

