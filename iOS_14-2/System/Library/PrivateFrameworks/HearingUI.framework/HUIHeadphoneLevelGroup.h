/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, UIVisualEffectView, UILabel, NSArray;

@interface HUIHeadphoneLevelGroup : UIView {

	BOOL _isRTL;
	NSMutableArray* _levelContainers;
	NSMutableArray* _levels;
	UIVisualEffectView* _labelContainer;
	UILabel* _minLabel;
	UILabel* _thresholdLabel;
	UILabel* _maxLabel;
	unsigned long long _pipFlagIndex;
	NSArray* _viewContraints;

}

@property (nonatomic,retain) NSMutableArray * levelContainers;                 //@synthesize levelContainers=_levelContainers - In the implementation block
@property (nonatomic,retain) NSMutableArray * levels;                          //@synthesize levels=_levels - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * labelContainer;              //@synthesize labelContainer=_labelContainer - In the implementation block
@property (nonatomic,retain) UILabel * minLabel;                               //@synthesize minLabel=_minLabel - In the implementation block
@property (nonatomic,retain) UILabel * thresholdLabel;                         //@synthesize thresholdLabel=_thresholdLabel - In the implementation block
@property (nonatomic,retain) UILabel * maxLabel;                               //@synthesize maxLabel=_maxLabel - In the implementation block
@property (nonatomic,readonly) BOOL isRTL;                                     //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,readonly) unsigned long long pipFlagIndex;                //@synthesize pipFlagIndex=_pipFlagIndex - In the implementation block
@property (nonatomic,retain) NSArray * viewContraints;                         //@synthesize viewContraints=_viewContraints - In the implementation block
-(id)init;
-(NSMutableArray *)levels;
-(BOOL)isRTL;
-(UILabel *)minLabel;
-(UILabel *)maxLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UILabel *)thresholdLabel;
-(void)setThresholdLabel:(UILabel *)arg1 ;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)setMinLabel:(UILabel *)arg1 ;
-(void)setMaxLabel:(UILabel *)arg1 ;
-(NSArray *)viewContraints;
-(void)setViewContraints:(NSArray *)arg1 ;
-(void)layoutLevels;
-(unsigned long long)pipFlagIndex;
-(NSMutableArray *)levelContainers;
-(void)updateWithExposure:(double)arg1 withThreshold:(unsigned long long)arg2 ;
-(void)setLevelContainers:(NSMutableArray *)arg1 ;
-(UIVisualEffectView *)labelContainer;
-(void)setLabelContainer:(UIVisualEffectView *)arg1 ;
@end

