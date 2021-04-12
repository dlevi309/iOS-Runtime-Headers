/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface PUITCCAccessController : PSListController {

	NSString* _serviceKey;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * footer;                      //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                      //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;                 //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) NSString * serviceKey;              //@synthesize serviceKey=_serviceKey - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)init;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(NSString *)header;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(NSString *)serviceKey;
@end

