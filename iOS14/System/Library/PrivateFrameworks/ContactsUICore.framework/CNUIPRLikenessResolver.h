/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIPRLikenessResolver.h>
@class CNContactStore;


@protocol CNUIPRLikenessResolver <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@required
+(id)descriptorForRequiredKeys;
-(CNContactStore *)contactStore;
-(id)placeholderProviderFactory;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3;

@end


@protocol CNUIPRLikenessResolver, OS_dispatch_source, CNSchedulerProvider, CNUIPlaceholderProviderFactory;
@class CNContactStore, CNCache, CNQueue, NSObject, CNSchedulerProvider, NSString;

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
+(unsigned long long)maxContacts;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(CNContactStore *)contactStore;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(CNSchedulerProvider *)schedulerProvider;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2 ;
-(CNCache *)likenessCache;
-(CNQueue *)evictionQueue;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2 ;
-(id)likenessLookup;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)emptyCache:(id)arg1 ;
-(void)refreshCacheKey:(id)arg1 ;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 ;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(void)setProhibitedSources:(long long)arg1 ;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
-(id)initWithLikenessResolver:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3 ;
-(void)setLikenessCache:(CNCache *)arg1 ;
-(void)dealloc;
-(long long)prohibitedSources;
@end

