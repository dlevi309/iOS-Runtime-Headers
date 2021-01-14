/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface PRImageView : UIView {

	BOOL _circular;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
-(UIImage *)image;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isCircular;
@end

