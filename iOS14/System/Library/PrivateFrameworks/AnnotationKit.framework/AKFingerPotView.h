/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView, UIImage;

@interface AKFingerPotView : UIButton {

	UIImageView* _selectedOutline;
	UIImageView* _highlight;

}

@property (nonatomic,retain) UIImageView * selectedOutline;              //@synthesize selectedOutline=_selectedOutline - In the implementation block
@property (nonatomic,retain) UIImageView * highlight;                    //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) UIImage * menuImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)highlight;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlight:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)selectedOutline;
-(void)setSelectedOutline:(UIImageView *)arg1 ;
-(UIImage *)menuImage;
-(void)setMenuImage:(UIImage *)arg1 ;
@end

