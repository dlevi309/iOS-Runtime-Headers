/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPVoiceTemplateProviding.h>

@class CPSVoiceView, UITapGestureRecognizer, NSString;

@interface CPSVoiceTemplateViewController : CPSBaseTemplateViewController <CPVoiceTemplateProviding> {

	CPSVoiceView* _titleView;
	UITapGestureRecognizer* _backGestureRecognizer;
	double _lastVoiceTemplateStateChangeTime;

}

@property (nonatomic,retain) CPSVoiceView * titleView;                                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * backGestureRecognizer;              //@synthesize backGestureRecognizer=_backGestureRecognizer - In the implementation block
@property (assign,nonatomic) double lastVoiceTemplateStateChangeTime;                     //@synthesize lastVoiceTemplateStateChangeTime=_lastVoiceTemplateStateChangeTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(CPSVoiceView *)titleView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitleView:(CPSVoiceView *)arg1 ;
-(void)_activateStateWithIdentifier:(id)arg1 ;
-(void)_viewDidLoad;
-(id)voiceTemplate;
-(void)_backGestureFired:(id)arg1 ;
-(void)setBackGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)_stateWithIdentifier:(id)arg1 ;
-(double)lastVoiceTemplateStateChangeTime;
-(void)setLastVoiceTemplateStateChangeTime:(double)arg1 ;
-(id)initWithVoiceTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(UITapGestureRecognizer *)backGestureRecognizer;
@end

