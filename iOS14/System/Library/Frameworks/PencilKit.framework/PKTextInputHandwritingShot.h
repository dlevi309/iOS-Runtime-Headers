/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKTextInputRecognitionManagerDataSource.h>
#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol PKTextInputHandwritingShotDelegate;
@class PKTextInputCanvasController, PKTextInputElementsController, PKDrawing, PKStroke, NSNumber, PKTextInputStrokeProvider, NSArray, PKTextInputLanguageSpec, NSDictionary, NSMutableDictionary, NSString;

@interface PKTextInputHandwritingShot : NSObject <PKTextInputRecognitionManagerDataSource, PKTextInputDebugStateReporting> {

	BOOL _writingIsActiveAtStart;
	BOOL _cursorIsWeakAtStart;
	BOOL _cancelled;
	BOOL __didRequestTextInputElements;
	PKTextInputCanvasController* _canvasController;
	PKTextInputElementsController* _elementsController;
	id<PKTextInputHandwritingShotDelegate> _delegate;
	PKDrawing* _inputDrawing;
	PKStroke* _inputInProgressStroke;
	NSNumber* _writingSessionIdentifier;
	long long _shotState;
	PKTextInputStrokeProvider* _strokeProvider;
	NSArray* _resultQueryItems;
	double _recognitionDuration;
	PKTextInputLanguageSpec* _languageSpec;
	NSDictionary* __inputElementsByRecognitionID;
	NSMutableDictionary* __inputElementsContentByRecognitionID;
	NSArray* __submittedTextInputTargets;
	NSDictionary* __submittedTargetContentInfoByTargetID;
	double __lastDrawingUpdateTimestamp;

}

