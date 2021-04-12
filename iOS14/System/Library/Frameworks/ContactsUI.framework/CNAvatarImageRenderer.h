/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIPRLikenessResolver, CNUILikenessRendering, CNSchedulerProvider;
@interface CNAvatarImageRenderer : NSObject {

	id<CNUIPRLikenessResolver> _resolver;
	id<CNUILikenessRendering> _renderer;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUIPRLikenessResolver> resolver;                    //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<CNUILikenessRendering> renderer;                     //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)descriptorForRequiredKeys;
-(id<CNUIPRLikenessResolver>)resolver;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(/*^block*/id)arg4 ;
-(id)avatarImageForContacts:(id)arg1 scope:(id)arg2 ;
-(id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2 ;
-(id)runScopeBasedImageObservable:(/*^block*/id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id<CNUILikenessRendering>)renderer;
-(id)placeholderImageProvider;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 imageHandler:(/*^block*/id)arg5 ;
-(id)renderMonogramForString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)renderMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
-(id)loadingPlaceholderImageProvider;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)renderMonogramForContact:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
-(id)renderAvatarsForContacts:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

