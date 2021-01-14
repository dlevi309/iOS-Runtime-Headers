/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIView.h>

@class FAMugshotMarqueeView, UILabel;

@interface FAFamilyHeaderView : UIView {

	FAMugshotMarqueeView* _mugShots;
	UILabel* _familyHeaderLabel;

}

@property (nonatomic,readonly) UILabel * familyHeaderLabel;              //@synthesize familyHeaderLabel=_familyHeaderLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2 ;
-(UILabel *)familyHeaderLabel;
@end

