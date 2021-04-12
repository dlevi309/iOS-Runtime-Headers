/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSetupConnectingView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	double _presentationTime;

}

@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) double presentationTime;                                  //@synthesize presentationTime=_presentationTime - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setMessage:(id)arg1 active:(BOOL)arg2 ;
-(void)presentView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(double)presentationTime;
-(void)setPresentationTime:(double)arg1 ;
@end

