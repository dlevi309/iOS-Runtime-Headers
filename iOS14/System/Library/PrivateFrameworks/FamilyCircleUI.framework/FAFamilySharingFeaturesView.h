/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface FAFamilySharingFeaturesView : UIView {

	long long _context;
	UIButton* _learnMoreButton;
	BOOL _shouldHideLocationSharing;
	UIStackView* _stack;

}
+(id)rowForIcon:(id)arg1 andLabel:(id)arg2 ;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContext:(long long)arg1 hideLocationSharing:(BOOL)arg2 ;
-(id)_imageViewWithIconNamed:(id)arg1 addBorder:(BOOL)arg2 ;
-(id)_labelWithStringAtKey:(id)arg1 ;
-(void)_learnMoreButtonTapped:(id)arg1 ;
-(id)_contextSensitiveLocalizedStringWithKey:(id)arg1 ;
@end

