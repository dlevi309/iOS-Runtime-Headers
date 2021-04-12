/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SiriAppsFooterViewDelegate.h>

@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate> {

	NSArray* _intentsSpecifiers;

}

@property (nonatomic,retain) NSArray * intentsSpecifiers;              //@synthesize intentsSpecifiers=_intentsSpecifiers - In the implementation block
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(NSArray *)intentsSpecifiers;
-(void)_fetchIntentsSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)setIntentsSpecifiers:(NSArray *)arg1 ;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)viewDidTapLearnMore:(id)arg1 ;
-(void)tccPreferencesChanged;
@end

