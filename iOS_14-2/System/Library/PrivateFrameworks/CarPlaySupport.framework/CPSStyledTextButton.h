/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@class UIFont;

@interface CPSStyledTextButton : CPSButton {

	UIFont* _fontOverride;

}

@property (nonatomic,retain) UIFont * fontOverride;              //@synthesize fontOverride=_fontOverride - In the implementation block
+(id)buttonWithTextButton:(id)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(id)_buttonFont;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)fontOverride;
-(void)setFontOverride:(UIFont *)arg1 ;
@end

