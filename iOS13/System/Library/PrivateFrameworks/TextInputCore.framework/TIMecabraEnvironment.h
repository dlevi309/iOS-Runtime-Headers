/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString, TIMecabraEnvironmentContextWrapper, NSMutableArray, NSArray, NSDictionary;

@interface TIMecabraEnvironment : NSObject {

	BOOL _shouldAdjustOnAnalyze;
	NSString* _leftDocumentContext;
	NSString* _rightDocumentContext;
	TIMecabraEnvironmentContextWrapper* _mecabraContextWrapper;
	NSMutableArray* _candidatesLeftOfCaret;
	NSMutableArray* _candidatesRightOfCaret;
	NSString* _leftDocumentContextCorrespondingToCandidates;
	NSString* _rightDocumentContextCorrespondingToCandidates;
	NSMutableArray* _candidatesToDelete;
	NSRange _leftDocumentContextCorrespondingToCandidatesRange;
	NSRange _rightDocumentContextCorrespondingToCandidatesRange;

}

@property (nonatomic,retain) TIMecabraEnvironmentContextWrapper * mecabraContextWrapper;              //@synthesize mecabraContextWrapper=_mecabraContextWrapper - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustOnAnalyze;                                              //@synthesize shouldAdjustOnAnalyze=_shouldAdjustOnAnalyze - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidatesLeftOfCaret;                                  //@synthesize candidatesLeftOfCaret=_candidatesLeftOfCaret - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidatesRightOfCaret;                                 //@synthesize candidatesRightOfCaret=_candidatesRightOfCaret - In the implementation block
@property (nonatomic,copy) NSString * leftDocumentContextCorrespondingToCandidates;                   //@synthesize leftDocumentContextCorrespondingToCandidates=_leftDocumentContextCorrespondingToCandidates - In the implementation block
@property (nonatomic,copy) NSString * rightDocumentContextCorrespondingToCandidates;                  //@synthesize rightDocumentContextCorrespondingToCandidates=_rightDocumentContextCorrespondingToCandidates - In the implementation block
@property (assign,nonatomic) NSRange leftDocumentContextCorrespondingToCandidatesRange;               //@synthesize leftDocumentContextCorrespondingToCandidatesRange=_leftDocumentContextCorrespondingToCandidatesRange - In the implementation block
@property (assign,nonatomic) NSRange rightDocumentContextCorrespondingToCandidatesRange;              //@synthesize rightDocumentContextCorrespondingToCandidatesRange=_rightDocumentContextCorrespondingToCandidatesRange - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidatesToDelete;                                     //@synthesize candidatesToDelete=_candidatesToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * contextCandidateSurfaces; 
@property (nonatomic,readonly) NSArray * inlineCandidateSurfaces; 
@property (nonatomic,readonly) NSArray * rightCandidateSurfaces; 
@property (nonatomic,copy) NSString * leftDocumentContext;                                            //@synthesize leftDocumentContext=_leftDocumentContext - In the implementation block
@property (nonatomic,copy) NSString * rightDocumentContext;                                           //@synthesize rightDocumentContext=_rightDocumentContext - In the implementation block
@property (assign,nonatomic) int textContentType; 
@property (nonatomic,readonly) MecabraRef mecabra; 
@property (nonatomic,readonly) NSDictionary * environmentDebuggingInformation; 
+(id)baseLayout;
+(int)maxNumberOfDrawSamples;
+(id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(MecabraRef)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4 ;
+(id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4 ;
+(void)removeMobileAssetListener:(id)arg1 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg1 inMecabra:(MecabraRef)arg2 onQueue:(id)arg3 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg1 onQueue:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 inMecabra:(MecabraRef)arg3 onQueue:(id)arg4 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 onQueue:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)reset;
-(void)setTextContentType:(int)arg1 ;
-(int)textContentType;
-(void)setKeyboardLayout:(id)arg1 ;
-(void)setAppContext:(id)arg1 ;
-(NSString *)leftDocumentContext;
-(NSString *)rightDocumentContext;
-(void)setLeftDocumentContext:(NSString *)arg1 ;
-(void)setLeftDocumentContextInternal:(id)arg1 ;
-(void)setRightDocumentContext:(NSString *)arg1 ;
-(NSMutableArray *)candidatesLeftOfCaret;
-(NSMutableArray *)candidatesRightOfCaret;
-(NSMutableArray *)candidatesToDelete;
-(unsigned long long)candidateIndex;
-(void)setCandidateIndex:(long long)arg1 ;
-(BOOL)documentContextIsEmpty;
-(void)updateCursorPosition;
-(void)analyzeCandidateContextWithSplit:(BOOL)arg1 ;
-(void)revertLearningOfCandidateIfNecessary;
-(void)addCandidateWithString:(id)arg1 toArray:(id)arg2 ;
-(void)insertCandidateWithString:(id)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)createNewCandidatesFromDocumentContext;
-(BOOL)addNewCandidatesIfNecessary:(long long)arg1 ;
-(void)compareDocumentAndEnvironmentCandidates;
-(void)adjustEnvironment:(long long)arg1 ;
-(id)initWithMecabraEngine:(MecabraRef)arg1 language:(int)arg2 ;
-(MecabraRef)mecabra;
-(BOOL)analyzeString:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)analyzeInput:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)predictionAnalyzeWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2 ;
-(void)commitPredictionCandidate:(void*)arg1 ;
-(void)setGeometryModel:(void*)arg1 modelData:(CFArrayRef)arg2 ;
-(void)addStringCandidateToContextInternal:(id)arg1 ;
-(void)setShuangpinType:(int)arg1 ;
-(void)acceptInlineCandidates;
-(void)partiallyCommitInlineCandidate:(void*)arg1 ;
-(void)completelyCommitInlineCandidate:(void*)arg1 ;
-(void)revertInlineCandidate;
-(void)adjustEnvironmentDirectly:(long long)arg1 ;
-(void)adjustEnvironmentOnAction:(long long)arg1 ;
-(void)addStringCandidateToContext:(id)arg1 ;
-(void)addPunctuationCandidateToContext:(id)arg1 ;
-(void)declareEndOfSentence;
-(NSDictionary *)environmentDebuggingInformation;
-(NSArray *)contextCandidateSurfaces;
-(NSArray *)inlineCandidateSurfaces;
-(NSArray *)rightCandidateSurfaces;
-(TIMecabraEnvironmentContextWrapper *)mecabraContextWrapper;
-(void)setMecabraContextWrapper:(TIMecabraEnvironmentContextWrapper *)arg1 ;
-(BOOL)shouldAdjustOnAnalyze;
-(void)setShouldAdjustOnAnalyze:(BOOL)arg1 ;
-(void)setCandidatesLeftOfCaret:(NSMutableArray *)arg1 ;
-(void)setCandidatesRightOfCaret:(NSMutableArray *)arg1 ;
-(NSString *)leftDocumentContextCorrespondingToCandidates;
-(void)setLeftDocumentContextCorrespondingToCandidates:(NSString *)arg1 ;
-(NSString *)rightDocumentContextCorrespondingToCandidates;
-(void)setRightDocumentContextCorrespondingToCandidates:(NSString *)arg1 ;
-(NSRange)leftDocumentContextCorrespondingToCandidatesRange;
-(void)setLeftDocumentContextCorrespondingToCandidatesRange:(NSRange)arg1 ;
-(NSRange)rightDocumentContextCorrespondingToCandidatesRange;
-(void)setRightDocumentContextCorrespondingToCandidatesRange:(NSRange)arg1 ;
-(void)setCandidatesToDelete:(NSMutableArray *)arg1 ;
@end

