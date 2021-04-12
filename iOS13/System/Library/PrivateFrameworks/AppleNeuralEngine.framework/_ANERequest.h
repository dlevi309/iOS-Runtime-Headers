/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@class NSArray, _ANEIOSurfaceObject, NSNumber;

@interface _ANERequest : NSObject {

	NSArray* _inputArray;
	NSArray* _inputIndexArray;
	NSArray* _outputArray;
	NSArray* _outputIndexArray;
	_ANEIOSurfaceObject* _weightsBuffer;
	NSNumber* _procedureIndex;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSArray * inputArray;                             //@synthesize inputArray=_inputArray - In the implementation block
@property (nonatomic,readonly) NSArray * inputIndexArray;                        //@synthesize inputIndexArray=_inputIndexArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputArray;                            //@synthesize outputArray=_outputArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputIndexArray;                       //@synthesize outputIndexArray=_outputIndexArray - In the implementation block
@property (nonatomic,readonly) _ANEIOSurfaceObject * weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * procedureIndex;                   //@synthesize procedureIndex=_procedureIndex - In the implementation block
@property (copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6 ;
+(id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 procedureIndex:(id)arg5 ;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)validate;
-(NSArray *)inputArray;
-(NSArray *)inputIndexArray;
-(NSArray *)outputArray;
-(NSArray *)outputIndexArray;
-(_ANEIOSurfaceObject *)weightsBuffer;
-(NSNumber *)procedureIndex;
-(id)initWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6 ;
@end

