/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeStyleSelectorButton.h>

@class UIFont;

@interface MFComposeFontSelectorButton : MFComposeStyleSelectorButton {

	UIFont* _representedFont;

}

@property (nonatomic,retain) UIFont * representedFont;              //@synthesize representedFont=_representedFont - In the implementation block
+(id)buttonWithFont:(id)arg1 ;
-(void)layoutSubviews;
-(void)setRepresentedFont:(UIFont *)arg1 ;
-(UIFont *)representedFont;
@end

