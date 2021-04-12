/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,copy) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)setInputMode:(NSString *)arg1 ;
-(NSString *)inputMode;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSoftwareLayout:(id)arg1 ;
-(void)viewDidLoad;
-(void)dealloc;
-(void)setShuangpinType:(id)arg1 ;
-(id)newSpecifiers;
-(id)newSpecifiersForChineseShuangpin;
-(id)newSpecifiersForChineseWubi;
-(void)setWubiStandard:(int)arg1 ;
-(void)reloadKeyboardSpecifiers;
@end

