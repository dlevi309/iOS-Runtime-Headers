/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class StoreSettingsLinkButton, NSString;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {

	StoreSettingsLinkButton* _linkButton;
	NSString* _linkURLBagKey;

}
+(id)linkAttributedStringWithTitle:(id)arg1 highlighted:(BOOL)arg2 ;
+(id)groupSpecifierWithFooterLinkWithTitle:(id)arg1 URLBagKey:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)_buttonAction:(id)arg1 ;
@end

