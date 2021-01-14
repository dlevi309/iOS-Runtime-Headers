/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, HKSynchronousObserverSet, HKHealthStore, HKSourceListDataModel;

@interface HKSourceListDataSource : NSObject {

	NSObject*<OS_dispatch_queue> _mainQueue;
	NSObject*<OS_dispatch_queue> _resultsQueue;
	NSMutableArray* _transformers;
	NSMutableArray* _followupTransformers;
	NSArray* _rawSources;
	HKSynchronousObserverSet* _observers;
	int _notifyToken;
	BOOL _hasInitiatedFetch;
	AB _invalidated;
	BOOL _shouldFetchAppInstallationStatus;
	BOOL _shouldFetchAppIcons;
	BOOL _shouldFetchPurposeStrings;
	BOOL _shouldIncludeSpecialSources;
	BOOL _deliverUpdates;
	HKHealthStore* _healthStore;
	HKSourceListDataModel* _sources;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSourceListDataModel * sources;                  //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAppInstallationStatus;              //@synthesize shouldFetchAppInstallationStatus=_shouldFetchAppInstallationStatus - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAppIcons;                           //@synthesize shouldFetchAppIcons=_shouldFetchAppIcons - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchPurposeStrings;                     //@synthesize shouldFetchPurposeStrings=_shouldFetchPurposeStrings - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeSpecialSources;                   //@synthesize shouldIncludeSpecialSources=_shouldIncludeSpecialSources - In the implementation block
@property (assign,nonatomic) BOOL deliverUpdates;                                //@synthesize deliverUpdates=_deliverUpdates - In the implementation block
+(void)fetchIconForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
+(/*^block*/id)_builtinIconFetchTransformer;
+(void)_performTransformations:(id)arg1 model:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(/*^block*/id)_builtinInstallationStatusTransformer;
+(/*^block*/id)_builtinPurposeStringsFetchTransformer;
-(HKHealthStore *)healthStore;
-(void)addObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(HKSourceListDataModel *)sources;
-(void)removeObserver:(id)arg1 ;
-(void)fetchSources;
-(id)initWithHealthStore:(id)arg1 sources:(id)arg2 queue:(id)arg3 ;
-(void)setShouldFetchAppIcons:(BOOL)arg1 ;
-(void)setShouldFetchPurposeStrings:(BOOL)arg1 ;
-(void)setShouldIncludeSpecialSources:(BOOL)arg1 ;
-(void)setDeliverUpdates:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithHealthStore:(id)arg1 queue:(id)arg2 ;
-(void)_prependBuiltinTransformers;
-(void)_didFetchSources:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_specialAppBundleIdentifiers;
-(void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyObserversForDataSourceUpdate;
-(void)_throttledNotificationOfDataSourceUpdate;
-(void)fetchModelForSources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldFetchAppInstallationStatus:(BOOL)arg1 ;
-(void)addFetchTransformer:(/*^block*/id)arg1 ;
-(BOOL)shouldFetchAppInstallationStatus;
-(BOOL)shouldFetchAppIcons;
-(BOOL)shouldFetchPurposeStrings;
-(BOOL)shouldIncludeSpecialSources;
-(BOOL)deliverUpdates;
@end

