/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/HealthToolboxPlugin.healthplugin/HealthToolboxPlugin
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, _TtC18HealthExperienceUI12GradientView, _TtC18HealthExperienceUI30SectionedDataSourceItemAdaptor;

@interface HealthToolboxPlugin.HealthToolboxPluginTileViewController : UIViewController {

	 context;
	 valueLabel;
	 unitLabel;
	 dateLabel;
	 tileView;
	 adaptor;

}

@property (assign,__weak,nonatomic) UILabel * valueLabel; 
@property (assign,__weak,nonatomic) UILabel * unitLabel; 
@property (assign,__weak,nonatomic) UILabel * dateLabel; 
@property (retain,nonatomic) _TtC18HealthExperienceUI12GradientView * tileView; 
@property (retain,nonatomic) _TtC18HealthExperienceUI30SectionedDataSourceItemAdaptor * adaptor; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UILabel *)dateLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(_TtC18HealthExperienceUI30SectionedDataSourceItemAdaptor *)adaptor;
-(void)setAdaptor:(_TtC18HealthExperienceUI30SectionedDataSourceItemAdaptor *)arg1 ;
-(UILabel *)unitLabel;
-(void)setUnitLabel:(UILabel *)arg1 ;
-(_TtC18HealthExperienceUI12GradientView *)tileView;
-(void)setTileView:(_TtC18HealthExperienceUI12GradientView *)arg1 ;
-(void)tileWasTapped:(id)arg1 ;
@end

