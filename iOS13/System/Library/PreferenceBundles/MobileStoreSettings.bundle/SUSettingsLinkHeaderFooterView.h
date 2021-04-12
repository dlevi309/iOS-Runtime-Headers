/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class StoreSettingsLinkButton, NSString;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {

	StoreSettingsLinkButton* _linkButton;
	NSString* _linkURLBagKey;

}
+(id)groupSpecifierWithFooterLinkWithTitle:(id)arg1 URLBagKey:(id)arg2 ;
+(id)linkAttributedStringWithTitle:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

