/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface ACUILinkButton : UIButton {

	NSString* _acui_titleString;

}

@property (retain) NSString * acui_titleString;              //@synthesize acui_titleString=_acui_titleString - In the implementation block
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAcui_titleString:(NSString *)arg1 ;
-(id)_normalStringAttributes;
-(id)_highlightedStringAttributes;
-(id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(NSString *)acui_titleString;
@end

