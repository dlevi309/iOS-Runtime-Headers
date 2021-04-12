/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SiriAppsFooterViewDelegate.h>

@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate> {

	NSArray* _intentsSpecifiers;

}

@property (nonatomic,retain) NSArray * intentsSpecifiers;              //@synthesize intentsSpecifiers=_intentsSpecifiers - In the implementation block
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(NSArray *)intentsSpecifiers;
-(void)_fetchIntentsSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)setIntentsSpecifiers:(NSArray *)arg1 ;
-(void)viewDidTapLearnMore:(id)arg1 ;
-(void)tccPreferencesChanged;
@end

