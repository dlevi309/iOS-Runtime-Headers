/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton {

	BOOL _showsBackgroundColor;
	BOOL _shouldTintNormalImage;
	UIColor* _selectedColor;
	UIImage* _templateImage;

}

@property (assign,nonatomic) BOOL showsBackgroundColor;               //@synthesize showsBackgroundColor=_showsBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL shouldTintNormalImage;              //@synthesize shouldTintNormalImage=_shouldTintNormalImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                 //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;                 //@synthesize templateImage=_templateImage - In the implementation block
+(id)colorImage:(id)arg1 withColor:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_touchCommitted:(id)arg1 ;
-(BOOL)showsBackgroundColor;
-(void)_updateSelectionColorsAnimated:(BOOL)arg1 ;
-(BOOL)shouldTintNormalImage;
-(UIImage *)templateImage;
-(void)_setSelectedStateColorImage;
-(void)_setDeselectedStateColorImage;
-(void)_updateStateColors;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 autoUpdatesColor:(BOOL)arg3 ;
-(void)setShowsBackgroundColor:(BOOL)arg1 ;
-(void)setShouldTintNormalImage:(BOOL)arg1 ;
-(void)setTemplateImage:(UIImage *)arg1 ;
@end

