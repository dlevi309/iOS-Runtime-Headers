/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIPRLikenessResolver.h>

@protocol CNUIPRLikenessResolver <NSObject>
@required
+(id)descriptorForRequiredKeys;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3;
-(id)placeholderProviderFactory;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;

@end


@protocol CNUIPRLikenessResolver, OS_dispatch_source, CNSchedulerProvider, CNUIPlaceholderProviderFactory;
@class CNCache, CNQueue, NSObject, CNContactStore, CNSchedulerProvider, NSString;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {

	id<CNUIPRLikenessResolver> _likenessResolver;
	CNCache* _likenessCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;                                //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) CNCache * likenessCache;                                                    //@synthesize likenessCache=_likenessCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                                    //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;                       //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;                        //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;              //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (assign,nonatomic) long long prohibitedSources; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) CNSchedulerProvider * schedulerProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)_cacheKeyForContact:(id)arg1 ;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(CNSchedulerProvider *)schedulerProvider;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(void)setProhibitedSources:(long long)arg1 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2 ;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(id)initWithLikenessResolver:(id)arg1 ;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 ;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(CNCache *)likenessCache;
-(void)emptyCache:(id)arg1 ;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(void)refreshCacheKey:(id)arg1 ;
-(CNQueue *)evictionQueue;
-(id)likenessLookup;
-(long long)prohibitedSources;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3 ;
-(void)setLikenessCache:(CNCache *)arg1 ;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
@end

