/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIColor;

@interface CNAvatarCardHighlightView : UIView {

	CALayer* _highlightLayer;

}

@property (nonatomic,retain) CALayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor; 
@property (nonatomic,readonly) BOOL highlighted; 
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)highlighted;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(CALayer *)highlightLayer;
-(void)setHighlightLayer:(CALayer *)arg1 ;
@end

