/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUICarDNDContextProviderDelegate.h>

@protocol SiriUICarDNDDelegate;
@class UILabel, NSString, UIImageView, SiriUICarDNDContextProvider;

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate> {

	BOOL _localizedSubtitleDisplayedAboveTitle;
	id<SiriUICarDNDDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIImageView* _siriOrbImageView;
	SiriUICarDNDContextProvider* _contextProvider;

}

@property (setter=_setTitleLabel:,getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,getter=_subtitleLabel,nonatomic,retain) UILabel * subtitleLabel;                                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (setter=_setLocalizedTitle:,getter=_localizedTitle,nonatomic,retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (setter=_setLocalizedSubtitle:,getter=_localizedSubtitle,nonatomic,retain) NSString * localizedSubtitle;                           //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (setter=_setSiriOrbImageView:,getter=_siriOrbImageView,nonatomic,retain) UIImageView * siriOrbImageView;                           //@synthesize siriOrbImageView=_siriOrbImageView - In the implementation block
@property (setter=_setContextProvider:,getter=_contextProvider,nonatomic,retain) SiriUICarDNDContextProvider * contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICarDNDDelegate> delegate;                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowCarDNDUseSiriHeaderViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SiriUICarDNDDelegate>)delegate;
-(id)_subtitleLabel;
-(id)_contextProvider;
-(void)setDelegate:(id<SiriUICarDNDDelegate>)arg1 ;
-(void)_setSubtitleLabel:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_setupView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setupTitleLabel;
-(void)_setupSubtitleLabel;
-(id)_localizedTitle;
-(id)_titleLabel;
-(void)_setLocalizedSubtitle:(id)arg1 ;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setupImageView;
-(id)_localizedSubtitle;
-(void)contextProvided:(id)arg1 ;
-(id)_hintContext;
-(void)_setupTitleAndSubtitleConstraints;
-(void)_addContextProvider;
-(void)_sendCardAppearedAnalyticsEvent;
-(void)_removeContextProvider;
-(void)_setSiriOrbImageView:(id)arg1 ;
-(id)_siriOrbImageView;
-(void)_setContextProvider:(id)arg1 ;
@end

