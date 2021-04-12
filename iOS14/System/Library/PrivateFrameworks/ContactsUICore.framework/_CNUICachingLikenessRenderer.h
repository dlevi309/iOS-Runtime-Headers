/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNAvatarCacheChangeListenerDelegate.h>
#import <libobjc.A.dylib/CNUILikenessRendering.h>

@protocol CNSchedulerProvider, OS_dispatch_source;
@class _CNUILikenessRenderer, CNCache, CNQueue, NSObject, CNAvatarCacheChangeListener, NSString;

@interface _CNUICachingLikenessRenderer : NSObject <CNAvatarCacheChangeListenerDelegate, CNUILikenessRendering> {

	os_unfair_lock_s _lock;
	BOOL _shouldRequireMainThread;
	_CNUILikenessRenderer* _renderer;
	id<CNSchedulerProvider> _schedulerProvider;
	CNCache* _imageCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;
	CNAvatarCacheChangeListener* _changeHistoryListener;

}

@property (nonatomic,readonly) _CNUILikenessRenderer * renderer;                                 //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) BOOL shouldRequireMainThread;                                     //@synthesize shouldRequireMainThread=_shouldRequireMainThread - In the implementation block
@property (nonatomic,retain) CNCache * imageCache;                                               //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                            //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;               //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;                //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (nonatomic,readonly) CNAvatarCacheChangeListener * changeHistoryListener;              //@synthesize changeHistoryListener=_changeHistoryListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1 ;
+(id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2 ;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(CNQueue *)evictionQueue;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4 ;
-(id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2 ;
-(void)invalidateCacheEntriesContainingIdentifiers:(id)arg1 ;
-(void)updateContactsWithIdentifiers:(id)arg1 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)emptyCache:(id)arg1 ;
-(void)refreshCacheKey:(id)arg1 ;
-(_CNUILikenessRenderer *)renderer;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(BOOL)arg4 contactStore:(id)arg5 ;
-(CNCache *)imageCache;
-(void)setImageCache:(CNCache *)arg1 ;
-(BOOL)shouldRequireMainThread;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(CNAvatarCacheChangeListener *)changeHistoryListener;
-(id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3 ;
-(void)dealloc;
@end

