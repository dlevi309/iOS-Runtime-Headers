/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSArray *)constraints;
-(void)updateConstraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)vibrancyEffectView;
-(void)updateWithContentViewState:(unsigned long long)arg1 currentPage:(unsigned long long)arg2 ;
-(void)setVibrancyEffectView:(UIVisualEffectView *)arg1 ;
@end

