/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFonts;
-(id)initWithContext:(long long)arg1 hideLocationSharing:(BOOL)arg2 ;
-(id)_imageViewWithIconNamed:(id)arg1 addBorder:(BOOL)arg2 ;
-(id)_labelWithStringAtKey:(id)arg1 ;
-(void)_learnMoreButtonTapped:(id)arg1 ;
-(id)_contextSensitiveLocalizedStringWithKey:(id)arg1 ;
@end

