/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class UIToolbar, UIColor, AKController, AKColorPaletteView, UIBarButtonItem, UIView, NSArray, NSString;

@interface AKFloatingAttributePickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {

	UIToolbar* _toolbar;
	UIColor* _color;
	long long _colorAttributeTag;
	AKController* _controller;
	AKColorPaletteView* _colorPalette;
	UIBarButtonItem* _colorPaletteButtonItem;
	UIView* _separatorView;
	NSArray* _staticItems;
	NSArray* _rightButtonItems;
	long long _tag;

}

@property (assign,nonatomic,__weak) AKController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKColorPaletteView * colorPalette;                     //@synthesize colorPalette=_colorPalette - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                   //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * colorPaletteButtonItem;              //@synthesize colorPaletteButtonItem=_colorPaletteButtonItem - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSArray * staticItems;                                 //@synthesize staticItems=_staticItems - In the implementation block
@property (nonatomic,retain) NSArray * rightButtonItems;                            //@synthesize rightButtonItems=_rightButtonItems - In the implementation block
@property (assign,nonatomic) long long tag;                                         //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorAttributeTag;                           //@synthesize colorAttributeTag=_colorAttributeTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tag;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIView *)separatorView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setTag:(long long)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(UIToolbar *)toolbar;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setColorPalette:(AKColorPaletteView *)arg1 ;
-(AKColorPaletteView *)colorPalette;
-(long long)colorAttributeTag;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(void)setColorAttributeTag:(long long)arg1 ;
-(void)setRightButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setColorPaletteButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)colorPaletteButtonItem;
-(void)setStaticItems:(NSArray *)arg1 ;
-(NSArray *)staticItems;
-(NSArray *)rightButtonItems;
-(void)setRightButtonItems:(NSArray *)arg1 ;
@end

