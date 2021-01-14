/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, PSSpecifier, PSListController, NSString;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {

	UITextView* _infoTextView;
	BOOL _asHeader;
	PSSpecifier* _specifier;
	PSListController* _listController;

}

@property (assign,nonatomic) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL asHeader;                                  //@synthesize asHeader=_asHeader - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)setListController:(PSListController *)arg1 ;
-(PSListController *)listController;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)dealloc;
-(id)initWithGroupSpecifier:(id)arg1 asHeader:(BOOL)arg2 inListController:(id)arg3 ;
-(void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)asHeader;
-(void)aboutDonePressed;
-(void)setAsHeader:(BOOL)arg1 ;
@end

