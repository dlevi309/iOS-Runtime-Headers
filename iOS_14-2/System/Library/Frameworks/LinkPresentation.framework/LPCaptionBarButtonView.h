/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSString, LPButtonStyle, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {

	NSString* _caption;
	LPButtonStyle* _style;
	UIButton* _button;

}
-(void)layoutComponentView;
-(id)init;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCaption:(id)arg1 style:(id)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

