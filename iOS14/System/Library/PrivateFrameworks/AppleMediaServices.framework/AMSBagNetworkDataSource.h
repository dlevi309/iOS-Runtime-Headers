/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>

@protocol OS_dispatch_queue;
@class AMSProcessInfo, NSString, AMSObserver, AMSBagNetworkTaskResult, NSObject, AMSBagNetworkTask, NSError, NSDate;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {

	/*^block*/id _dataSourceChangedHandler;
	/*^block*/id _dataSourceDataInvalidatedHandler;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;
	AMSObserver* _accountsChangedObserver;
	AMSBagNetworkTaskResult* _cachedResult;
	NSObject*<OS_dispatch_queue> _cachedDataAccessQueue;
	NSString* _cachedStorefront;
	NSObject*<OS_dispatch_queue> _cachedStorefrontAccessQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	AMSBagNetworkTask* _currentLoadTask;
	NSError* _activeFailure;
	NSObject*<OS_dispatch_queue> _processAccountStoreDidChangeNotificationQueue;

}

@property (nonatomic,retain) AMSObserver * accountsChangedObserver;                                                   //@synthesize accountsChangedObserver=_accountsChangedObserver - In the implementation block
@property (nonatomic,retain) AMSBagNetworkTaskResult * cachedResult;                                                  //@synthesize cachedResult=_cachedResult - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedDataAccessQueue;                                      //@synthesize cachedDataAccessQueue=_cachedDataAccessQueue - In the implementation block
@property (nonatomic,retain) NSString * cachedStorefront;                                                             //@synthesize cachedStorefront=_cachedStorefront - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedStorefrontAccessQueue;                                //@synthesize cachedStorefrontAccessQueue=_cachedStorefrontAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                                            //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) AMSBagNetworkTask * currentLoadTask;                                                     //@synthesize currentLoadTask=_currentLoadTask - In the implementation block
@property (nonatomic,retain) NSError * activeFailure;                                                                 //@synthesize activeFailure=_activeFailure - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAccountStoreDidChangeNotificationQueue;              //@synthesize processAccountStoreDidChangeNotificationQueue=_processAccountStoreDidChangeNotificationQueue - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo;                                                     //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * profile;                                                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;                                                        //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) NSString * descriptionExtended; 
@property (nonatomic,copy) id dataSourceChangedHandler;                                                               //@synthesize dataSourceChangedHandler=_dataSourceChangedHandler - In the implementation block
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler;                                                       //@synthesize dataSourceDataInvalidatedHandler=_dataSourceDataInvalidatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldProcessChangedAccount:(id)arg1 forMediaType:(id)arg2 ;
+(id)valueForURLVariable:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 ;
+(BOOL)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AMSProcessInfo *)processInfo;
-(void)setCachedStorefront:(NSString *)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2 ;
-(void)setCachedStorefrontAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(void)setCurrentLoadTask:(AMSBagNetworkTask *)arg1 ;
-(AMSObserver *)accountsChangedObserver;
-(void)setProcessAccountStoreDidChangeNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedStorefrontAccessQueue;
-(void)setDataSourceDataInvalidatedHandler:(id)arg1 ;
-(AMSBagNetworkTaskResult *)cachedResult;
-(void)setAccountsChangedObserver:(AMSObserver *)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedDataAccessQueue;
-(id)dataSourceDataInvalidatedHandler;
-(NSString *)description;
-(void)setDataSourceChangedHandler:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(id)dataSourceChangedHandler;
-(void)_accountStoreDidChange;
-(void)setCachedDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSError *)activeFailure;
-(AMSBagNetworkTask *)currentLoadTask;
-(void)setCachedResult:(AMSBagNetworkTaskResult *)arg1 ;
-(void)_invalidateCacheNotification:(id)arg1 ;
-(void)setActiveFailure:(NSError *)arg1 ;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
-(id)_fetchBag;
-(NSObject*<OS_dispatch_queue>)processAccountStoreDidChangeNotificationQueue;
-(NSString *)descriptionExtended;
-(BOOL)isLoaded;
-(NSString *)cachedStorefront;
-(void)dealloc;
-(NSString *)profileVersion;
-(void)_updateCachedResult:(id)arg1 ;
@end

