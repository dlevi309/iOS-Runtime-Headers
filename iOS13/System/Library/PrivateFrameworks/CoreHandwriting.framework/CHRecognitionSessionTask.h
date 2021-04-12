/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;
@class CHRecognitionSessionResult, NSArray, NSSet, NSObject;

@interface CHRecognitionSessionTask : NSObject {

	BOOL _cancelled;
	BOOL _saveInputDrawings;
	BOOL _strokeGroupingOnly;
	CHRecognitionSessionResult* _inputResult;
	long long _status;
	id<CHRecognitionSessionTaskDelegate> _delegate;
	NSArray* _locales;
	NSArray* _preferredLocales;
	id<CHStrokeProvider> _strokeProvider;
	CHRecognitionSessionResult* _outputResult;
	long long _recognitionEnvironment;
	NSSet* _forceRecognitionStrokeGroupIdentifiers;
	NSObject*<OS_dispatch_queue> __recognizersQueue;

}

@property (setter=_setOutputResult:,nonatomic,retain) CHRecognitionSessionResult * outputResult;              //@synthesize outputResult=_outputResult - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _recognizersQueue;                         //@synthesize _recognizersQueue=__recognizersQueue - In the implementation block
@property (assign) BOOL cancelled;                                                                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSessionResult * inputResult;                               //@synthesize inputResult=_inputResult - In the implementation block
@property (assign,nonatomic) id<CHRecognitionSessionTaskDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locales;                                                        //@synthesize locales=_locales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredLocales;                                               //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;                                    //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,readonly) long long recognitionEnvironment;                                              //@synthesize recognitionEnvironment=_recognitionEnvironment - In the implementation block
@property (assign,nonatomic) BOOL saveInputDrawings;                                                          //@synthesize saveInputDrawings=_saveInputDrawings - In the implementation block
@property (nonatomic,copy) NSSet * forceRecognitionStrokeGroupIdentifiers;                                    //@synthesize forceRecognitionStrokeGroupIdentifiers=_forceRecognitionStrokeGroupIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL strokeGroupingOnly;                                                         //@synthesize strokeGroupingOnly=_strokeGroupingOnly - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CHRecognitionSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<CHRecognitionSessionTaskDelegate>)arg1 ;
-(void)cancel;
-(void)main;
-(long long)status;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(NSArray *)preferredLocales;
-(NSArray *)locales;
-(id<CHStrokeProvider>)strokeProvider;
-(id)clutterFilter;
-(long long)recognitionEnvironment;
-(CHRecognitionSessionResult *)outputResult;
-(CHRecognitionSessionResult *)inputResult;
-(id)newStrokeClassifier;
-(id)newGroupingManager;
-(id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 ;
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
-(id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned)arg5 recognitionEnvironment:(long long)arg6 ;
-(void)setSaveInputDrawings:(BOOL)arg1 ;
-(void)setForceRecognitionStrokeGroupIdentifiers:(NSSet *)arg1 ;
-(void)setStrokeGroupingOnly:(BOOL)arg1 ;
@end

