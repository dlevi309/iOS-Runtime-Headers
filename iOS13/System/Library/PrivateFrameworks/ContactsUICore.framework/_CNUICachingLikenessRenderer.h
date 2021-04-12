/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUILikenessRendering.h>

@protocol CNSchedulerProvider, OS_dispatch_source;
@class _CNUILikenessRenderer, CNCache, CNQueue, NSObject, NSString;

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering> {

	os_unfair_lock_s _lock;
	BOOL _shouldRequireMainThread;
	_CNUILikenessRenderer* _renderer;
	id<CNSchedulerProvider> _schedulerProvider;
	CNCache* _imageCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;

}

@property (nonatomic,readonly) _CNUILikenessRenderer * renderer;                                //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                       //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) BOOL shouldRequireMainThread;                                    //@synthesize shouldRequireMainThread=_shouldRequireMainThread - In the implementation block
@property (nonatomic,retain) CNCache * imageCache;                                              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                           //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;              //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;               //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1 ;
+(id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2 ;
-(void)dealloc;
-(CNCache *)imageCache;
-(void)setImageCache:(CNCache *)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(_CNUILikenessRenderer *)renderer;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2 ;
-(id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2 ;
-(void)emptyCache:(id)arg1 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(void)refreshCacheKey:(id)arg1 ;
-(CNQueue *)evictionQueue;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(BOOL)arg4 ;
-(id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3 ;
-(id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3 ;
-(id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3 ;
-(BOOL)shouldRequireMainThread;
@end

