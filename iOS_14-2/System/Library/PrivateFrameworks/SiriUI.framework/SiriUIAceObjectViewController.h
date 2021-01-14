/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_privateDelegate;
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(double)desiredHeight;
-(BOOL)isVirgin;
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setAceObject:(AceObject *)arg1 ;
-(AceObject *)aceObject;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
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

