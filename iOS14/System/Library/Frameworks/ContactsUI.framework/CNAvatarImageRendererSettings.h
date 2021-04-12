/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUILikenessRendering;
@interface CNAvatarImageRendererSettings : NSObject {

	unsigned long long _style;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNUIPRLikenessResolver> _likenessResolver;
	id<CNUILikenessRendering> _likenessRenderer;

}

@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver;              //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,readonly) id<CNUILikenessRendering> likenessRenderer;               //@synthesize likenessRenderer=_likenessRenderer - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
+(id)defaultSettings;
+(id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 ;
+(id)settingsWithContactStore:(id)arg1 ;
+(id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
+(id)defaultSettingsWithCacheSize:(unsigned long long)arg1 ;
+(id)settingsWithContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(unsigned long long)arg1 ;
+(id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3 concurrentCaches:(BOOL)arg4 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id<CNUILikenessRendering>)likenessRenderer;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