@property (assign,setter=_setShotState:,nonatomic) long long shotState;                                                        //@synthesize shotState=_shotState - In the implementation block
@property (setter=_setInputElementsByRecognitionID:,nonatomic,copy) NSDictionary * _inputElementsByRecognitionID;              //@synthesize _inputElementsByRecognitionID=__inputElementsByRecognitionID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _inputElementsContentByRecognitionID;                                     //@synthesize _inputElementsContentByRecognitionID=__inputElementsContentByRecognitionID - In the implementation block
@property (setter=_setResultQueryItems:,nonatomic,copy) NSArray * resultQueryItems;                                            //@synthesize resultQueryItems=_resultQueryItems - In the implementation block
@property (nonatomic,retain) PKTextInputStrokeProvider * strokeProvider;                                                       //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,copy) NSArray * _submittedTextInputTargets;                                                               //@synthesize _submittedTextInputTargets=__submittedTextInputTargets - In the implementation block
@property (nonatomic,copy) NSDictionary * _submittedTargetContentInfoByTargetID;                                               //@synthesize _submittedTargetContentInfoByTargetID=__submittedTargetContentInfoByTargetID - In the implementation block
@property (assign,nonatomic) double _lastDrawingUpdateTimestamp;                                                               //@synthesize _lastDrawingUpdateTimestamp=__lastDrawingUpdateTimestamp - In the implementation block
@property (assign,nonatomic) double recognitionDuration;                                                                       //@synthesize recognitionDuration=_recognitionDuration - In the implementation block
@property (assign,setter=_setDidRequestTextInputElements:,nonatomic) BOOL _didRequestTextInputElements;                        //@synthesize _didRequestTextInputElements=__didRequestTextInputElements - In the implementation block
@property (nonatomic,readonly) PKTextInputCanvasController * canvasController;                                                 //@synthesize canvasController=_canvasController - In the implementation block
@property (nonatomic,readonly) PKTextInputElementsController * elementsController;                                             //@synthesize elementsController=_elementsController - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputHandwritingShotDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) PKDrawing * inputDrawing;                                                                  //@synthesize inputDrawing=_inputDrawing - In the implementation block
@property (nonatomic,copy,readonly) PKStroke * inputInProgressStroke;                                                          //@synthesize inputInProgressStroke=_inputInProgressStroke - In the implementation block
@property (assign,nonatomic) BOOL writingIsActiveAtStart;                                                                      //@synthesize writingIsActiveAtStart=_writingIsActiveAtStart - In the implementation block
@property (assign,nonatomic) BOOL cursorIsWeakAtStart;                                                                         //@synthesize cursorIsWeakAtStart=_cursorIsWeakAtStart - In the implementation block
@property (nonatomic,copy) NSNumber * writingSessionIdentifier;                                                                //@synthesize writingSessionIdentifier=_writingSessionIdentifier - In the implementation block
@property (nonatomic,readonly) PKTextInputLanguageSpec * languageSpec;                                                         //@synthesize languageSpec=_languageSpec - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                                //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textInputTargets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_contentTypeFromTextContentType:(id)arg1 ;
+(int)_contentTypeFromKeyboardType:(long long)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id<PKTextInputHandwritingShotDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputHandwritingShotDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)isCancelled;
-(PKTextInputCanvasController *)canvasController;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(PKDrawing *)inputDrawing;
-(PKTextInputElementsController *)elementsController;
-(long long)shotState;
-(void)set_lastDrawingUpdateTimestamp:(double)arg1 ;
-(void)_fetchTextInputElementsIfNeededWithReferenceHitPoint:(CGPoint)arg1 referenceSearchArea:(CGRect)arg2 referenceCoordSpace:(id)arg3 ;
-(void)_evaluateSubmissionReadyness;
-(NSDictionary *)_inputElementsByRecognitionID;
-(BOOL)_didRequestTextInputElements;
-(void)_setDidRequestTextInputElements:(BOOL)arg1 ;
-(void)_setInputElementsByRecognitionID:(id)arg1 ;
-(void)_setShotState:(long long)arg1 ;
-(void)_setupStrokeProvider;
-(PKTextInputLanguageSpec *)languageSpec;
-(PKTextInputStrokeProvider *)strokeProvider;
-(void)_setResultQueryItems:(id)arg1 ;
-(void)setRecognitionDuration:(double)arg1 ;
-(double)recognitionDuration;
-(PKStroke *)inputInProgressStroke;
-(double)_lastDrawingUpdateTimestamp;
-(NSMutableDictionary *)_inputElementsContentByRecognitionID;
-(BOOL)cursorIsWeakAtStart;
-(BOOL)writingIsActiveAtStart;
-(void)setStrokeProvider:(PKTextInputStrokeProvider *)arg1 ;
-(NSArray *)_submittedTextInputTargets;
-(void)set_submittedTextInputTargets:(NSArray *)arg1 ;
-(NSArray *)textInputTargets;
-(BOOL)_shouldTargetFirstResponderElement:(id)arg1 strokeIdentifiers:(id)arg2 ;
-(id)_closestInputElementForStrokeIdentifiers:(id)arg1 ;
-(NSDictionary *)_submittedTargetContentInfoByTargetID;
-(id)textInputElementForRecognitionIdentifier:(id)arg1 ;
-(id)_contentInfoFromElementContent:(id)arg1 textInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 ;
-(void)_saveSubmittedTargetContentInfo:(id)arg1 ;
-(void)_loadAndSaveContentFocusingIfNeededForElement:(id)arg1 referenceCanvasPoint:(CGPoint)arg2 strokesBounds:(CGRect)arg3 completion:(/*^block*/id)arg4 ;
-(void)set_submittedTargetContentInfoByTargetID:(NSDictionary *)arg1 ;
-(int)_contentTypeForElementContent:(id)arg1 ;
-(int)_autoCapitalizationModeForTextInputTraits:(id)arg1 ;
-(NSRange)_selectedTextRangeForElementContent:(id)arg1 textInputTarget:(id)arg2 strokeSliceIdentifiers:(id)arg3 ;
-(NSRange)_correctableTextRangeIntersectingStrokesWithIdentifiers:(id)arg1 inInputTarget:(id)arg2 elementContent:(id)arg3 ;
-(NSRange)_substringReferenceRangeForStrokeCoveredRange:(NSRange)arg1 contentLength:(long long)arg2 selectedRange:(NSRange)arg3 ;
-(id)_textContentSubstringInRange:(NSRange)arg1 forElementContent:(id)arg2 ;
-(id)_protectedCharacterIndexesInRange:(NSRange)arg1 forElementContent:(id)arg2 ;
-(NSRange)_editingGestureCorrectableRangeForStrokeBounds:(CGRect)arg1 InInputTarget:(id)arg2 elementContent:(id)arg3 ;
-(id)recognitionManagerStrokeProvider:(id)arg1 ;
-(id)recognitionManagerTextInputTargets:(id)arg1 ;
-(id)recognitionManager:(id)arg1 textInputTargetForItemStableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 simultaneousItemStableIdentifiers:(id)arg4 ;
-(void)recognitionManager:(id)arg1 fetchContentInfoForTextInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)recognitionManager:(id)arg1 recognitionDidFinishWithQueryItems:(id)arg2 duration:(double)arg3 ;
-(id)initWithCanvasController:(id)arg1 elementsController:(id)arg2 languageSpec:(id)arg3 ;
-(void)setInputDrawing:(id)arg1 inputInProgressStroke:(id)arg2 ;
-(void)beginRecognitionWithRecognitionManager:(id)arg1 ;
-(id)textInputElementContentForRecognitionIdentifier:(id)arg1 ;
-(id)submittedTargetContentInfoForRecognitionIdentifier:(id)arg1 ;
-(void)setWritingIsActiveAtStart:(BOOL)arg1 ;
-(void)setCursorIsWeakAtStart:(BOOL)arg1 ;
-(NSNumber *)writingSessionIdentifier;
-(void)setWritingSessionIdentifier:(NSNumber *)arg1 ;
-(NSArray *)resultQueryItems;
@end

