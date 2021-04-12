/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(id<CNUIPRLikenessResolver>)resolver;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNUILikenessRendering>)renderer;
-(id)renderAvatarsForContacts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)renderMonogramForString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)avatarImageForContacts:(id)arg1 scope:(id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 imageHandler:(/*^block*/id)arg5 ;
-(id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)runScopeBasedImageObservable:(/*^block*/id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 placeholder:(BOOL)arg3 workScheduler:(id)arg4 ;
-(id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2 ;
-(id)placeholderImageProvider;
-(id)loadingPlaceholderImageProvider;
-(id)renderMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
-(id)renderMonogramForContact:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
@end

