/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(double)desiredHeight;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(void)reloadData;
@end

