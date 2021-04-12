/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogram.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram <NSSecureCoding> {

	ATXBackgroundSaver* _saver;
	_ATXDataStore* _datastore;
	long long _histogramType;

}

@property (nonatomic,readonly) _ATXDataStore * datastore;              //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) long long histogramType;                //@synthesize histogramType=_histogramType - In the implementation block
-(void)flush;
-(void)resetData;
-(BOOL)removeHistoryForBundleId:(id)arg1 ;
-(int)removeHistoryForBundleIds:(id)arg1 ;
-(void)resetHistogram:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 ;
-(_ATXDataStore *)datastore;
-(long long)histogramType;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 ;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4 ;
-(BOOL)removeHistoryForCategory:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3 maxCategoryCount:(unsigned short)arg4 pruningMethod:(long long)arg5 ;
@end

