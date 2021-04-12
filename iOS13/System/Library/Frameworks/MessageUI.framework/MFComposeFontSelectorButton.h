/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

