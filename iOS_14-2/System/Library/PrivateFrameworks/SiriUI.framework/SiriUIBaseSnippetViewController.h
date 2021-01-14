/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SiriUIBaseAceObjectViewControllerDelegate>)delegate;
-(double)desiredHeight;
-(SAUISnippet *)snippet;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(void)setDelegate:(id<SiriUIBaseAceObjectViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setAceObject:(AceObject *)arg1 ;
-(AceObject *)aceObject;
-(SiriUISashItem *)sashItem;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(double)desiredTopPaddingBelowController:(id)arg1 ;
-(void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2 ;
@end

