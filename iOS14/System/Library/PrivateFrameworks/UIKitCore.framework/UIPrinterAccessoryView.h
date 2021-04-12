/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStatusView:(UIView *)arg1 ;
-(void)infoButtonPressed:(id)arg1 ;
-(UIView *)statusView;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
-(id<UIPrinterAccessoryViewDelegate>)delegate;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<UIPrinterAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)infoButton;
@end

