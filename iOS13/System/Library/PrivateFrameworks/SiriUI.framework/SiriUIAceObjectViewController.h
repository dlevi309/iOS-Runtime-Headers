/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, NSString;

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController> {

	BOOL _utteranceUserInteractionEnabled;
	BOOL _virgin;
	AceObject* _aceObject;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AceObject * aceObject;                                                                      //@synthesize aceObject=_aceObject - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                              //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(id)_privateDelegate;
-(double)desiredHeight;
-(AceObject *)aceObject;
-(BOOL)isVirgin;
-(void)setAceObject:(AceObject *)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
-(void)_aceObjectViewControllerWillBeRemoved;
-(BOOL)_shouldSkipAnimationsInAlternateSpeeds;
@end

