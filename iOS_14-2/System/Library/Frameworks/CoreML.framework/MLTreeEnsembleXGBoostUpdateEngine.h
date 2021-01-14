/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLTreeEnsembleXGBoostClassifier.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class MLUpdateProgressHandlers, NSObject, MLParameterContainer, NSString;

@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable> {

	BOOL _continueWithUpdate;
	BOOL _personalization;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _progressHandlersDispatchQueue;
	MLParameterContainer* _parameterContainer;
	unsigned long long _numDimensions;
	shared_ptr<Archiver::MMappedFile>* _mmappedModel;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _classesByString;
	vector<long long, std::__1::allocator<long long> >* _classesByInt;
	vector<unsigned char, std::__1::allocator<unsigned char> > _cachedModel;

}

@property (nonatomic,retain) MLUpdateProgressHandlers * progressHandlers;                             //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressHandlersDispatchQueue;              //@synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL continueWithUpdate;                                                 //@synthesize continueWithUpdate=_continueWithUpdate - In the implementation block
@property (assign,nonatomic) BOOL personalization;                                                    //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,retain) MLParameterContainer * parameterContainer;                               //@synthesize parameterContainer=_parameterContainer - In the implementation block
@property (assign,nonatomic) vector<std::__1::basic_string<char> classesByString;                     //@synthesize classesByString=_classesByString - In the implementation block
@property (assign,nonatomic) vector<long long classesByInt;                                           //@synthesize classesByInt=_classesByInt - In the implementation block
@property (assign,nonatomic) unsigned long long numDimensions;                                        //@synthesize numDimensions=_numDimensions - In the implementation block
@property (assign,nonatomic) shared_ptr<Archiver::MMappedFile>* mmappedModel;                         //@synthesize mmappedModel=_mmappedModel - In the implementation block
@property (assign,nonatomic) vector<unsigned char cachedModel;                                        //@synthesize cachedModel=_cachedModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)resumeUpdate;
-(unsigned long long)numDimensions;
-(void)setNumDimensions:(unsigned long long)arg1 ;
-(MLParameterContainer *)parameterContainer;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(id)parameterValueForKey:(id)arg1 ;
-(id)updateParameters;
-(id)initWithCompiledArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBoosterParameters:(void*)arg1 error:(id*)arg2 ;
-(vector<std::__1::basic_string<char>)classesByString;
-(vector<long long)classesByInt;
-(id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg1 modelDescription:(id)arg2 error:(id*)arg3 ;
-(void)setClassesByString:(vector<std::__1::basic_string<char>)arg1 ;
-(void)setClassesByInt:(vector<long long)arg1 ;
-(shared_ptr<Archiver::MMappedFile>*)mmappedModel;
-(void)setMmappedModel:(shared_ptr<Archiver::MMappedFile>*)arg1 ;
-(vector<unsigned char)cachedModel;
-(void)setCachedModel:(vector<unsigned char)arg1 ;
-(NSObject*<OS_dispatch_queue>)progressHandlersDispatchQueue;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(void)setPersonalization:(BOOL)arg1 ;
-(void)updateModelWithData:(id)arg1 ;
-(void)setProgressHandlersDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setParameterContainer:(MLParameterContainer *)arg1 ;
-(BOOL)personalization;
-(void)setContinueWithUpdate:(BOOL)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(BOOL)continueWithUpdate;
@end

