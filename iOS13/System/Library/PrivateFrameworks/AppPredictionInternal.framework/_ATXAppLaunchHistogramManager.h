/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class _ATXDataStore, NSObject, NSDictionary, NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	_ATXDataStore* _datastore;
	NSObject*<OS_dispatch_queue> _backgroundSaverQueue;
	NSDictionary* _parameters;
	NSMutableDictionary* _histograms;
	NSMutableDictionary* _categoricalHistograms;
	long long _SSIDPruningMethod;
	int _maxSSIDCount;
	long long _aprConfirmsRejectsPruningMethod;
	int _maxAprConfirmsRejectsIntentCount;
	long long _aprIntentDonationPruningMethod;
	int _maxAprIntentDonationIntentCount;
	long long _actionConfirmsRejectsPruningMethod;
	int _maxActionConfirmsRejectsActionCount;
	int _maxAppSpecificLocationMaxKeyCount;
	int _maxAppCoarseLocationMaxKeyCount;
	int _maxAppZoom7GeoHashMaxKeyCount;
	long long _appJointContextPruningMethod;
	int _maxAppJointContextKeyCount;
	BOOL _persistentStore;

}

@property (nonatomic,readonly) BOOL persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
+(id)sharedInstance;
+(void)resetSharedInstance;
+(void)useTemporarySharedInstance:(id)arg1 ;
+(void)releaseTemporarySharedInstance;
-(id)init;
-(BOOL)persistentStore;
-(id)initWithPersistentStore;
-(id)initWithInMemoryStore;
-(unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1 ;
-(int)getHistogramMaxCategoryCountFromAsset:(id)arg1 ;
-(id)initAndPersist:(BOOL)arg1 ;
-(void)exchangeDatastore:(id)arg1 ;
-(id)histogramForLaunchType:(long long)arg1 ;
-(id)categoricalHistogramForLaunchType:(long long)arg1 ;
@end

