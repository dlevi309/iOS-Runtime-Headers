/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@class NSArray, CHManager, TUCallProviderManager, TUDispatcher, NSMutableSet, NSString;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate> {

	unsigned long long _coalescingStrategy;
	unsigned long long _options;
	NSArray* _recentCalls;
	unsigned long long _unreadCallCount;
	CHManager* _callHistoryManager;
	TUCallProviderManager* _callProviderManager;
	TUDispatcher* _dispatcher;
	TUDispatcher* _simpleIvarDispatcher;
	NSArray* _thirdPartyCallProviders;
	NSMutableSet* _metadataPreCachedOptions;

}

@property (nonatomic,retain) CHManager * callHistoryManager;                           //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (nonatomic,retain) TUCallProviderManager * callProviderManager;              //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) TUDispatcher * dispatcher;                                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) TUDispatcher * simpleIvarDispatcher;                      //@synthesize simpleIvarDispatcher=_simpleIvarDispatcher - In the implementation block
@property (nonatomic,retain) NSArray * recentCalls;                                    //@synthesize recentCalls=_recentCalls - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCallCount;                       //@synthesize unreadCallCount=_unreadCallCount - In the implementation block
@property (nonatomic,copy) NSArray * thirdPartyCallProviders;                          //@synthesize thirdPartyCallProviders=_thirdPartyCallProviders - In the implementation block
@property (nonatomic,retain) NSMutableSet * metadataPreCachedOptions;                  //@synthesize metadataPreCachedOptions=_metadataPreCachedOptions - In the implementation block
@property (assign,nonatomic) unsigned long long coalescingStrategy;                    //@synthesize coalescingStrategy=_coalescingStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)sharedControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)sharedController;
-(TUDispatcher *)dispatcher;
-(void)setDispatcher:(TUDispatcher *)arg1 ;
-(void)setSimpleIvarDispatcher:(TUDispatcher *)arg1 ;
-(id)init;
-(void)setRecentCalls:(NSArray *)arg1 ;
-(NSArray *)thirdPartyCallProviders;
-(NSMutableSet *)metadataPreCachedOptions;
-(void)callHistoryDatabaseChanged:(id)arg1 ;
-(unsigned long long)options;
-(void)deleteAllRecentCalls;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(void)setUnreadCallCount:(unsigned long long)arg1 ;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(id)recentCallsWithPredicate:(id)arg1 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(/*^block*/id)callHistoryManagerInitializationDispatchBlock;
-(void)deleteRecentCalls:(id)arg1 ;
-(TUCallProviderManager *)callProviderManager;
-(void)_updateCallHistoryManagerUsingCurrentOptions;
-(void)markRecentCallsAsReadWithPredicate:(id)arg1 ;
-(void)setMetadataPreCachedOptions:(NSMutableSet *)arg1 ;
-(void)reloadWithOptions:(unsigned long long)arg1 ;
-(void)markRecentAudioCallsAsRead;
-(void)markRecentCallsAsRead;
-(/*^block*/id)callHistoryManagerRecentCallsDispatchBlock;
-(void)loadDispatchQueue;
-(void)setThirdPartyCallProviders:(NSArray *)arg1 ;
-(void)deleteRecentCall:(id)arg1 ;
-(id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)arg1 ;
-(id)initWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)recentCalls;
-(CHManager *)callHistoryManager;
-(unsigned long long)unreadCallCount;
-(void)setCoalescingStrategy:(unsigned long long)arg1 ;
-(unsigned long long)coalescingStrategy;
-(void)markRecentVideoCallsAsRead;
-(void)dealloc;
-(void)boostQualityOfService;
-(void)dispatcherDidFinishBoost:(id)arg1 ;
-(TUDispatcher *)simpleIvarDispatcher;
@end

