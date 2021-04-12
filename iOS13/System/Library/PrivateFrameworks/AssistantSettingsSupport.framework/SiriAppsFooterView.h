/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSFooterHyperlinkView.h>

@protocol SiriAppsFooterViewDelegate;
@interface SiriAppsFooterView : PSFooterHyperlinkView {

	id<SiriAppsFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriAppsFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriAppsFooterViewDelegate>)delegate;
-(void)setDelegate:(id<SiriAppsFooterViewDelegate>)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)didTapLearnMore:(id)arg1 ;
@end

