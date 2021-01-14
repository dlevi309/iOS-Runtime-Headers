/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled; 
@optional
-(double)baselineOffsetFromBottom;
-(double)desiredHeightForWidth:(double)arg1;
-(double)desiredHeight;
-(id)navigationTitle;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1;
-(void)handleAceCommand:(id)arg1;
-(void)siriWillBeginScrolling;
-(void)siriDidScrollVisible:(BOOL)arg1;
-(double)desiredTopPaddingBelowController:(id)arg1;
-(double)desiredPinnedTopPadding;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2;
-(BOOL)shouldHidePriorViews;
-(void)siriDidReceiveViewsWithDialogPhase:(id)arg1;

@required
-(void)setAceObject:(id)arg1;
-(AceObject *)aceObject;
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1;

@end

