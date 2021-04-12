/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIPrinterAccessoryViewDelegate;
@class UIButton, UIView;

@interface UIPrinterAccessoryView : UIView {

	int _printerState;
	UIButton* _infoButton;
	UIView* _statusView;
	id<UIPrinterAccessoryViewDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * infoButton;                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIView * statusView;                                             //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int printerState;                                                //@synthesize printerState=_printerState - In the implementation block
-(id<UIPrinterAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<UIPrinterAccessoryViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)infoButtonPressed:(id)arg1 ;
-(UIView *)statusView;
-(void)setStatusView:(UIView *)arg1 ;
-(UIButton *)infoButton;
-(void)setPrinterState:(int)arg1 ;
-(void)setInfoButton:(UIButton *)arg1 ;
-(int)printerState;
@end

