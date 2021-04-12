/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFColorPickerDelegate.h>
#import <libobjc.A.dylib/WFGlyphPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class WFWorkflow, WFIconComposePreviewView, WFColorPicker, WFGlyphPicker, UIView, NSString;

@interface WFIconComposeViewController : UIViewController <WFColorPickerDelegate, WFGlyphPickerDelegate, UINavigationControllerDelegate> {

	WFWorkflow* _workflow;
	WFIconComposePreviewView* _iconView;
	WFColorPicker* _colorPicker;
	WFGlyphPicker* _glyphPicker;
	UIView* _topSeperator;
	UIView* _bottomSeparator;

}

@property (assign,nonatomic,__weak) WFIconComposePreviewView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) WFColorPicker * colorPicker;                      //@synthesize colorPicker=_colorPicker - In the implementation block
@property (assign,nonatomic,__weak) WFGlyphPicker * glyphPicker;                      //@synthesize glyphPicker=_glyphPicker - In the implementation block
@property (assign,nonatomic,__weak) UIView * topSeperator;                            //@synthesize topSeperator=_topSeperator - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomSeparator;                         //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                   //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBottomSeparator:(UIView *)arg1 ;
-(WFWorkflow *)workflow;
-(WFIconComposePreviewView *)iconView;
-(void)setIconView:(WFIconComposePreviewView *)arg1 ;
-(WFColorPicker *)colorPicker;
-(void)setColorPicker:(WFColorPicker *)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setTopSeperator:(UIView *)arg1 ;
-(void)loadView;
-(UIView *)topSeperator;
-(UIView *)bottomSeparator;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pickedSegment:(id)arg1 ;
-(void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2 ;
-(void)colorPicker:(id)arg1 didSelectColor:(id)arg2 ;
-(void)saveIcon:(id)arg1 ;
-(void)updateAccessibilityValue;
-(WFGlyphPicker *)glyphPicker;
-(void)setGlyphPicker:(WFGlyphPicker *)arg1 ;
@end

