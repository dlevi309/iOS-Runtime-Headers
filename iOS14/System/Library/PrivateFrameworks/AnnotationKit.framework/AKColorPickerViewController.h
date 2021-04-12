/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTag:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIColor *)color;
-(long long)tag;
-(void)setController:(AKController *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(void)setColorPalette:(AKColorPaletteView *)arg1 ;
-(AKColorPaletteView *)colorPalette;
-(void)setColor:(UIColor *)arg1 ;
-(void)viewDidLoad;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(long long)colorAttributeTag;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(void)setColorAttributeTag:(long long)arg1 ;
@end

