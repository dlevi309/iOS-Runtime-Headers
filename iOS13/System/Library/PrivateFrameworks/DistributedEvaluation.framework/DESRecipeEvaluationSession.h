/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@protocol OS_xpc_object;
@class NSDate, NSURL, NSString, NSArray, DESRecipe, DESRecordSet, NSDictionary, NSData, NSError, NSObject;

@interface DESRecipeEvaluationSession : NSObject {

	NSDate* _startDate;
	NSURL* _baseURL;
	NSString* _localeIdentifier;
	NSDate* _deadline;
	NSDate* _deferralDate;
	NSArray* _attachmentsToDelete;
	double _resumeTimestamp;
	Class _protocolClass;
	BOOL _wasResumedFromURL;
	DESRecipe* _recipe;
	DESRecordSet* _matchingRecordSet;
	long long _evaluationResult;
	NSDictionary* _JSONResult;
	NSData* _binaryResult;
	NSError* _error;
	NSString* _testingRecipePath;
	NSArray* _testingRecipeAttachments;
	/*^block*/id _testingCompletionHandler;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) long long evaluationResult;                    //@synthesize evaluationResult=_evaluationResult - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * JSONResult;                //@synthesize JSONResult=_JSONResult - In the implementation block
@property (nonatomic,copy,readonly) NSData * binaryResult;                    //@synthesize binaryResult=_binaryResult - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * testingRecipePath;                      //@synthesize testingRecipePath=_testingRecipePath - In the implementation block
@property (nonatomic,copy) NSArray * testingRecipeAttachments;                //@synthesize testingRecipeAttachments=_testingRecipeAttachments - In the implementation block
@property (nonatomic,copy) id testingCompletionHandler;                       //@synthesize testingCompletionHandler=_testingCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) DESRecipe * recipe;                            //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,readonly) DESRecordSet * matchingRecordSet;              //@synthesize matchingRecordSet=_matchingRecordSet - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSError *)error;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(DESRecipe *)recipe;
-(long long)evaluationResult;
-(void)_deleteDownloadedAttachments;
-(id)_initWithResumptionURL:(id)arg1 recordSet:(id)arg2 protocolClass:(Class)arg3 error:(id*)arg4 ;
-(void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 secureAggregationFloats:(const float*)arg3 count:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_postResultsToServerIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)deferralURL;
-(id)_initWithRecipe:(id)arg1 matchingRecordSet:(id)arg2 baseURL:(id)arg3 localeIdentifier:(id)arg4 ;
-(id)initWithResumptionURL:(id)arg1 error:(id*)arg2 ;
-(void)downloadAttachmentsWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)completeWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deferWithDeadline:(id)arg1 error:(id*)arg2 ;
-(DESRecordSet *)matchingRecordSet;
-(NSDictionary *)JSONResult;
-(NSData *)binaryResult;
-(NSString *)testingRecipePath;
-(void)setTestingRecipePath:(NSString *)arg1 ;
-(NSArray *)testingRecipeAttachments;
-(void)setTestingRecipeAttachments:(NSArray *)arg1 ;
-(id)testingCompletionHandler;
-(void)setTestingCompletionHandler:(id)arg1 ;
@end

