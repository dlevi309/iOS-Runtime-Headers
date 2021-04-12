/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIView.h>

@class NSString, _UILegibilitySettings, UIMorphingLabel;

@interface SBUIFaceIDCoachingView : UIView {

	unsigned long long _coachingCondition;
	NSString* _currentSizeCategory;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _labelText;
	UIMorphingLabel* _label;

}

@property (nonatomic,retain) NSString * labelText;                                    //@synthesize labelText=_labelText - In the implementation block
@property (getter=_label,nonatomic,retain) UIMorphingLabel * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long coachingCondition;                    //@synthesize coachingCondition=_coachingCondition - In the implementation block
@property (nonatomic,retain) NSString * currentSizeCategory;                          //@synthesize currentSizeCategory=_currentSizeCategory - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double stringWidth; 
-(id)_label;
-(double)stringWidth;
-(void)setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(id)init;
-(NSString *)currentSizeCategory;
-(void)setCoachingCondition:(unsigned long long)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)layoutSubviews;
-(NSString *)labelText;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned long long)coachingCondition;
-(void)_resizeLabelToFirstSizeCategoryThatFits;
-(void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)arg1 ;
-(void)setCurrentSizeCategory:(NSString *)arg1 ;
-(void)setLabel:(UIMorphingLabel *)arg1 ;
-(void)_contentSizeCategoryChanged;
@end

