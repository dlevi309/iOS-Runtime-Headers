/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIPRLikenessResolver, CNUILikenessRendering, CNSchedulerProvider;
@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject {

	BOOL _threeDTouchEnabled;
	CNContactStore* _contactStore;
	unsigned long long _style;
	id<CNUIPRLikenessResolver> _likenessResolver;
	id<CNUILikenessRendering> _likenessRenderer;
	id<CNSchedulerProvider> _schedulerProvider;
	PRPersonaStore* _personaStore;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;              //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> likenessRenderer;               //@synthesize likenessRenderer=_likenessRenderer - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                            //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                  //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                 //@synthesize style=_style - In the implementation block
+(id)defaultSettings;
+(id)settingsWithContactStore:(id)arg1 ;
+(BOOL)threeDTouchEnabledDefaultValue;
+(id)defaultSettingsWithCacheSize:(unsigned long long)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(BOOL)arg4 schedulerProvider:(id)arg5 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(PRPersonaStore *)personaStore;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id<CNUILikenessRendering>)likenessRenderer;
-(id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(BOOL)arg4 schedulerProvider:(id)arg5 ;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setLikenessRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
@end

