/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;
@class CHRecognitionSessionResult, NSArray, NSSet, NSObject, CHStrokeClassificationModel;

@interface CHRecognitionSessionTask : NSObject {

	BOOL _cancelled;
	BOOL _isHighResponsivenessTask;
	BOOL _saveInputDrawings;
	BOOL _strokeGroupingOnly;
	CHRecognitionSessionResult* _inputResult;
	long long _status;
	id<CHRecognitionSessionTaskDelegate> _delegate;
	NSArray* _recognitionLocales;
	NSArray* _preferredLocales;
	id<CHStrokeProvider> _strokeProvider;
	CHRecognitionSessionResult* _outputResult;
	long long _recognitionEnvironment;
	long long _strokeGroupingRequirement;
	NSSet* _forceRecognitionStrokeGroupIdentifiers;
	NSObject*<OS_dispatch_queue> __recognizersQueue;
	CHStrokeClassificationModel* _strokeClassificationModel;
	NSArray* _subjectStrokeIdentifiers;
	/*^block*/id _partialResultBlock;

}

@property (setter=_setOutputResult:,nonatomic,retain) CHRecognitionSessionResult * outputResult;              //@synthesize outputResult=_outputResult - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _recognizersQueue;                         //@synthesize _recognizersQueue=__recognizersQueue - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeClassificationModel * strokeClassificationModel;                //@synthesize strokeClassificationModel=_strokeClassificationModel - In the implementation block
@property (nonatomic,retain,readonly) NSArray * subjectStrokeIdentifiers;                                     //@synthesize subjectStrokeIdentifiers=_subjectStrokeIdentifiers - In the implementation block
@property (assign) BOOL cancelled;                                                                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id partialResultBlock;                                                             //@synthesize partialResultBlock=_partialResultBlock - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSessionResult * inputResult;                               //@synthesize inputResult=_inputResult - In the implementation block
@property (assign,nonatomic) id<CHRecognitionSessionTaskDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recognitionLocales;                                             //@synthesize recognitionLocales=_recognitionLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredLocales;                                               //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;                                    //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,readonly) long long recognitionEnvironment;                                              //@synthesize recognitionEnvironment=_recognitionEnvironment - In the implementation block
@property (nonatomic,readonly) long long strokeGroupingRequirement;                                           //@synthesize strokeGroupingRequirement=_strokeGroupingRequirement - In the implementation block
@property (nonatomic,readonly) BOOL isHighResponsivenessTask;                                                 //@synthesize isHighResponsivenessTask=_isHighResponsivenessTask - In the implementation block
@property (assign,nonatomic) BOOL saveInputDrawings;                                                          //@synthesize saveInputDrawings=_saveInputDrawings - In the implementation block
@property (nonatomic,copy) NSSet * forceRecognitionStrokeGroupIdentifiers;                                    //@synthesize forceRecognitionStrokeGroupIdentifiers=_forceRecognitionStrokeGroupIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL strokeGroupingOnly;                                                         //@synthesize strokeGroupingOnly=_strokeGroupingOnly - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id)init;
-(id<CHRecognitionSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<CHRecognitionSessionTaskDelegate>)arg1 ;
-(void)main;
-(void)_setStatus:(long long)arg1 ;
-(void)cancel;
-(long long)status;
-(void)dealloc;
-(NSArray *)preferredLocales;
-(id<CHStrokeProvider>)strokeProvider;
-(long long)recognitionEnvironment;
-(id)clutterFilter;
-(id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned)arg5 recognitionEnvironment:(long long)arg6 ;
-(NSArray *)recognitionLocales;
-(CHRecognitionSessionResult *)inputResult;
-(id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 ;
-(id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 ;
-(id)newStrokeClassifier;
-(id)newGroupingManager;
-(id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(BOOL)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 partialResultBlock:(/*^block*/id)arg10 ;
-(CHRecognitionSessionResult *)outputResult;
-(id)partialResultBlock;
-(long long)strokeGroupingRequirement;
-(CHStrokeClassificationModel *)strokeClassificationModel;
-(void)_setOutputResult:(id)arg1 ;
-(void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1 ;
-(BOOL)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2 ;
-(NSSet *)forceRecognitionStrokeGroupIdentifiers;
-(id)_textRecognitionResultsForTextStrokeGroup:(id)arg1 groupingManager:(id)arg2 ;
-(id)_recognitionResultsForNonTextStrokeGroup:(id)arg1 groupingManager:(id)arg2 ;
-(BOOL)strokeGroupingOnly;
-(BOOL)saveInputDrawings;
-(NSObject*<OS_dispatch_queue>)_recognizersQueue;
-(id)_tokenizedTextResultForDrawing:(id)arg1 usingRecognizer:(id)arg2 isRemoteRecognizer:(BOOL)arg3 locale:(id)arg4 strokeLimit:(long long)arg5 recognitionError:(id*)arg6 ;
-(id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(BOOL)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 subjectStrokeIdentifiers:(id)arg10 partialResultBlock:(/*^block*/id)arg11 ;
-(BOOL)isHighResponsivenessTask;
-(void)setSaveInputDrawings:(BOOL)arg1 ;
-(void)setForceRecognitionStrokeGroupIdentifiers:(NSSet *)arg1 ;
-(void)setStrokeGroupingOnly:(BOOL)arg1 ;
-(NSArray *)subjectStrokeIdentifiers;
-(void)setPartialResultBlock:(id)arg1 ;
@end
