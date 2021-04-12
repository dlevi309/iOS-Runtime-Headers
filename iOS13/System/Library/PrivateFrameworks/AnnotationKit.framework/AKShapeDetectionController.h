/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol AKShapeDetectionControllerDelegate;
#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController, AKAnnotation, CHRecognizer, AKPageModelController, CHDrawing, NSMutableArray, NSMutableDictionary, AKCandidatePickerView_iOS;

@interface AKShapeDetectionController : NSObject {

	BOOL _preferDoodle;
	BOOL _coalescesDoodles;
	BOOL _shapeDetectionEnabled;
	BOOL _isPreviousCandidateAnnotationUndecided;
	id<AKShapeDetectionControllerDelegate> _delegate;
	AKController* _controller;
	AKAnnotation* _candidateAnnotation;
	CHRecognizer* _shapeRecognizer;
	AKPageModelController* _modelControllerToObserveForAnnotationsAndSelections;
	CHDrawing* _lastDrawing;
	double _veryHighConfidenceLevel;
	CHDrawing* _candidateDrawing;
	NSMutableArray* _candidateAKTags;
	NSMutableDictionary* _candidateAKTagsToAnnotationInfoMap;
	AKCandidatePickerView_iOS* _candidatePickerView;

}

@property (nonatomic,retain) CHDrawing * lastDrawing;                                                                  //@synthesize lastDrawing=_lastDrawing - In the implementation block
@property (assign) double veryHighConfidenceLevel;                                                                     //@synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel - In the implementation block
@property (nonatomic,retain) CHDrawing * candidateDrawing;                                                             //@synthesize candidateDrawing=_candidateDrawing - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidateAKTags;                                                         //@synthesize candidateAKTags=_candidateAKTags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateAKTagsToAnnotationInfoMap;                                 //@synthesize candidateAKTagsToAnnotationInfoMap=_candidateAKTagsToAnnotationInfoMap - In the implementation block
@property (nonatomic,retain) AKCandidatePickerView_iOS * candidatePickerView;                                          //@synthesize candidatePickerView=_candidatePickerView - In the implementation block
@property (assign,nonatomic,__weak) id<AKShapeDetectionControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;                                                         //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) AKAnnotation * candidateAnnotation;                                                //@synthesize candidateAnnotation=_candidateAnnotation - In the implementation block
@property (nonatomic,retain) CHRecognizer * shapeRecognizer;                                                           //@synthesize shapeRecognizer=_shapeRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL isShowingCandidatePicker; 
@property (assign,nonatomic) BOOL preferDoodle;                                                                        //@synthesize preferDoodle=_preferDoodle - In the implementation block
@property (assign,nonatomic) BOOL coalescesDoodles;                                                                    //@synthesize coalescesDoodles=_coalescesDoodles - In the implementation block
@property (assign,getter=shapeDetectionEnabled,nonatomic) BOOL shapeDetectionEnabled;                                  //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (assign) BOOL isPreviousCandidateAnnotationUndecided;                                                        //@synthesize isPreviousCandidateAnnotationUndecided=_isPreviousCandidateAnnotationUndecided - In the implementation block
@property (nonatomic,retain) AKPageModelController * modelControllerToObserveForAnnotationsAndSelections;              //@synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections - In the implementation block
+(BOOL)drawingIsValidForRecognition:(id)arg1 withPath:(CGPathRef)arg2 ;
+(void)logAllResults:(id)arg1 ;
-(void)dealloc;
-(id<AKShapeDetectionControllerDelegate>)delegate;
-(void)setDelegate:(id<AKShapeDetectionControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setVeryHighConfidenceLevel:(double)arg1 ;
-(void)setIsPreviousCandidateAnnotationUndecided:(BOOL)arg1 ;
-(void)_shouldDismissNotification:(id)arg1 ;
-(AKCandidatePickerView_iOS *)candidatePickerView;
-(void)_teardownCandidatePicker;
-(BOOL)isShowingCandidatePicker;
-(void)dismissCandidatePicker;
-(BOOL)isPreviousCandidateAnnotationUndecided;
-(void)clearPreviousCandidateAnnotation;
-(AKAnnotation *)candidateAnnotation;
-(void)setCandidateAnnotation:(AKAnnotation *)arg1 ;
-(void)setCandidateAKTags:(NSMutableArray *)arg1 ;
-(void)setCandidateAKTagsToAnnotationInfoMap:(NSMutableDictionary *)arg1 ;
-(void)setCandidateDrawing:(CHDrawing *)arg1 ;
-(NSMutableArray *)candidateAKTags;
-(id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(CGRect)arg2 shouldGoToPageController:(id*)arg3 ;
-(NSMutableDictionary *)candidateAKTagsToAnnotationInfoMap;
-(void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2 ;
-(void)_teardownCandidatePickerBar;
-(AKPageModelController *)modelControllerToObserveForAnnotationsAndSelections;
-(long long)_matchingBlurEffectStyleForCurrentTintColor:(id)arg1 ;
-(void)_pickCandidateResult:(id)arg1 ;
-(void)setCandidatePickerView:(AKCandidatePickerView_iOS *)arg1 ;
-(void)_pickCandidateResultWithAnnotationType:(long long)arg1 ;
-(void)_performRecognitionOnDrawing:(id)arg1 withInkDrawing:(id)arg2 orWithDoodlePath:(CGPathRef)arg3 boundsInInputView:(CGRect)arg4 center:(CGPoint)arg5 isPrestroked:(BOOL)arg6 optionalAnnotation:(id)arg7 ;
-(id)convertDrawingBoundsInInputView:(CGRect)arg1 outBoundsInPageModel:(CGRect*)arg2 ;
-(id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(CGPoint)arg2 ;
-(CHRecognizer *)shapeRecognizer;
-(id)createInkResultFromInkDrawing:(id)arg1 annotation:(id)arg2 ;
-(id)_createDoodleShapeResultWithPath:(CGPathRef)arg1 withDrawingCenter:(CGPoint)arg2 pathIsPrestroked:(BOOL)arg3 ;
-(BOOL)_isResultVeryHighConfidence:(id)arg1 ;
-(long long)_toolTagForCHRecognitionResult:(id)arg1 ;
-(void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(BOOL)arg3 ;
-(double)veryHighConfidenceLevel;
-(CHDrawing *)lastDrawing;
-(void)setModelControllerToObserveForAnnotationsAndSelections:(AKPageModelController *)arg1 ;
-(void)performRecognitionOnDrawing:(id)arg1 withDrawing:(id)arg2 annotation:(id)arg3 boundsInInputView:(CGRect)arg4 center:(CGPoint)arg5 ;
-(void)performRecognitionOnDrawing:(id)arg1 withPath:(CGPathRef)arg2 boundsInInputView:(CGRect)arg3 center:(CGPoint)arg4 isPrestroked:(BOOL)arg5 ;
-(void)logLastDrawingToDisk;
-(void)setShapeRecognizer:(CHRecognizer *)arg1 ;
-(BOOL)preferDoodle;
-(void)setPreferDoodle:(BOOL)arg1 ;
-(BOOL)coalescesDoodles;
-(void)setCoalescesDoodles:(BOOL)arg1 ;
-(BOOL)shapeDetectionEnabled;
-(void)setShapeDetectionEnabled:(BOOL)arg1 ;
-(void)setLastDrawing:(CHDrawing *)arg1 ;
-(CHDrawing *)candidateDrawing;
@end
