/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>

@class VUICircularProgress, NSString;

@interface VUITransactionButton : VUIButton {

	BOOL _waitingForTransactionToStart;
	BOOL _monitorTransaction;
	VUICircularProgress* _progressIndicator;
	NSString* _textContentTitleBackup;

}

@property (assign,getter=isWaitingForTransactionToStart,nonatomic) BOOL waitingForTransactionToStart;              //@synthesize waitingForTransactionToStart=_waitingForTransactionToStart - In the implementation block
@property (assign,nonatomic) BOOL monitorTransaction;                                                              //@synthesize monitorTransaction=_monitorTransaction - In the implementation block
@property (nonatomic,retain) VUICircularProgress * progressIndicator;                                              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,copy) NSString * textContentTitleBackup;                                                      //@synthesize textContentTitleBackup=_textContentTitleBackup - In the implementation block
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(VUICircularProgress *)progressIndicator;
-(void)setProgressIndicator:(VUICircularProgress *)arg1 ;
-(id)_carouselView;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)_buttonTapped:(id)arg1 eventName:(id)arg2 ;
-(void)_unregisterTransactionNotifications;
-(void)_layoutProgressIndicatorIfNeeded;
-(id)_transactionBuyParams;
-(void)setMonitorTransaction:(BOOL)arg1 ;
-(void)_handleTransactionDidStartNotification:(id)arg1 ;
-(void)_updateProgressIndicatorTintColor:(id)arg1 ;
-(BOOL)monitorTransaction;
-(void)_addProgressIndicatorWithFrame:(CGRect)arg1 ;
-(void)_registerForTransactionNotification;
-(BOOL)isWaitingForTransactionToStart;
-(void)setWaitingForTransactionToStart:(BOOL)arg1 ;
-(void)_handleTransactionDidFinishNotification:(id)arg1 ;
-(NSString *)textContentTitleBackup;
-(void)setTextContentTitleBackup:(NSString *)arg1 ;
@end

