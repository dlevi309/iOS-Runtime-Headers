/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSFooterHyperlinkView.h>

@protocol SiriAppsFooterViewDelegate;
@interface SiriAppsFooterView : PSFooterHyperlinkView {

	id<SiriAppsFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriAppsFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriAppsFooterViewDelegate>)delegate;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setDelegate:(id<SiriAppsFooterViewDelegate>)arg1 ;
-(void)didTapLearnMore:(id)arg1 ;
@end

