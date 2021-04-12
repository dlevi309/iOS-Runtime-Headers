/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol UICoordinateSpace, UITextInput, PKScribbleInteractionWrapper, NSObjectNSCopying;
#import <PencilKit/PencilKit-Structs.h>
@class UIView, NSNumber, NSString;

@interface PKTextInputElement : NSObject {

	CGRect _lastKnownFrame;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _waitingForMatchingDidFinishWriting;
	BOOL __requestingPlaceholderSuppression;
	BOOL _legacyHasBeenFocusedWithinContainer;
	long long __elementType;
	id<UITextInput> _textInput;
	UIView* _textInputView;
	id<PKScribbleInteractionWrapper> __viewScribbleInteraction;
	id<PKScribbleInteractionWrapper> __containerInteraction;
	long long __orderInContainer;
	NSNumber* _recognitionIdentifier;
	id<NSObject><NSCopying> _containerElementIdentifier;

}

@property (assign,nonatomic) long long _elementType;                                                   //@synthesize _elementType=__elementType - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInput> textInput;                                         //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic,__weak) UIView * textInputView;                                            //@synthesize textInputView=_textInputView - In the implementation block
@property (nonatomic,readonly) id<PKScribbleInteractionWrapper> _viewScribbleInteraction;              //@synthesize _viewScribbleInteraction=__viewScribbleInteraction - In the implementation block
@property (nonatomic,readonly) id<PKScribbleInteractionWrapper> _containerInteraction;                 //@synthesize _containerInteraction=__containerInteraction - In the implementation block
@property (nonatomic,readonly) long long _orderInContainer;                                            //@synthesize _orderInContainer=__orderInContainer - In the implementation block
@property (assign,nonatomic) BOOL _requestingPlaceholderSuppression;                                   //@synthesize _requestingPlaceholderSuppression=__requestingPlaceholderSuppression - In the implementation block
@property (nonatomic,copy) NSNumber * recognitionIdentifier;                                           //@synthesize recognitionIdentifier=_recognitionIdentifier - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying> containerElementIdentifier;                     //@synthesize containerElementIdentifier=_containerElementIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * referenceView; 
@property (nonatomic,readonly) NSString * debugElementTypeDescription; 
@property (getter=isFocused,nonatomic,readonly) BOOL focused; 
@property (assign,nonatomic) BOOL legacyHasBeenFocusedWithinContainer;                                 //@synthesize legacyHasBeenFocusedWithinContainer=_legacyHasBeenFocusedWithinContainer - In the implementation block
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) CGRect frame; 
+(UIEdgeInsets)hitToleranceEdgeInsetsFromHorizontalTolerance:(double)arg1 verticalTolerance:(double)arg2 ;
+(CGRect)hitToleranceFrameFromElementFrame:(CGRect)arg1 insets:(UIEdgeInsets)arg2 ;
-(UIView *)textInputView;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)shouldBeginAtLocation:(CGPoint)arg1 ;
-(id)selectionHighlightColor;
-(BOOL)showSelectionCommands;
-(CGRect)frame;
-(id)initWithTextInput:(id)arg1 ;
-(BOOL)isFocused;
-(id)description;
-(long long)_elementType;
-(id<UITextInput>)textInput;
-(void)setTextInputView:(UIView *)arg1 ;
-(id)_textInputView;
-(BOOL)containsView:(id)arg1 ;
-(UIView *)referenceView;
-(id)_scribbleInteraction;
-(void)setTextInput:(id<UITextInput>)arg1 ;
-(void)dealloc;
-(NSNumber *)recognitionIdentifier;
-(void)setRecognitionIdentifier:(NSNumber *)arg1 ;
-(id)_containerInteractionView;
-(id<PKScribbleInteractionWrapper>)_containerInteraction;
-(id<NSObject><NSCopying>)containerElementIdentifier;
-(id<PKScribbleInteractionWrapper>)_viewScribbleInteraction;
-(long long)_orderInContainer;
-(BOOL)legacyHasBeenFocusedWithinContainer;
-(BOOL)_isFromSameContainerAsElement:(id)arg1 ;
-(BOOL)shouldPostponeFocusing;
-(void)focusElementIfNeededWithReferencePoint:(CGPoint)arg1 alwaysSetSelectionFromReferencePoint:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_safeHitFrame;
-(id)_textInputResponder;
-(void)_promoteKeyWindowIfNecessary:(id)arg1 ;
-(void)setLegacyHasBeenFocusedWithinContainer:(BOOL)arg1 ;
-(BOOL)_isFrameTooCloseToBottom;
-(id)initWithElementInteraction:(id)arg1 elementIdentifier:(id)arg2 orderInContainer:(long long)arg3 ;
-(CGRect)hitToleranceFrameFromElementFrame:(CGRect)arg1 ;
-(NSString *)debugElementTypeDescription;
-(void)updateWithFocusedTextInput:(id)arg1 ;
-(void)updateFromEquivalentElement:(id)arg1 ;
-(void)didTargetElementForTouches:(id)arg1 event:(id)arg2 ;
-(BOOL)isEquivalentToElement:(id)arg1 ;
-(BOOL)isInFrontOfElement:(id)arg1 ;
-(BOOL)isElementView:(id)arg1 ;
-(void)loadContentFocusingIfNeededWithReferencePoint:(CGPoint)arg1 alwaysSetSelectionFromReferencePoint:(BOOL)arg2 rectOfInterest:(CGRect)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)clampedReferencePoint:(CGPoint)arg1 ;
-(BOOL)shouldPostponeCommit;
-(void)set_elementType:(long long)arg1 ;
-(BOOL)_requestingPlaceholderSuppression;
-(void)set_requestingPlaceholderSuppression:(BOOL)arg1 ;
-(void)_beginSuppressingFieldPlaceholder;
-(void)_finishSuppressingFieldPlaceholderIfNeeded;
-(NSRange)activePreviewRange;
-(BOOL)clearActivePreview;
-(CGRect)selectionClipRectInCoordinateSpace:(id)arg1 ;
-(void)notifyTextInputTextWillChange;
-(void)notifyTextInputTextDidChange;
-(void)swapWritingStateWithElement:(id)arg1 ;
-(void)willBeginWriting;
-(void)didEndWriting;
@end

