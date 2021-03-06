/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTextInputResultCommandDelegate;
#import <PencilKit/PencilKit-Structs.h>
@class CHTextInputQueryItem, PKTextInputHandwritingShot, PKTextInputElementContent, PKTextInputTargetState, NSString;

@interface PKTextInputResultCommand : NSObject {

	BOOL _resultedInTargetChange;
	BOOL _hasPendingUncommittedChanges;
	BOOL _destinationFrameForAnimationMightMove;
	BOOL __applyIntermediateChange;
	id<PKTextInputResultCommandDelegate> _delegate;
	long long _commandState;
	CHTextInputQueryItem* _queryItem;
	PKTextInputHandwritingShot* _handwritingShot;
	PKTextInputElementContent* _targetElementContent;
	PKTextInputTargetState* _initialInputTargetState;
	long long _immediateCommitType;
	PKTextInputTargetState* _finalInputTargetState;
	NSString* _committedText;
	long long _committedTokenColumnCount;
	NSString* _commitReason;
	PKTextInputTargetState* __inProgressInputTargetState;
	NSRange _affectedRange;

}

@property (assign,setter=_setCommandState:,nonatomic) long long commandState;                   //@synthesize commandState=_commandState - In the implementation block
@property (nonatomic,copy) PKTextInputTargetState * initialInputTargetState;                    //@synthesize initialInputTargetState=_initialInputTargetState - In the implementation block
@property (nonatomic,retain) PKTextInputTargetState * _inProgressInputTargetState;              //@synthesize _inProgressInputTargetState=__inProgressInputTargetState - In the implementation block
@property (nonatomic,copy) PKTextInputTargetState * finalInputTargetState;                      //@synthesize finalInputTargetState=_finalInputTargetState - In the implementation block
@property (nonatomic,copy) NSString * committedText;                                            //@synthesize committedText=_committedText - In the implementation block
@property (assign,nonatomic) long long committedTokenColumnCount;                               //@synthesize committedTokenColumnCount=_committedTokenColumnCount - In the implementation block
@property (nonatomic,copy) NSString * commitReason;                                             //@synthesize commitReason=_commitReason - In the implementation block
@property (assign,nonatomic) BOOL resultedInTargetChange;                                       //@synthesize resultedInTargetChange=_resultedInTargetChange - In the implementation block
@property (assign,nonatomic) BOOL hasPendingUncommittedChanges;                                 //@synthesize hasPendingUncommittedChanges=_hasPendingUncommittedChanges - In the implementation block
@property (assign,nonatomic) BOOL destinationFrameForAnimationMightMove;                        //@synthesize destinationFrameForAnimationMightMove=_destinationFrameForAnimationMightMove - In the implementation block
@property (assign,nonatomic) BOOL _applyIntermediateChange;                                     //@synthesize _applyIntermediateChange=__applyIntermediateChange - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputResultCommandDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CHTextInputQueryItem * queryItem;                                //@synthesize queryItem=_queryItem - In the implementation block
@property (nonatomic,readonly) PKTextInputHandwritingShot * handwritingShot;                    //@synthesize handwritingShot=_handwritingShot - In the implementation block
@property (nonatomic,readonly) PKTextInputElementContent * targetElementContent;                //@synthesize targetElementContent=_targetElementContent - In the implementation block
@property (nonatomic,readonly) long long immediateCommitType;                                   //@synthesize immediateCommitType=_immediateCommitType - In the implementation block
@property (assign,nonatomic) NSRange affectedRange;                                             //@synthesize affectedRange=_affectedRange - In the implementation block
+(long long)_commitableTokenColumnCountForQueryItem:(id)arg1 previousQueryItem:(id)arg2 immediateCommitType:(long long)arg3 applyIntermediateChange:(BOOL)arg4 preferredUncommittedTokenColumnCount:(long long)arg5 commitReason:(id*)arg6 ;
+(void)_getTextsToCommit:(id*)arg1 alternativesTable:(id*)arg2 uncommittedPendingText:(id*)arg3 fromCorrectionResult:(id)arg4 commitTokenColumnCount:(long long)arg5 forTargetElementContent:(id)arg6 replacementRange:(NSRange)arg7 ;
+(BOOL)_isAccidentalReplacementForQueryItem:(id)arg1 replacementRange:(NSRange)arg2 handwritingShot:(id)arg3 ;
+(id)_tokenColumnStringsForTopTranscriptionInTextResult:(id)arg1 ;
+(id)_transcriptionForTokensAtColumn:(long long)arg1 row:(long long)arg2 textResult:(id)arg3 ;
+(id)_alternativesForTranscriptionAtColumn:(long long)arg1 textResult:(id)arg2 columnTopTranscription:(id)arg3 ;
-(id<PKTextInputResultCommandDelegate>)delegate;
-(void)setCommittedText:(NSString *)arg1 ;
-(NSString *)committedText;
-(void)setDelegate:(id<PKTextInputResultCommandDelegate>)arg1 ;
-(id)description;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
-(PKTextInputHandwritingShot *)handwritingShot;
-(void)_scheduleBecomeReadyAfterDelay:(double)arg1 ;
-(long long)commandState;
-(long long)immediateCommitType;
-(CHTextInputQueryItem *)queryItem;
-(PKTextInputElementContent *)targetElementContent;
-(void)setInitialInputTargetState:(PKTextInputTargetState *)arg1 ;
-(void)_clearPreviousActivePreviewIfNeededForCancellation:(BOOL)arg1 ;
-(void)set_inProgressInputTargetState:(PKTextInputTargetState *)arg1 ;
-(void)setDestinationFrameForAnimationMightMove:(BOOL)arg1 ;
-(BOOL)isImmediateCommit;
-(void)_setCommandState:(long long)arg1 ;
-(void)_applyResultCommandPhase2;
-(void)_finishApplyingResultWithSuccess:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(void)set_applyIntermediateChange:(BOOL)arg1 ;
-(void)_applyResultCommandPhase3WithCompletion:(/*^block*/id)arg1 ;
-(PKTextInputTargetState *)initialInputTargetState;
-(void)_updateInputTargetStateWithUncommittedPendingText:(id)arg1 activePreviewText:(id)arg2 committedTextLength:(long long)arg3 accumulatedCommitLength:(long long)arg4 ;
-(id)_strokeSliceIDsToRemoveForCommittedTokenColumnCount:(long long)arg1 forceRemoveAll:(BOOL)arg2 ;
-(void)_removeCommittedTextInsertionStrokes:(id)arg1 committedTextLength:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_applyTextReplacementWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeStrokesForSliceIDs:(id)arg1 destinationRect:(CGRect)arg2 ;
-(void)_applySelectOrDeleteGestureOfType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_characterLevelOperationLocationForCorrection:(id)arg1 committedTextLength:(long long)arg2 uncommittedPendingText:(id)arg3 ;
-(PKTextInputTargetState *)_inProgressInputTargetState;
-(BOOL)_applyIntermediateChange;
-(void)setCommitReason:(NSString *)arg1 ;
-(id)_activePreviewTextForUncommittedText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)setHasPendingUncommittedChanges:(BOOL)arg1 ;
-(void)setCommittedTokenColumnCount:(long long)arg1 ;
-(void)setResultedInTargetChange:(BOOL)arg1 ;
-(void)_showSystemCalloutIfNeededWithReferenceRange:(NSRange)arg1 ;
-(void)setFinalInputTargetState:(PKTextInputTargetState *)arg1 ;
-(BOOL)destinationFrameForAnimationMightMove;
-(id)initWithQueryItem:(id)arg1 handwritingShot:(id)arg2 immediateCommitType:(long long)arg3 applyAfterDelay:(double)arg4 ;
-(void)beginApplyingResultCommandWithInputTargetState:(id)arg1 ;
-(void)cancelDelayedCommand;
-(void)_logResultWithNewInputTargetState:(id)arg1 cancelCommit:(BOOL)arg2 ;
-(PKTextInputTargetState *)finalInputTargetState;
-(BOOL)resultedInTargetChange;
-(BOOL)hasPendingUncommittedChanges;
-(long long)committedTokenColumnCount;
-(NSString *)commitReason;
@end

