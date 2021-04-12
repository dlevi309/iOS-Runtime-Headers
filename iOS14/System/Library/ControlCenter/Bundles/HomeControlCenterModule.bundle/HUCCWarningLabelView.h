/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, NSArray;

@interface HUCCWarningLabelView : UIView {

	UILabel* _warningLabel;
	UIVisualEffectView* _vibrancyEffectView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * warningLabel;                               //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyEffectView;              //@synthesize vibrancyEffectView=_vibrancyEffectView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)init;
-(void)updateConstraints;
-(UIVisualEffectView *)vibrancyEffectView;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(void)updateWithContentViewState:(unsigned long long)arg1 currentPage:(unsigned long long)arg2 ;
-(void)setVibrancyEffectView:(UIVisualEffectView *)arg1 ;
@end

