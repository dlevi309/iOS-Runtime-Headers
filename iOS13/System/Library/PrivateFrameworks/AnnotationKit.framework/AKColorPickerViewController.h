/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class UIColor, AKController, AKColorPaletteView, NSString;

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {

	UIColor* _color;
	long long _colorAttributeTag;
	AKController* _controller;
	AKColorPaletteView* _colorPalette;
	long long _tag;

}

@property (assign,nonatomic,__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKColorPaletteView * colorPalette;              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) long long tag;                                  //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorAttributeTag;                    //@synthesize colorAttributeTag=_colorAttributeTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tag;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setTag:(long long)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(void)valueChanged:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setColorPalette:(AKColorPaletteView *)arg1 ;
-(AKColorPaletteView *)colorPalette;
-(long long)colorAttributeTag;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(void)setColorAttributeTag:(long long)arg1 ;
@end

