/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(int)inferenceType;
-(id)inferenceAttachmentKey;
-(id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setInferenceType:(int)arg1 ;
-(void)setInferenceAttachmentKey:(id)arg1 ;
@end

