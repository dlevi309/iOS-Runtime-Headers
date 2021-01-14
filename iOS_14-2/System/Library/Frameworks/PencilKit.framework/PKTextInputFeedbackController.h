/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTextInputFeedbackControllerDelegate;
#import <PencilKit/PencilKit-Structs.h>
@class PKTextInputElementContent, PKTextInputTextPlaceholder, PKTextInputGestureFeedbackView;

@interface PKTextInputFeedbackController : NSObject {

	BOOL _showingCustomFeedback;
	id<PKTextInputFeedbackControllerDelegate> _delegate;
	PKTextInputElementContent* _referenceElementContent;
	long long _feedbackType;
	PKTextInputTextPlaceholder* _placeholder;
	PKTextInputGestureFeedbackView* __feedbackView;
	NSRange _referenceTextRange;

}

@property (nonatomic,retain) PKTextInputElementContent * referenceElementContent;                       //@synthesize referenceElementContent=_referenceElementContent - In the implementation block
@property (assign,nonatomic) NSRange referenceTextRange;                                                //@synthesize referenceTextRange=_referenceTextRange - In the implementation block
@property (nonatomic,retain) PKTextInputTextPlaceholder * placeholder;                                  //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long feedbackType;                                                    //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,setter=_setShowingCustomFeedback:,nonatomic) BOOL showingCustomFeedback;              //@synthesize showingCustomFeedback=_showingCustomFeedback - In the implementation block
@property (nonatomic,retain) PKTextInputGestureFeedbackView * _feedbackView;                            //@synthesize _feedbackView=__feedbackView - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputFeedbackControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKTextInputTextPlaceholder * reserveSpacePlaceholder; 
-(id)init;
-(id<PKTextInputFeedbackControllerDelegate>)delegate;
-(PKTextInputGestureFeedbackView *)_feedbackView;
-(void)setDelegate:(id<PKTextInputFeedbackControllerDelegate>)arg1 ;
-(void)setPlaceholder:(PKTextInputTextPlaceholder *)arg1 ;
-(PKTextInputTextPlaceholder *)placeholder;
-(long long)feedbackType;
-(void)setFeedbackType:(long long)arg1 ;
-(void)dealloc;
-(BOOL)showingCustomFeedback;
-(void)setReferenceElementContent:(id)arg1 referenceRange:(NSRange)arg2 feedbackType:(long long)arg3 ;
-(void)beginDisplayForReserveSpacePlaceholder:(id)arg1 ;
-(void)cancelShowingReserveSpaceIntro;
-(void)endDisplayForReserveSpacePlaceholder:(id)arg1 ;
-(void)_placeholderChanged:(id)arg1 ;
-(PKTextInputElementContent *)referenceElementContent;
-(NSRange)referenceTextRange;
-(BOOL)_shouldShowCustomFeedback;
-(void)_setShowingCustomFeedback:(BOOL)arg1 ;
-(void)_updateFeedbackView;
-(void)set_feedbackView:(PKTextInputGestureFeedbackView *)arg1 ;
-(void)_updateFeedbackState;
-(PKTextInputTextPlaceholder *)reserveSpacePlaceholder;
-(void)setReferenceElementContent:(PKTextInputElementContent *)arg1 ;
-(void)setReferenceTextRange:(NSRange)arg1 ;
@end

