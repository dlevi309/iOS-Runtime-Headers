/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)highlighted;
-(CALayer *)highlightLayer;
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(void)_commonInit;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)highlightColor;
@end

