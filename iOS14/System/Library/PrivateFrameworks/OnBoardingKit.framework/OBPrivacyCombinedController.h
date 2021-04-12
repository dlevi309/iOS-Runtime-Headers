/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBPrivacyCombinedController : OBTableWelcomeController {

	BOOL _allowsOpeningSafari;
	BOOL _presentedFromPrivacyPane;
	NSString* _displayLanguage;

}

@property (assign) BOOL allowsOpeningSafari;                   //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (retain) NSString * displayLanguage;                 //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) BOOL presentedFromPrivacyPane;              //@synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane - In the implementation block
+(id)new;
+(void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)init;
-(NSString *)displayLanguage;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(BOOL)presentedFromPrivacyPane;
-(void)setPresentedFromPrivacyPane:(BOOL)arg1 ;
@end

