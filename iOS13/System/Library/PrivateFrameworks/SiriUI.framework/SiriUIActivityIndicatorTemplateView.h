/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIBaseTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView> {

	UILabel* _detailTextLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UILabel * detailTextLabel;                                               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                   //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIActivityIndicatorTemplateModel> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(UILabel *)detailTextLabel;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(double)desiredHeight;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
@end

