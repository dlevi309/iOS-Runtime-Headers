/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface GameCenterUI.GKMultiplayerFooterView : UIView {

	 buttonTitle;
	 primaryButton;
	 statusLabel;
	 messageButton;
	 wantsMaterialBackground;
	 backgroundView;
	 messageButtonState;
	 startGameHandler;
	 addMessageHandler;

}

@property (assign,nonatomic) BOOL wantsMaterialBackground; 
@property (assign,nonatomic) BOOL startGameButtonEnabled; 
@property (assign,nonatomic) long long messageButtonState; 
@property (copy,nonatomic) NSString * primaryButtonTitle; 
@property (copy,nonatomic) NSString * footerStatusString; 
@property (copy,nonatomic) id startGameHandler; 
@property (copy,nonatomic) id addMessageHandler; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(BOOL)wantsMaterialBackground;
-(void)setMessageButtonState:(long long)arg1 ;
-(void)setStartGameHandler:(id)arg1 ;
-(void)setAddMessageHandler:(id)arg1 ;
-(void)configureUsing:(id)arg1 ;
-(void)setWantsMaterialBackground:(BOOL)arg1 ;
-(void)didTapMessageButton:(id)arg1 ;
-(BOOL)startGameButtonEnabled;
-(long long)messageButtonState;
-(NSString *)footerStatusString;
-(id)startGameHandler;
-(id)addMessageHandler;
-(void)layoutSubviews;
-(NSString *)primaryButtonTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFooterStatusString:(NSString *)arg1 ;
-(void)setStartGameButtonEnabled:(BOOL)arg1 ;
-(void)setPrimaryButtonTitle:(NSString *)arg1 ;
-(void)didTapButton:(id)arg1 ;
@end

