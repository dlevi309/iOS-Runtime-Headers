/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIActivityIndicatorView *)activityIndicator;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMessage:(id)arg1 active:(BOOL)arg2 ;
-(double)presentationTime;
-(void)setPresentationTime:(double)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(void)setLabel:(UILabel *)arg1 ;
-(void)presentView;
-(UILabel *)label;
@end

