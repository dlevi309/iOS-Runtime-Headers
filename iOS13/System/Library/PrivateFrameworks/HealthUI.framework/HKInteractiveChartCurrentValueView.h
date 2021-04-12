/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@protocol HKInteractiveChartCurrentValueViewDataSource, HKInteractiveChartCurrentValueViewDelegate;
@class UILabel, UIButton, NSTimer;

@interface HKInteractiveChartCurrentValueView : UIView {

	BOOL _showsInfoButton;
	id<HKInteractiveChartCurrentValueViewDataSource> _dataSource;
	id<HKInteractiveChartCurrentValueViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UILabel* _secondaryLabel;
	UIButton* _infoButton;
	NSTimer* _deferredNoDataTimer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                                            //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                                        //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * deferredNoDataTimer;                                            //@synthesize deferredNoDataTimer=_deferredNoDataTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsInfoButton;                                                            //@synthesize showsInfoButton=_showsInfoButton - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<HKInteractiveChartCurrentValueViewDelegate>)delegate;
-(void)setDelegate:(id<HKInteractiveChartCurrentValueViewDelegate>)arg1 ;
-(id<HKInteractiveChartCurrentValueViewDataSource>)dataSource;
-(void)setDataSource:(id<HKInteractiveChartCurrentValueViewDataSource>)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)reloadData;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UILabel *)secondaryLabel;
-(void)_setupSubviews;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(BOOL)showsInfoButton;
-(void)handleCurrentTimeGesture:(id)arg1 ;
-(void)handleInfographicTapGesture:(id)arg1 ;
-(NSTimer *)deferredNoDataTimer;
-(void)setDeferredNoDataTimer:(NSTimer *)arg1 ;
-(void)showNoDataStatus;
-(void)updateCurrentValueTextWithAttributedString:(id)arg1 ;
-(void)setShowsInfoButton:(BOOL)arg1 ;
-(void)scheduleDeferredDataReload;
@end

