/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKColorPickerDelegate.h>

@protocol MFComposeColorPickerControllerDelegate;
@class UIColor, PKColorPicker, NSString;

@interface MFComposeColorPickerController : UIViewController <PKColorPickerDelegate> {

	BOOL _shouldShowTitleBar;
	id<MFComposeColorPickerControllerDelegate> _delegate;
	UIColor* _selectedColor;
	PKColorPicker* _colorPicker;

}

@property (nonatomic,retain) PKColorPicker * colorPicker;                                             //@synthesize colorPicker=_colorPicker - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTitleBar;                                                 //@synthesize shouldShowTitleBar=_shouldShowTitleBar - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeColorPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                                                 //@synthesize selectedColor=_selectedColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MFComposeColorPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<MFComposeColorPickerControllerDelegate>)arg1 ;
-(UIColor *)selectedColor;
-(BOOL)shouldShowTitleBar;
-(void)closeColorPicker:(id)arg1 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(id)initWithSelectedColor:(id)arg1 shouldShowTitleBar:(BOOL)arg2 ;
-(PKColorPicker *)colorPicker;
-(void)setColorPicker:(PKColorPicker *)arg1 ;
-(void)setShouldShowTitleBar:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)loadView;
@end

