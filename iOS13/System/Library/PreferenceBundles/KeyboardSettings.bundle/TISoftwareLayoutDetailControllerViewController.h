/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,copy) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setInputMode:(NSString *)arg1 ;
-(void)setSoftwareLayout:(id)arg1 ;
-(NSString *)inputMode;
-(id)specifiers;
-(void)setShuangpinType:(id)arg1 ;
-(id)newSpecifiers;
-(id)newSpecifiersForChineseShuangpin;
-(void)reloadKeyboardSpecifiers;
@end

