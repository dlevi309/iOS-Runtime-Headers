/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TIHardwareKeyboardDetailController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(NSString *)inputMode;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHardwareLayout:(id)arg1 ;
-(void)viewDidLoad;
-(void)dealloc;
-(id)newSpecifiers;
@end

