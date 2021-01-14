/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface ACUILinkButton : UIButton {

	NSString* _acui_titleString;

}

@property (retain) NSString * acui_titleString;              //@synthesize acui_titleString=_acui_titleString - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAcui_titleString:(NSString *)arg1 ;
-(id)_normalStringAttributes;
-(id)_highlightedStringAttributes;
-(id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(NSString *)acui_titleString;
@end

