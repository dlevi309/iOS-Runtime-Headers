/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIBaseAceObjectViewControllerDelegate;
@class AceObject, SiriUISashItem, SAUISnippet, NSString;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController> {

	BOOL _utteranceUserInteractionEnabled;
	AceObject* aceObject;
	SiriUISashItem* _sashItem;
	id<SiriUIBaseAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SAUISnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIBaseAceObjectViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SiriUISashItem * sashItem;                                                                //@synthesize sashItem=_sashItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
-(id<SiriUIBaseAceObjectViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIBaseAceObjectViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(SAUISnippet *)snippet;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(double)desiredHeight;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(double)desiredTopPaddingBelowController:(id)arg1 ;
-(SiriUISashItem *)sashItem;
-(void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2 ;
@end

