/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, AMSBagNetworkTaskResult, NSObject, AMSBagNetworkTask, AMSProcessInfo, NSDate;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {

	/*^block*/id _dataSourceChangedHandler;
	/*^block*/id _dataSourceDataInvalidatedHandler;
	NSString* _profile;
	NSString* _profileVersion;
	AMSBagNetworkTaskResult* _cachedResult;
	NSObject*<OS_dispatch_queue> _cachedDataAccessQueue;
	NSString* _cachedStorefront;
	NSObject*<OS_dispatch_queue> _cachedStorefrontAccessQueue;
	AMSBagNetworkTask* _currentLoadTask;
	NSObject*<OS_dispatch_queue> _processAccountStoreDidChangeNotificationQueue;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,retain) AMSBagNetworkTaskResult * cachedResult;                                                  //@synthesize cachedResult=_cachedResult - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedDataAccessQueue;                                      //@synthesize cachedDataAccessQueue=_cachedDataAccessQueue - In the implementation block
@property (nonatomic,retain) NSString * cachedStorefront;                                                             //@synthesize cachedStorefront=_cachedStorefront - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedStorefrontAccessQueue;                                //@synthesize cachedStorefrontAccessQueue=_cachedStorefrontAccessQueue - In the implementation block
@property (nonatomic,retain) AMSBagNetworkTask * currentLoadTask;                                                     //@synthesize currentLoadTask=_currentLoadTask - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAccountStoreDidChangeNotificationQueue;              //@synthesize processAccountStoreDidChangeNotificationQueue=_processAccountStoreDidChangeNotificationQueue - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;                                                            //@synthesize processInfo=_processInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile;                                                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;                                                        //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) id dataSourceChangedHandler;                                                               //@synthesize dataSourceChangedHandler=_dataSourceChangedHandler - In the implementation block
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler;                                                       //@synthesize dataSourceDataInvalidatedHandler=_dataSourceDataInvalidatedHandler - In the implementation block
+(BOOL)_shouldProcessAccountStoreDidChangeNotification:(id)arg1 withMediaType:(id)arg2 ;
+(BOOL)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isLoaded;
-(AMSProcessInfo *)processInfo;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
-(void)setDataSourceChangedHandler:(id)arg1 ;
-(void)setDataSourceDataInvalidatedHandler:(id)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2 ;
-(id)dataSourceChangedHandler;
-(id)dataSourceDataInvalidatedHandler;
-(void)_invalidateCacheNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedDataAccessQueue;
-(AMSBagNetworkTaskResult *)cachedResult;
-(id)_fetchBag;
-(NSObject*<OS_dispatch_queue>)processAccountStoreDidChangeNotificationQueue;
-(NSObject*<OS_dispatch_queue>)cachedStorefrontAccessQueue;
-(NSString *)cachedStorefront;
-(void)setCachedStorefront:(NSString *)arg1 ;
-(void)setCachedResult:(AMSBagNetworkTaskResult *)arg1 ;
-(AMSBagNetworkTask *)currentLoadTask;
-(void)setCurrentLoadTask:(AMSBagNetworkTask *)arg1 ;
-(void)_updateCachedResult:(id)arg1 ;
-(void)setCachedDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCachedStorefrontAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProcessAccountStoreDidChangeNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

