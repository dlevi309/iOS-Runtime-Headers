/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, VEKProgress;

@interface VEKPipelineStage : NSObject {

	BOOL _isCancelled;
	NSArray* _outputType;
	VEKProgress* _progress;

}

@property (readonly) NSArray * inputTypes; 
@property (readonly) NSArray * outputType;                //@synthesize outputType=_outputType - In the implementation block
@property (readonly) VEKProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
-(BOOL)isCancelled;
-(VEKProgress *)progress;
-(NSArray *)outputType;
-(void)setIsCancelled:(BOOL)arg1 ;
-(id)outputTypes;
-(NSArray *)inputTypes;
-(id)runStageWithInput:(id)arg1 ;
@end

