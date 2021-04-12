/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(WFIconComposePreviewView *)iconView;
-(void)setIconView:(WFIconComposePreviewView *)arg1 ;
-(UIView *)bottomSeparator;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)topSeperator;
-(void)setTopSeperator:(UIView *)arg1 ;
-(WFColorPicker *)colorPicker;
-(void)setColorPicker:(WFColorPicker *)arg1 ;
-(void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2 ;
-(void)colorPicker:(id)arg1 didSelectColor:(id)arg2 ;
-(void)pickedSegment:(id)arg1 ;
-(void)saveIcon:(id)arg1 ;
-(void)updateAccessibilityValue;
-(WFGlyphPicker *)glyphPicker;
-(void)setGlyphPicker:(WFGlyphPicker *)arg1 ;
@end

