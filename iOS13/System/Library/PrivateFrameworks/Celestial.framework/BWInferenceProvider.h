/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

@class NSSet, NSArray;


@protocol BWInferenceProvider <BWInferenceJobProvider>
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements; 
@property (nonatomic,readonly) NSArray * outputVideoRequirements; 
@property (nonatomic,readonly) NSArray * cloneVideoRequirements; 
@property (nonatomic,readonly) NSArray * inputMetadataRequirements; 
@property (nonatomic,readonly) NSArray * outputMetadataRequirements; 
@required
-(int)type;
-(id)newStorage;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1;
-(int)executionTarget;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;

@end

