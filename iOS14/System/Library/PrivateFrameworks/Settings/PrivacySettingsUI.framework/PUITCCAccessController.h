/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>

@class NSString, NSArray;

@interface PUITCCAccessController : PSListController {

	NSString* _serviceKey;
	BOOL _supportsClips;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;
	NSString* _clipsFooter;
	unsigned long long _appType;
	NSString* _appGroupHeader;
	NSArray* _appSpecifiers;

}

@property (nonatomic,copy) NSString * clipsFooter;                    //@synthesize clipsFooter=_clipsFooter - In the implementation block
@property (assign,nonatomic) BOOL supportsClips;                      //@synthesize supportsClips=_supportsClips - In the implementation block
@property (assign,nonatomic) unsigned long long appType;              //@synthesize appType=_appType - In the implementation block
@property (nonatomic,retain) NSString * appGroupHeader;               //@synthesize appGroupHeader=_appGroupHeader - In the implementation block
@property (nonatomic,retain) NSArray * appSpecifiers;                 //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
@property (nonatomic,copy) NSString * footer;                         //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                         //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;                    //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) NSString * serviceKey;                 //@synthesize serviceKey=_serviceKey - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(NSString *)footer;
-(id)specifiers;
-(void)setAppSpecifiers:(NSArray *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)header;
-(void)setAppType:(unsigned long long)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(NSString *)serviceKey;
-(NSString *)explanation;
-(unsigned long long)appType;
-(NSArray *)appSpecifiers;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)setSupportsClips:(BOOL)arg1 ;
-(void)setAppGroupHeader:(NSString *)arg1 ;
-(void)setClipsFooter:(NSString *)arg1 ;
-(BOOL)supportsClips;
-(NSString *)appGroupHeader;
-(NSString *)clipsFooter;
@end

