/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBundleChannelProviderType.h>

@protocol FCBundleChannelProviderDelegate, FCCoreConfigurationManager;
@class NSArray, FCKeyValueStore, NFUnfairLock, FCPurchaseLookupRecordSource, NSString;

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType> {

	id<FCBundleChannelProviderDelegate> delegate;
	FCKeyValueStore* _localStore;
	NFUnfairLock* _accessLock;
	id<FCCoreConfigurationManager> _configurationManager;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	NSArray* _bundleChannelIDs;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                                             //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NFUnfairLock * accessLock;                                                //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                    //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;              //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,copy) NSArray * bundleChannelIDs;                                                 //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCBundleChannelProviderDelegate> delegate; 
-(NFUnfairLock *)accessLock;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setBundleChannelIDs:(NSArray *)arg1 ;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(id<FCBundleChannelProviderDelegate>)delegate;
-(void)loadInitialBundleChannelIDsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)bundleChannelIDs;
-(id)initWithLocalStore:(id)arg1 appActivityMonitor:(id)arg2 configurationManager:(id)arg3 purchaseLookupRecordSource:(id)arg4 ;
-(void)setDelegate:(id<FCBundleChannelProviderDelegate>)arg1 ;
-(void)updateBundleChannelIDs:(id)arg1 ;
-(void)activityObservingApplicationWindowWillBecomeForeground;
-(void)setAccessLock:(NFUnfairLock *)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)refreshBundleChannelIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchBundleTagIDsForPurchaseID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

