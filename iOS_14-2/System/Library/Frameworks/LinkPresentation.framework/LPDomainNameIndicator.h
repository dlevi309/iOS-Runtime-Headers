/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIVisualEffectView, UILabel, UIImageView;

@interface LPDomainNameIndicator : LPComponentView {

	UIVisualEffectView* _vibrancyView;
	UIVisualEffectView* _blurView;
	UILabel* _label;
	UIImageView* _glyphView;

}
-(void)layoutComponentView;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDomainName:(id)arg1 theme:(id)arg2 ;
@end

