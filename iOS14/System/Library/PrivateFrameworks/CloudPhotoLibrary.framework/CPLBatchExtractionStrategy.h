/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLBatchExtractionStrategyStorage;
@class NSArray, NSEnumerator, CPLBatchExtractionStep, NSString;

@interface CPLBatchExtractionStrategy : NSObject {

	NSArray* _steps;
	NSEnumerator* _stepEnumerator;
	CPLBatchExtractionStep* _currentStep;
	BOOL _loggedForThisStep;
	BOOL _finished;
	NSString* _strategyName;
	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;
	unsigned long long _maximumRecordCountPerBatch;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * strategyName;                                      //@synthesize strategyName=_strategyName - In the implementation block
@property (nonatomic,__weak,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;                                        //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maximumRecordCountPerBatch;                       //@synthesize maximumRecordCountPerBatch=_maximumRecordCountPerBatch - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentStepDescription; 
+(void)setMaximumRecordCountPerBatch:(unsigned long long)arg1 ;
+(id)usualStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2 ;
+(id)overQuotaStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2 ;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(NSString *)name;
-(NSString *)strategyName;
-(void)reset;
-(NSString *)scopeIdentifier;
-(BOOL)_hasChanges;
-(id)initWithName:(id)arg1 storage:(id)arg2 scopeIdentifier:(id)arg3 steps:(id)arg4 ;
-(void)_computeNextStep;
-(BOOL)extractBatch:(out id*)arg1 maximumResourceSize:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(NSString *)currentStepDescription;
-(unsigned long long)maximumRecordCountPerBatch;
-(void)setMaximumRecordCountPerBatch:(unsigned long long)arg1 ;
@end

