/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthUI.framework/RespiratoryHealthUI
*/

#import <RespiratoryHealthUI/RespiratoryHealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface RespiratoryHealthHeroView : UIView {

	CGSize _watchImageSize;
	CGRect _watchImageMediumFrame;
	UIImageView* _watchImageView;
	CGRect _heroImageMediumFrame;
	UIImageView* _heroImageView;
	CGRect _countdownLabelMediumFrame;
	UILabel* _countdownLabel;
	double _preferredWidth;

}

@property (assign,nonatomic) double preferredWidth;              //@synthesize preferredWidth=_preferredWidth - In the implementation block
-(void)setPreferredWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)preferredWidth;
-(id)init;
-(id)_makeCountdownLabel;
-(double)validScaleFactorForCandidate:(double)arg1 ;
-(void)_updateHeroUIWithScaleFactor:(double)arg1 ;
-(id)countdownStringForScaleFactor:(double)arg1 ;
-(id)_makeUnitLabelFontWithSize:(double)arg1 ;
-(id)_makeValueLabelFontWithSize:(double)arg1 ;
@end

