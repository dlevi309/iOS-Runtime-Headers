/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>
#import <libobjc.A.dylib/MLUpdatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, MLNearestNeighborsIndex;
@class MLUpdateProgressHandlers, NSObject, NSDictionary, MLParameterContainer, NSArray, NSOrderedSet, NSString;

@interface MLKNearestNeighborsClassifier : MLModel <MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding> {

	BOOL _continueWithUpdate;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _progressHandlersDispatchQueue;
	NSDictionary* _updateParameters;
	MLParameterContainer* _parameterContainer;
	unsigned long long _numberOfDimensions;
	long long _indexType;
	id<MLNearestNeighborsIndex> _index;
	long long _labelType;
	NSArray* _labelsForDataPoints;
	NSOrderedSet* _labelsSet;
	NSObject* _defaultLabel;
	long long _weightingScheme;
	NSString* _nearestLabelsFeatureName;
	NSString* _nearestDistancesFeatureName;

}

@property (nonatomic,retain) MLUpdateProgressHandlers * progressHandlers;                             //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressHandlersDispatchQueue;              //@synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * updateParameters;                                         //@synthesize updateParameters=_updateParameters - In the implementation block
@property (assign,nonatomic) BOOL continueWithUpdate;                                                 //@synthesize continueWithUpdate=_continueWithUpdate - In the implementation block
@property (nonatomic,retain) MLParameterContainer * parameterContainer;                               //@synthesize parameterContainer=_parameterContainer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDimensions;                                   //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
@property (assign,nonatomic) long long indexType;                                                     //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,retain) id<MLNearestNeighborsIndex> index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) long long labelType;                                                     //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,retain) NSArray * labelsForDataPoints;                                           //@synthesize labelsForDataPoints=_labelsForDataPoints - In the implementation block
@property (nonatomic,retain) NSOrderedSet * labelsSet;                                                //@synthesize labelsSet=_labelsSet - In the implementation block
@property (nonatomic,retain) NSObject * defaultLabel;                                                 //@synthesize defaultLabel=_defaultLabel - In the implementation block
@property (assign,nonatomic) long long weightingScheme;                                               //@synthesize weightingScheme=_weightingScheme - In the implementation block
@property (nonatomic,retain) NSString * nearestLabelsFeatureName;                                     //@synthesize nearestLabelsFeatureName=_nearestLabelsFeatureName - In the implementation block
@property (nonatomic,retain) NSString * nearestDistancesFeatureName;                                  //@synthesize nearestDistancesFeatureName=_nearestDistancesFeatureName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)resumeUpdate;
-(id<MLNearestNeighborsIndex>)index;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setIndex:(id<MLNearestNeighborsIndex>)arg1 ;
-(MLParameterContainer *)parameterContainer;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(NSDictionary *)updateParameters;
-(void)setLabelType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)progressHandlersDispatchQueue;
-(void)setIndexType:(long long)arg1 ;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(long long)indexType;
-(long long)weightingScheme;
-(id)initWithCoder:(id)arg1 ;
-(NSObject *)defaultLabel;
-(void)updateModelWithData:(id)arg1 ;
-(long long)labelType;
-(void)setDefaultLabel:(NSObject *)arg1 ;
-(void)setProgressHandlersDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setParameterContainer:(MLParameterContainer *)arg1 ;
-(void)setContinueWithUpdate:(BOOL)arg1 ;
-(NSOrderedSet *)labelsSet;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 parameters:(id)arg3 dataPoints:(vector<float, std::__1::allocator<float> >*)arg4 labels:(id)arg5 error:(id*)arg6 ;
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)computeKClosestLabels:(id)arg1 ;
-(void)computeClassProbabilities:(id*)arg1 from:(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)arg2 ;
-(id)inputMultiArray:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateParameters:(NSDictionary *)arg1 ;
-(id)packageOutputWithPredictedLabel:(id)arg1 classProbabilities:(id)arg2 nearestLabels:(id)arg3 nearestDistances:(id)arg4 ;
-(void)extractNearestNeighborLabels:(id*)arg1 distances:(id*)arg2 from:(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)arg3 ;
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(NSArray *)labelsForDataPoints;
-(void)setWeightingScheme:(long long)arg1 ;
-(void)setLabelsForDataPoints:(NSArray *)arg1 ;
-(void)setLabelsSet:(NSOrderedSet *)arg1 ;
-(NSString *)nearestLabelsFeatureName;
-(void)setNearestLabelsFeatureName:(NSString *)arg1 ;
-(NSString *)nearestDistancesFeatureName;
-(void)setNearestDistancesFeatureName:(NSString *)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(BOOL)continueWithUpdate;
@end

